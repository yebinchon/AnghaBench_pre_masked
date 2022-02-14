
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int random_reg1; int ** message; } ;
typedef TYPE_1__ MATRIX_MESSAGE ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(MATRIX_MESSAGE *VAR_1, int VAR_2)
{
 while(VAR_2--)
 {
  int VAR_3;

  VAR_1->random_reg1 = FUNC_0(VAR_1->random_reg1);
  VAR_3 = VAR_1->random_reg1 & 0xffff;

  VAR_1->message[VAR_3 / 256][VAR_3 % 256] |= VAR_0;
 }
}
