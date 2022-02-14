
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* randstate; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 double FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*) ;

double
FUNC_3(void)
{

 if (VAR_0.randstate[0] == 0)
  FUNC_2(FUNC_0(), VAR_0.randstate);


 return FUNC_1(VAR_0.randstate);
}
