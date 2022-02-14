
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * settings; } ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef TYPE_2__ obs_output_t ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__ const*,char*) ;

obs_data_t *FUNC_2(const obs_output_t *VAR_0)
{
 if (!FUNC_1(VAR_0, "obs_output_get_settings"))
  return ((void*)0);

 FUNC_0(VAR_0->context.settings);
 return VAR_0->context.settings;
}
