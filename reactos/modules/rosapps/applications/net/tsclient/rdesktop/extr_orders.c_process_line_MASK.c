
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int colour; } ;
struct TYPE_5__ {int opcode; TYPE_2__ pen; int endy; int endx; int starty; int startx; int bgcolour; int mixmode; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef TYPE_1__ LINE_ORDER ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int) ;
 int FUNC_7 (int *,int,int ,int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_0, STREAM VAR_1, LINE_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 if (VAR_3 & 0x0001)
  FUNC_2(VAR_1, VAR_2->mixmode);

 if (VAR_3 & 0x0002)
  FUNC_5(VAR_1, &VAR_2->startx, VAR_4);

 if (VAR_3 & 0x0004)
  FUNC_5(VAR_1, &VAR_2->starty, VAR_4);

 if (VAR_3 & 0x0008)
  FUNC_5(VAR_1, &VAR_2->endx, VAR_4);

 if (VAR_3 & 0x0010)
  FUNC_5(VAR_1, &VAR_2->endy, VAR_4);

 if (VAR_3 & 0x0020)
  FUNC_4(VAR_1, &VAR_2->bgcolour);

 if (VAR_3 & 0x0040)
  FUNC_3(VAR_1, VAR_2->opcode);

 FUNC_6(VAR_1, &VAR_2->pen, VAR_3 >> 7);

 FUNC_0(("LINE(op=0x%x,sx=%d,sy=%d,dx=%d,dy=%d,fg=0x%x)\n",
        VAR_2->opcode, VAR_2->startx, VAR_2->starty, VAR_2->endx, VAR_2->endy, VAR_2->pen.colour));

 if (VAR_2->opcode < 0x01 || VAR_2->opcode > 0x10)
 {
  FUNC_1("bad ROP2 0x%x\n", VAR_2->opcode);
  return;
 }




 FUNC_7(VAR_0, VAR_2->opcode, VAR_2->startx, VAR_2->starty, VAR_2->endx, VAR_2->endy, &VAR_2->pen);

}
