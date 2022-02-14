
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int fgcolour; int bgcolour; int cy; int cx; int y; int x; int opcode; TYPE_2__ brush; } ;
typedef int STREAM ;
typedef int RD_BOOL ;
typedef TYPE_1__ PATBLT_ORDER ;
typedef int BRUSH ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_8(STREAM VAR_0, PATBLT_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 BRUSH VAR_4;

 if (VAR_2 & 0x0001)
  FUNC_4(VAR_0, &VAR_1->x, VAR_3);

 if (VAR_2 & 0x0002)
  FUNC_4(VAR_0, &VAR_1->y, VAR_3);

 if (VAR_2 & 0x0004)
  FUNC_4(VAR_0, &VAR_1->cx, VAR_3);

 if (VAR_2 & 0x0008)
  FUNC_4(VAR_0, &VAR_1->cy, VAR_3);

 if (VAR_2 & 0x0010)
  FUNC_2(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x0020)
  FUNC_3(VAR_0, &VAR_1->bgcolour);

 if (VAR_2 & 0x0040)
  FUNC_3(VAR_0, &VAR_1->fgcolour);

 FUNC_5(VAR_0, &VAR_1->brush, VAR_2 >> 7);

 FUNC_0(("PATBLT(op=0x%x,x=%d,y=%d,cx=%d,cy=%d,bs=%d,bg=0x%x,fg=0x%x)\n", VAR_1->opcode, VAR_1->x,
        VAR_1->y, VAR_1->cx, VAR_1->cy, VAR_1->brush.style, VAR_1->bgcolour, VAR_1->fgcolour));

 FUNC_6(&VAR_4, &VAR_1->brush);

 FUNC_7(FUNC_1(VAR_1->opcode), VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy,
    &VAR_4, VAR_1->bgcolour, VAR_1->fgcolour);
}
