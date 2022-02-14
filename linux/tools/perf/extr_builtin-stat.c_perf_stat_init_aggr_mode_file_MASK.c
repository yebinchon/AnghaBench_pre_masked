
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct perf_stat {TYPE_3__* session; } ;
struct perf_env {int dummy; } ;
struct TYPE_6__ {int cpus; } ;
struct TYPE_10__ {TYPE_1__ core; } ;
struct TYPE_9__ {int aggr_mode; int aggr_get_id; int aggr_map; } ;
struct TYPE_7__ {struct perf_env env; } ;
struct TYPE_8__ {TYPE_2__ header; } ;
 TYPE_5__* VAR_0 ;
 int FUNC_0 (struct perf_env*,int ,int *) ;
 int FUNC_1 (struct perf_env*,int ,int *) ;
 int FUNC_2 (struct perf_env*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static int FUNC_4(struct perf_stat *VAR_5)
{
 struct perf_env *VAR_6 = &VAR_5->session->header.env;

 switch (VAR_4.aggr_mode) {
 case 130:
  if (FUNC_2(VAR_6, VAR_0->core.cpus, &VAR_4.aggr_map)) {
   FUNC_3("cannot build socket map");
   return -1;
  }
  VAR_4.aggr_get_id = VAR_3;
  break;
 case 133:
  if (FUNC_1(VAR_6, VAR_0->core.cpus, &VAR_4.aggr_map)) {
   FUNC_3("cannot build die map");
   return -1;
  }
  VAR_4.aggr_get_id = VAR_2;
  break;
 case 134:
  if (FUNC_0(VAR_6, VAR_0->core.cpus, &VAR_4.aggr_map)) {
   FUNC_3("cannot build core map");
   return -1;
  }
  VAR_4.aggr_get_id = VAR_1;
  break;
 case 131:
 case 132:
 case 129:
 case 128:
 default:
  break;
 }

 return 0;
}
