
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ monitor_source; int monitor_source_name; int description; } ;
typedef TYPE_1__ pa_sink_info ;
typedef int pa_context ;
typedef int obs_property_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(pa_context *VAR_1, const pa_sink_info *VAR_2, int VAR_3,
         void *VAR_4)
{
 FUNC_0(VAR_1);
 if (VAR_3 != 0 || VAR_2->monitor_source == VAR_0)
  goto skip;

 FUNC_1((obs_property_t *)VAR_4, VAR_2->description,
         VAR_2->monitor_source_name);

skip:
 FUNC_2(0);
}
