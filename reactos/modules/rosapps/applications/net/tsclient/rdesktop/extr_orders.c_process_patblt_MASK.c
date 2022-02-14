
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int fgcolour; int bgcolour; TYPE_2__ brush; int cy; int cx; int y; int x; int opcode; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef TYPE_1__ PATBLT_ORDER ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(RDPCLIENT * VAR_0, STREAM VAR_1, PATBLT_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 if (VAR_3 & 0x0001)
  FUNC_4(VAR_1, &VAR_2->x, VAR_4);

 if (VAR_3 & 0x0002)
  FUNC_4(VAR_1, &VAR_2->y, VAR_4);

 if (VAR_3 & 0x0004)
  FUNC_4(VAR_1, &VAR_2->cx, VAR_4);

 if (VAR_3 & 0x0008)
  FUNC_4(VAR_1, &VAR_2->cy, VAR_4);

 if (VAR_3 & 0x0010)
  FUNC_2(VAR_1, VAR_2->opcode);

 if (VAR_3 & 0x0020)
  FUNC_3(VAR_1, &VAR_2->bgcolour);

 if (VAR_3 & 0x0040)
  FUNC_3(VAR_1, &VAR_2->fgcolour);

 FUNC_5(VAR_1, &VAR_2->brush, VAR_3 >> 7);

 FUNC_0(("PATBLT(op=0x%x,x=%d,y=%d,cx=%d,cy=%d,bs=%d,bg=0x%x,fg=0x%x)\n", VAR_2->opcode, VAR_2->x,
        VAR_2->y, VAR_2->cx, VAR_2->cy, VAR_2->brush.style, VAR_2->bgcolour, VAR_2->fgcolour));





 FUNC_6(VAR_0, VAR_2->opcode, VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy,
    &VAR_2->brush, VAR_2->bgcolour, VAR_2->fgcolour);

}
