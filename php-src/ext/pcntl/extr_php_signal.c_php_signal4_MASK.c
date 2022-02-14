
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int * sa_handler; int * sa_sigaction; int sa_flags; int sa_mask; } ;
typedef int Sigfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,struct sigaction*,struct sigaction*) ;

Sigfunc *FUNC_3(int VAR_4, Sigfunc *VAR_5, int VAR_6, int VAR_7)
{
 struct sigaction VAR_8,VAR_9;




 VAR_8.sa_handler = VAR_5;

 if (VAR_7) {
  FUNC_1(&VAR_8.sa_mask);
 } else {
  FUNC_0(&VAR_8.sa_mask);
 }
 VAR_8.sa_flags = 0;



 if (!VAR_6) {



 } else {



 }
 if (FUNC_2(VAR_4, &VAR_8, &VAR_9) < 0) {
  return (Sigfunc*)VAR_3;
 }




 return VAR_9.sa_handler;

}
