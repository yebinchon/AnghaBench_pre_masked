
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_rmh {int* cmd; int cmd_len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1(struct pcxhr_rmh *VAR_3, int VAR_4,
          unsigned int VAR_5, unsigned int VAR_6,
          unsigned int VAR_7)
{
 FUNC_0(VAR_5 > VAR_2);
 if (VAR_4)
  VAR_3->cmd[0] |= 0x800;
 if (VAR_5)
  VAR_3->cmd[0] |= (VAR_5 << VAR_0);
 if (VAR_6) {
  FUNC_0(VAR_6 > VAR_2);
  VAR_3->cmd[0] |= VAR_6;
 }
 if(VAR_7) {
  FUNC_0(VAR_7 > VAR_1);
  VAR_3->cmd[1] = VAR_7;
  VAR_3->cmd_len = 2;
 }
}
