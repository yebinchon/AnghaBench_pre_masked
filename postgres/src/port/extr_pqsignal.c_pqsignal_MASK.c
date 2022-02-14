
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; int sa_flags; int sa_mask; } ;
typedef int pqsigfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;

pqsigfunc
FUNC_3(int VAR_4, pqsigfunc VAR_5)
{

 struct sigaction VAR_6,
    VAR_7;

 VAR_6.sa_handler = VAR_5;
 FUNC_1(&VAR_6.sa_mask);
 VAR_6.sa_flags = VAR_1;




 if (FUNC_0(VAR_4, &VAR_6, &VAR_7) < 0)
  return VAR_3;
 return VAR_7.sa_handler;



}
