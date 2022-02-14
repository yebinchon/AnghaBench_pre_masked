
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strm_value ;
typedef int strm_string ;
struct TYPE_3__ {int * env; } ;
typedef TYPE_1__ strm_state ;
typedef int strm_env ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int * VAR_1 ;
 void* FUNC_1 (int ) ;

int
FUNC_2(strm_state* VAR_2, strm_string VAR_3, strm_value VAR_4)
{
  strm_env *VAR_5;

  if (!VAR_2) {
    if (!VAR_1) {
      VAR_1 = FUNC_1(VAR_0);
    }
    VAR_5 = VAR_1;
  }
  else {
    if (!VAR_2->env) {
      VAR_2->env = FUNC_1(VAR_0);
    }
    VAR_5 = VAR_2->env;
  }
  return FUNC_0(VAR_5, VAR_3, VAR_4);
}
