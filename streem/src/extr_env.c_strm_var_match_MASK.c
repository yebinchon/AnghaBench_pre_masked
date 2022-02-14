
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int strm_value ;
typedef int strm_string ;
struct TYPE_4__ {scalar_t__ env; } ;
typedef TYPE_1__ strm_state ;
typedef int strm_env ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

int
FUNC_3(strm_state* VAR_2, strm_string VAR_3, strm_value VAR_4)
{
  if (VAR_2 && VAR_2->env) {
    strm_value VAR_5;
    if (FUNC_0((strm_env*)VAR_2->env, VAR_3, &VAR_5) == 0) {
      if (FUNC_1(VAR_5, VAR_4))
        return VAR_1;
      return VAR_0;
    }
  }
  return FUNC_2(VAR_2, VAR_3, VAR_4);
}
