
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct jsonsl_state_st {int dummy; } ;
typedef TYPE_1__* jsonsl_t ;
typedef int jsonsl_error_t ;
struct TYPE_5__ {int error; int complete; } ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_2__ JSN_DATA ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(jsonsl_t VAR_0,
                   jsonsl_error_t VAR_1,
                   struct jsonsl_state_st *VAR_2,
                   char *VAR_3)
{
  JSN_DATA *VAR_4 = (JSN_DATA *) VAR_0->data;
  if (!VAR_4->complete) {
    VAR_4->error = FUNC_0(VAR_1);
  }


  return 0;
}
