
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int loaded; } ;
typedef TYPE_1__ obs_script_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;

bool FUNC_6(obs_script_t *VAR_3)
{
 if (!VAR_2)
  return 0;
 if (!FUNC_5(VAR_3))
  return 0;
out:
 return VAR_3->loaded;
}
