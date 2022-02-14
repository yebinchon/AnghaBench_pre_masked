
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tx ;
struct timex {int constant; int modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct timex*) ;
 int FUNC_1 (struct timex*,int ,int) ;

int FUNC_2(int VAR_1)
{
 struct timex VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));

 VAR_2.modes = VAR_0;
 VAR_2.constant = VAR_1;

 return FUNC_0(&VAR_2);
}
