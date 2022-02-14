
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int sasl_mechanism; } ;
typedef TYPE_1__ fe_scram_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

bool
FUNC_1(void *VAR_2)
{
 fe_scram_state *VAR_3 = (fe_scram_state *) VAR_2;


 if (VAR_3 == ((void*)0))
  return 0;


 if (VAR_3->state != VAR_0)
  return 0;


 if (FUNC_0(VAR_3->sasl_mechanism, VAR_1) != 0)
  return 0;


 return 1;
}
