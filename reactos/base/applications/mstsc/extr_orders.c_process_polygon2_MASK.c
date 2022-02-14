
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_11__ {int style; } ;
struct TYPE_10__ {int opcode; int fillmode; int npoints; int datasize; int* data; int fgcolour; int bgcolour; void* y; void* x; TYPE_5__ brush; } ;
struct TYPE_9__ {void* y; void* x; } ;
typedef int STREAM ;
typedef TYPE_1__ RD_POINT ;
typedef int RD_BOOL ;
typedef TYPE_2__ POLYGON2_ORDER ;
typedef int BRUSH ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 void* FUNC_5 (int*,int*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,void**,int ) ;
 int FUNC_8 (int ,TYPE_5__*,int) ;
 int FUNC_9 (int *,TYPE_5__*) ;
 int FUNC_10 (int,int,TYPE_1__*,int,int *,int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(STREAM VAR_0, POLYGON2_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 uint8 VAR_7 = 0;
 RD_POINT *VAR_8;
 BRUSH VAR_9;

 if (VAR_2 & 0x0001)
  FUNC_7(VAR_0, &VAR_1->x, VAR_3);

 if (VAR_2 & 0x0002)
  FUNC_7(VAR_0, &VAR_1->y, VAR_3);

 if (VAR_2 & 0x0004)
  FUNC_2(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x0008)
  FUNC_2(VAR_0, VAR_1->fillmode);

 if (VAR_2 & 0x0010)
  FUNC_6(VAR_0, &VAR_1->bgcolour);

 if (VAR_2 & 0x0020)
  FUNC_6(VAR_0, &VAR_1->fgcolour);

 FUNC_8(VAR_0, &VAR_1->brush, VAR_2 >> 6);

 if (VAR_2 & 0x0800)
  FUNC_2(VAR_0, VAR_1->npoints);

 if (VAR_2 & 0x1000)
 {
  FUNC_2(VAR_0, VAR_1->datasize);
  FUNC_3(VAR_0, VAR_1->data, VAR_1->datasize);
 }

 FUNC_0(("POLYGON2(x=%d,y=%d,op=0x%x,fm=%d,bs=%d,bg=0x%x,fg=0x%x,n=%d,sz=%d)\n",
        VAR_1->x, VAR_1->y, VAR_1->opcode, VAR_1->fillmode, VAR_1->brush.style, VAR_1->bgcolour, VAR_1->fgcolour,
        VAR_1->npoints, VAR_1->datasize));

 FUNC_0(("Data: "));

 for (VAR_4 = 0; VAR_4 < VAR_1->datasize; VAR_4++)
  FUNC_0(("%02x ", VAR_1->data[VAR_4]));

 FUNC_0(("\n"));

 if (VAR_1->opcode < 0x01 || VAR_1->opcode > 0x10)
 {
  FUNC_1("bad ROP2 0x%x\n", VAR_1->opcode);
  return;
 }

 FUNC_9(&VAR_9, &VAR_1->brush);

 VAR_8 = (RD_POINT *) FUNC_12((VAR_1->npoints + 1) * sizeof(RD_POINT));
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
  FUNC_10(VAR_1->opcode - 1, VAR_1->fillmode, VAR_8, VAR_1->npoints + 1,
      &VAR_9, VAR_1->bgcolour, VAR_1->fgcolour);
 else
  FUNC_1("polygon2 parse error\n");

 FUNC_11(VAR_8);
}
