
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum lockdep_ok { ____Placeholder_lockdep_ok } lockdep_ok ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned int,int *) ;
 int VAR_1 ;

void FUNC_3(unsigned VAR_2, enum lockdep_ok VAR_3)
{
 if (VAR_3 == VAR_0 && FUNC_0())
  FUNC_1("Disabling lock debugging due to kernel taint\n");

 FUNC_2(VAR_2, &VAR_1);
}
