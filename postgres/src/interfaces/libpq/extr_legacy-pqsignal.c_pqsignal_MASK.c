
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
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;

pqsigfunc
FUNC_3(int VAR_5, pqsigfunc VAR_6)
{

 struct sigaction VAR_7,
    VAR_8;

 VAR_7.sa_handler = VAR_6;
 FUNC_1(&VAR_7.sa_mask);
 VAR_7.sa_flags = 0;
 if (VAR_5 != VAR_2)
  VAR_7.sa_flags |= VAR_1;




 if (FUNC_0(VAR_5, &VAR_7, &VAR_8) < 0)
  return VAR_4;
 return VAR_8.sa_handler;



}
