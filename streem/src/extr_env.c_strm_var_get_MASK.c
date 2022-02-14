
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strm_value ;
typedef int strm_string ;
struct TYPE_3__ {struct TYPE_3__* prev; scalar_t__ env; } ;
typedef TYPE_1__ strm_state ;
typedef int strm_env ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int * VAR_2 ;

int
FUNC_1(strm_state* VAR_3, strm_string VAR_4, strm_value* VAR_5)
{
  while (VAR_3) {
    if (VAR_3->env) {
      if (FUNC_0((strm_env*)VAR_3->env, VAR_4, VAR_5) == 0)
        return VAR_1;
    }
    VAR_3 = VAR_3->prev;
  }
  if (!VAR_2) return VAR_0;
  return FUNC_0(VAR_2, VAR_4, VAR_5);
}
