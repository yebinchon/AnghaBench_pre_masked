
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int cy; int cx; int y; int x; int opcode; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef TYPE_1__ DESTBLT_ORDER ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(RDPCLIENT * VAR_0, STREAM VAR_1, DESTBLT_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 if (VAR_3 & 0x01)
  FUNC_3(VAR_1, &VAR_2->x, VAR_4);

 if (VAR_3 & 0x02)
  FUNC_3(VAR_1, &VAR_2->y, VAR_4);

 if (VAR_3 & 0x04)
  FUNC_3(VAR_1, &VAR_2->cx, VAR_4);

 if (VAR_3 & 0x08)
  FUNC_3(VAR_1, &VAR_2->cy, VAR_4);

 if (VAR_3 & 0x10)
  FUNC_2(VAR_1, VAR_2->opcode);

 FUNC_0(("DESTBLT(op=0x%x,x=%d,y=%d,cx=%d,cy=%d)\n",
        VAR_2->opcode, VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy));




 FUNC_4(VAR_0, VAR_2->opcode, VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy);

}
