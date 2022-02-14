
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct hist_trigger_data {int dummy; } ;
struct TYPE_6__ {TYPE_2__* track_var; } ;
struct action_data {TYPE_3__ track_data; } ;
struct TYPE_4__ {unsigned int idx; } ;
struct TYPE_5__ {TYPE_1__ var; } ;


 int FUNC_0 (struct tracing_map_elt*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_0,
      struct tracing_map_elt *VAR_1,
      struct action_data *VAR_2, u64 VAR_3)
{
 unsigned int VAR_4 = VAR_2->track_data.track_var->var.idx;

 FUNC_0(VAR_1, VAR_4, VAR_3);
}
