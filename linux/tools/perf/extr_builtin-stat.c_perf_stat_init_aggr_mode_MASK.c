
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cpus; } ;
struct TYPE_6__ {TYPE_1__ core; } ;
struct TYPE_5__ {int aggr_mode; scalar_t__ cpus_aggr_map; void* aggr_get_id; int aggr_map; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_5 (char*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_6;

 switch (VAR_5.aggr_mode) {
 case 130:
  if (FUNC_2(VAR_1->core.cpus, &VAR_5.aggr_map)) {
   FUNC_5("cannot build socket map");
   return -1;
  }
  VAR_5.aggr_get_id = VAR_4;
  break;
 case 133:
  if (FUNC_1(VAR_1->core.cpus, &VAR_5.aggr_map)) {
   FUNC_5("cannot build die map");
   return -1;
  }
  VAR_5.aggr_get_id = VAR_3;
  break;
 case 134:
  if (FUNC_0(VAR_1->core.cpus, &VAR_5.aggr_map)) {
   FUNC_5("cannot build core map");
   return -1;
  }
  VAR_5.aggr_get_id = VAR_2;
  break;
 case 131:
  if (FUNC_6()) {
   if (FUNC_0(VAR_1->core.cpus,
          &VAR_5.aggr_map)) {
    FUNC_5("cannot build core map");
    return -1;
   }
   VAR_5.aggr_get_id = VAR_2;
  }
  break;
 case 132:
 case 129:
 case 128:
 default:
  break;
 }






 VAR_6 = FUNC_4(VAR_1->core.cpus);
 VAR_5.cpus_aggr_map = FUNC_3(VAR_6 + 1);
 return VAR_5.cpus_aggr_map ? 0 : -VAR_0;
}
