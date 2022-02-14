
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* last_error_message; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (TYPE_1__*,char*) ;

const char *FUNC_1(obs_output_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_output_get_last_error"))
  return ((void*)0);

 return VAR_0->last_error_message;
}
