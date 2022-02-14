
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int srcy; int srcx; int cy; int cx; int y; int x; int opcode; } ;
typedef int STREAM ;
typedef TYPE_1__ SCREENBLT_ORDER ;
typedef int RD_BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(STREAM VAR_0, SCREENBLT_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 if (VAR_2 & 0x0001)
  FUNC_3(VAR_0, &VAR_1->x, VAR_3);

 if (VAR_2 & 0x0002)
  FUNC_3(VAR_0, &VAR_1->y, VAR_3);

 if (VAR_2 & 0x0004)
  FUNC_3(VAR_0, &VAR_1->cx, VAR_3);

 if (VAR_2 & 0x0008)
  FUNC_3(VAR_0, &VAR_1->cy, VAR_3);

 if (VAR_2 & 0x0010)
  FUNC_2(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x0020)
  FUNC_3(VAR_0, &VAR_1->srcx, VAR_3);

 if (VAR_2 & 0x0040)
  FUNC_3(VAR_0, &VAR_1->srcy, VAR_3);

 FUNC_0(("SCREENBLT(op=0x%x,x=%d,y=%d,cx=%d,cy=%d,srcx=%d,srcy=%d)\n",
        VAR_1->opcode, VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy, VAR_1->srcx, VAR_1->srcy));

 FUNC_4(FUNC_1(VAR_1->opcode), VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy, VAR_1->srcx, VAR_1->srcy);
}
