
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct hist_trigger_data {int dummy; } ;
struct TYPE_4__ {int (* check_val ) (int ,int ) ;TYPE_1__* track_var; } ;
struct action_data {TYPE_2__ track_data; } ;
struct TYPE_3__ {struct hist_trigger_data* hist_data; } ;


 int FUNC_0 (struct hist_trigger_data*,struct tracing_map_elt*,struct action_data*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct tracing_map_elt *VAR_0,
       struct action_data *VAR_1,
       u64 VAR_2)
{
 struct hist_trigger_data *VAR_3;
 u64 VAR_4;

 VAR_3 = VAR_1->track_data.track_var->hist_data;
 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1);

 return VAR_1->track_data.check_val(VAR_4, VAR_2);
}
