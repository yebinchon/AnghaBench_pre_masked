
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {scalar_t__ status; int modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct timex*) ;

int FUNC_1(void)
{
 struct timex VAR_1;
 int VAR_2;

 VAR_1.modes = VAR_0;
 VAR_1.status = 0;
 VAR_2 = FUNC_0(&VAR_1);
 return VAR_2;
}
