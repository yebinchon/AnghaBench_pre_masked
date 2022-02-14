
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_8__ {int opcode; int fillmode; int npoints; int datasize; int* data; int fgcolour; void* y; void* x; } ;
struct TYPE_7__ {void* y; void* x; } ;
typedef int STREAM ;
typedef TYPE_1__ RD_POINT ;
typedef int RD_BOOL ;
typedef TYPE_2__ POLYGON_ORDER ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 void* FUNC_5 (int*,int*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,void**,int ) ;
 int FUNC_8 (int,int,TYPE_1__*,int,int *,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(STREAM VAR_0, POLYGON_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 uint8 VAR_7 = 0;
 RD_POINT *VAR_8;

 if (VAR_2 & 0x01)
  FUNC_7(VAR_0, &VAR_1->x, VAR_3);

 if (VAR_2 & 0x02)
  FUNC_7(VAR_0, &VAR_1->y, VAR_3);

 if (VAR_2 & 0x04)
  FUNC_2(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x08)
  FUNC_2(VAR_0, VAR_1->fillmode);

 if (VAR_2 & 0x10)
  FUNC_6(VAR_0, &VAR_1->fgcolour);

 if (VAR_2 & 0x20)
  FUNC_2(VAR_0, VAR_1->npoints);

 if (VAR_2 & 0x40)
 {
  FUNC_2(VAR_0, VAR_1->datasize);
  FUNC_3(VAR_0, VAR_1->data, VAR_1->datasize);
 }

 FUNC_0(("POLYGON(x=%d,y=%d,op=0x%x,fm=%d,fg=0x%x,n=%d,sz=%d)\n",
        VAR_1->x, VAR_1->y, VAR_1->opcode, VAR_1->fillmode, VAR_1->fgcolour, VAR_1->npoints, VAR_1->datasize));

 FUNC_0(("Data: "));

 for (VAR_4 = 0; VAR_4 < VAR_1->datasize; VAR_4++)
  FUNC_0(("%02x ", VAR_1->data[VAR_4]));

 FUNC_0(("\n"));

 if (VAR_1->opcode < 0x01 || VAR_1->opcode > 0x10)
 {
  FUNC_1("bad ROP2 0x%x\n", VAR_1->opcode);
  return;
 }

 VAR_8 = (RD_POINT *) FUNC_10((VAR_1->npoints + 1) * sizeof(RD_POINT));
 FUNC_4(VAR_8, 0, (VAR_1->npoints + 1) * sizeof(RD_POINT));

 VAR_8[0].x = VAR_1->x;
 VAR_8[0].y = VAR_1->y;

 VAR_4 = 0;
 VAR_5 = ((VAR_1->npoints - 1) / 4) + 1;
 for (VAR_6 = 1; (VAR_6 <= VAR_1->npoints) && (VAR_6 < 256) && (VAR_5 < VAR_1->datasize); VAR_6++)
 {
  if ((VAR_6 - 1) % 4 == 0)
   VAR_7 = VAR_1->data[VAR_4++];

  if (~VAR_7 & 0x80)
   VAR_8[VAR_6].x = FUNC_5(VAR_1->data, &VAR_5);

  if (~VAR_7 & 0x40)
   VAR_8[VAR_6].y = FUNC_5(VAR_1->data, &VAR_5);

  VAR_7 <<= 2;
 }

 if (VAR_6 - 1 == VAR_1->npoints)
  FUNC_8(VAR_1->opcode - 1, VAR_1->fillmode, VAR_8, VAR_1->npoints + 1, ((void*)0), 0,
      VAR_1->fgcolour);
 else
  FUNC_1("polygon parse error\n");

 FUNC_9(VAR_8);
}
