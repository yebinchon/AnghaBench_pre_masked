
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_11__ {int colour; scalar_t__ width; scalar_t__ style; } ;
struct TYPE_10__ {int opcode; int lines; int datasize; int* data; int fgcolour; void* y; void* x; } ;
struct TYPE_9__ {void* y; void* x; } ;
typedef int STREAM ;
typedef TYPE_1__ RD_POINT ;
typedef int RD_BOOL ;
typedef TYPE_2__ POLYLINE_ORDER ;
typedef TYPE_3__ PEN ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 void* FUNC_5 (int*,int*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,void**,int ) ;
 int FUNC_8 (int,TYPE_1__*,int,TYPE_3__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(STREAM VAR_0, POLYLINE_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 uint8 VAR_7 = 0;
 PEN VAR_8;
 RD_POINT *VAR_9;

 if (VAR_2 & 0x01)
  FUNC_7(VAR_0, &VAR_1->x, VAR_3);

 if (VAR_2 & 0x02)
  FUNC_7(VAR_0, &VAR_1->y, VAR_3);

 if (VAR_2 & 0x04)
  FUNC_2(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x10)
  FUNC_6(VAR_0, &VAR_1->fgcolour);

 if (VAR_2 & 0x20)
  FUNC_2(VAR_0, VAR_1->lines);

 if (VAR_2 & 0x40)
 {
  FUNC_2(VAR_0, VAR_1->datasize);
  FUNC_3(VAR_0, VAR_1->data, VAR_1->datasize);
 }

 FUNC_0(("POLYLINE(x=%d,y=%d,op=0x%x,fg=0x%x,n=%d,sz=%d)\n",
        VAR_1->x, VAR_1->y, VAR_1->opcode, VAR_1->fgcolour, VAR_1->lines, VAR_1->datasize));

 FUNC_0(("Data: "));

 for (VAR_4 = 0; VAR_4 < VAR_1->datasize; VAR_4++)
  FUNC_0(("%02x ", VAR_1->data[VAR_4]));

 FUNC_0(("\n"));

 if (VAR_1->opcode < 0x01 || VAR_1->opcode > 0x10)
 {
  FUNC_1("bad ROP2 0x%x\n", VAR_1->opcode);
  return;
 }

 VAR_9 = (RD_POINT *) FUNC_10((VAR_1->lines + 1) * sizeof(RD_POINT));
 FUNC_4(VAR_9, 0, (VAR_1->lines + 1) * sizeof(RD_POINT));

 VAR_9[0].x = VAR_1->x;
 VAR_9[0].y = VAR_1->y;
 VAR_8.style = VAR_8.width = 0;
 VAR_8.colour = VAR_1->fgcolour;

 VAR_4 = 0;
 VAR_6 = ((VAR_1->lines - 1) / 4) + 1;
 for (VAR_5 = 1; (VAR_5 <= VAR_1->lines) && (VAR_6 < VAR_1->datasize); VAR_5++)
 {
  if ((VAR_5 - 1) % 4 == 0)
   VAR_7 = VAR_1->data[VAR_4++];

  if (~VAR_7 & 0x80)
   VAR_9[VAR_5].x = FUNC_5(VAR_1->data, &VAR_6);

  if (~VAR_7 & 0x40)
   VAR_9[VAR_5].y = FUNC_5(VAR_1->data, &VAR_6);

  VAR_7 <<= 2;
 }

 if (VAR_5 - 1 == VAR_1->lines)
  FUNC_8(VAR_1->opcode - 1, VAR_9, VAR_1->lines + 1, &VAR_8);
 else
  FUNC_1("polyline parse error\n");

 FUNC_9(VAR_9);
}
