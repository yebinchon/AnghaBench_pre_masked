
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {scalar_t__ status; void* modes; scalar_t__ maxerror; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct timex*) ;

int FUNC_1(void)
{
 struct timex VAR_3;
 int VAR_4;







 VAR_3.modes = VAR_1;
 VAR_3.status = VAR_2;
 VAR_4 = FUNC_0(&VAR_3);


 VAR_3.modes = VAR_0;
 VAR_3.maxerror = 0;
 VAR_4 = FUNC_0(&VAR_3);


 VAR_3.modes = VAR_1;
 VAR_3.status = 0;
 VAR_4 = FUNC_0(&VAR_3);

 return VAR_4;
}
