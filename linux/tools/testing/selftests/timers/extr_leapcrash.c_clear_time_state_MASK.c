
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {scalar_t__ status; void* modes; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct timex*) ;

int FUNC_1(void)
{
 struct timex VAR_2;
 int VAR_3;







 VAR_2.modes = VAR_0;
 VAR_2.status = VAR_1;
 VAR_3 = FUNC_0(&VAR_2);

 VAR_2.modes = VAR_0;
 VAR_2.status = 0;
 VAR_3 = FUNC_0(&VAR_2);

 return VAR_3;
}
