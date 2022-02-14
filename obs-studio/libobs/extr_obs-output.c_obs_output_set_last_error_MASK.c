
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * last_error_message; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

void FUNC_3(obs_output_t *VAR_0, const char *VAR_1)
{
 if (!FUNC_2(VAR_0, "obs_output_set_last_error"))
  return;

 if (VAR_0->last_error_message)
  FUNC_0(VAR_0->last_error_message);

 if (VAR_1)
  VAR_0->last_error_message = FUNC_1(VAR_1);
 else
  VAR_0->last_error_message = ((void*)0);
}
