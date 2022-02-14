
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; int sa_flags; int sa_mask; } ;
typedef scalar_t__ pqsigfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int,struct sigaction*,struct sigaction*) ;
 int FUNC_2 (int *) ;

pqsigfunc
FUNC_3(int VAR_7, pqsigfunc VAR_8)
{

 struct sigaction VAR_9,
    VAR_10;

 VAR_9.sa_handler = VAR_8;
 if (VAR_8 == VAR_6 || VAR_8 == VAR_4)
 {

  FUNC_2(&VAR_9.sa_mask);
  VAR_9.sa_flags = VAR_2;
 }
 else
 {
  VAR_9.sa_mask = VAR_0;
  VAR_9.sa_flags = 0;
 }




 if (FUNC_1(VAR_7, &VAR_9, &VAR_10) < 0)
  return VAR_5;
 return VAR_10.sa_handler;



}
