
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct zone {int dummy; } ;
struct scan_control {scalar_t__ nr_to_reclaim; int reclaim_idx; scalar_t__ nr_reclaimed; scalar_t__ nr_scanned; scalar_t__ order; } ;
struct TYPE_4__ {struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct zone*) ;
 int FUNC_2 (struct zone*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,struct scan_control*) ;

__attribute__((used)) static bool FUNC_5(pg_data_t *VAR_1,
          struct scan_control *VAR_2)
{
 struct zone *VAR_3;
 int VAR_4;


 VAR_2->nr_to_reclaim = 0;
 for (VAR_4 = 0; VAR_4 <= VAR_2->reclaim_idx; VAR_4++) {
  VAR_3 = VAR_1->node_zones + VAR_4;
  if (!FUNC_2(VAR_3))
   continue;

  VAR_2->nr_to_reclaim += FUNC_3(FUNC_1(VAR_3), VAR_0);
 }





 FUNC_4(VAR_1, VAR_2);
 if (VAR_2->order && VAR_2->nr_reclaimed >= FUNC_0(VAR_2->order))
  VAR_2->order = 0;

 return VAR_2->nr_scanned >= VAR_2->nr_to_reclaim;
}
