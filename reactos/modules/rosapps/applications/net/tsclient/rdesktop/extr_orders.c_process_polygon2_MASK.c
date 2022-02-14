
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_11__ {int style; } ;
struct TYPE_10__ {void* y; void* x; } ;
struct TYPE_9__ {int opcode; int fillmode; int npoints; int datasize; int* data; int fgcolour; int bgcolour; TYPE_4__ brush; void* y; void* x; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef TYPE_1__ POLYGON2_ORDER ;
typedef TYPE_2__ POINT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 void* FUNC_7 (int*,int*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,void**,int ) ;
 int FUNC_10 (int ,TYPE_4__*,int) ;
 int FUNC_11 (int *,int,int,TYPE_2__*,int,TYPE_4__*,int ,int ) ;

__attribute__((used)) static void
FUNC_12(RDPCLIENT * VAR_0, STREAM VAR_1, POLYGON2_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 uint8 VAR_8 = 0;
 POINT *VAR_9;

 if (VAR_3 & 0x0001)
  FUNC_9(VAR_1, &VAR_2->x, VAR_4);

 if (VAR_3 & 0x0002)
  FUNC_9(VAR_1, &VAR_2->y, VAR_4);

 if (VAR_3 & 0x0004)
  FUNC_3(VAR_1, VAR_2->opcode);

 if (VAR_3 & 0x0008)
  FUNC_3(VAR_1, VAR_2->fillmode);

 if (VAR_3 & 0x0010)
  FUNC_8(VAR_1, &VAR_2->bgcolour);

 if (VAR_3 & 0x0020)
  FUNC_8(VAR_1, &VAR_2->fgcolour);

 FUNC_10(VAR_1, &VAR_2->brush, VAR_3 >> 6);

 if (VAR_3 & 0x0800)
  FUNC_3(VAR_1, VAR_2->npoints);

 if (VAR_3 & 0x1000)
 {
  FUNC_3(VAR_1, VAR_2->datasize);
  FUNC_4(VAR_1, VAR_2->data, VAR_2->datasize);
 }

 FUNC_0(("POLYGON2(x=%d,y=%d,op=0x%x,fm=%d,bs=%d,bg=0x%x,fg=0x%x,n=%d,sz=%d)\n",
        VAR_2->x, VAR_2->y, VAR_2->opcode, VAR_2->fillmode, VAR_2->brush.style, VAR_2->bgcolour, VAR_2->fgcolour,
        VAR_2->npoints, VAR_2->datasize));

 FUNC_0(("Data: "));

 for (VAR_5 = 0; VAR_5 < VAR_2->datasize; VAR_5++)
  FUNC_0(("%02x ", VAR_2->data[VAR_5]));

 FUNC_0(("\n"));

 if (VAR_2->opcode < 0x01 || VAR_2->opcode > 0x10)
 {
  FUNC_1("bad ROP2 0x%x\n", VAR_2->opcode);
  return;
 }

 VAR_9 = (POINT *) FUNC_5((VAR_2->npoints + 1) * sizeof(POINT));

 if(VAR_9 == ((void*)0))
  return;

 FUNC_6(VAR_9, 0, (VAR_2->npoints + 1) * sizeof(POINT));

 VAR_9[0].x = VAR_2->x;
 VAR_9[0].y = VAR_2->y;

 VAR_5 = 0;
 VAR_6 = ((VAR_2->npoints - 1) / 4) + 1;
 for (VAR_7 = 1; (VAR_7 <= VAR_2->npoints) && (VAR_7 < 256) && (VAR_6 < VAR_2->datasize); VAR_7++)
 {
  if ((VAR_7 - 1) % 4 == 0)
   VAR_8 = VAR_2->data[VAR_5++];

  if (~VAR_8 & 0x80)
   VAR_9[VAR_7].x = FUNC_7(VAR_2->data, &VAR_6);

  if (~VAR_8 & 0x40)
   VAR_9[VAR_7].y = FUNC_7(VAR_2->data, &VAR_6);

  VAR_8 <<= 2;
 }

 if (VAR_7 - 1 == VAR_2->npoints)




  FUNC_11(VAR_0, VAR_2->opcode, VAR_2->fillmode, VAR_9, VAR_2->npoints + 1,
      &VAR_2->brush, VAR_2->bgcolour, VAR_2->fgcolour);

 else
  FUNC_1("polygon2 parse error\n");

 FUNC_2(VAR_9);
}
