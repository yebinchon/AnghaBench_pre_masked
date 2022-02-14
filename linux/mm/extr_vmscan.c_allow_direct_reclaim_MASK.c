
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {int dummy; } ;
struct TYPE_3__ {scalar_t__ kswapd_failures; int kswapd_wait; int kswapd_classzone_idx; struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zone*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct zone*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct zone*,int ) ;
 int FUNC_6 (struct zone*) ;

__attribute__((used)) static bool FUNC_7(pg_data_t *VAR_3)
{
 struct zone *VAR_4;
 unsigned long VAR_5 = 0;
 unsigned long VAR_6 = 0;
 int VAR_7;
 bool VAR_8;

 if (VAR_3->kswapd_failures >= VAR_0)
  return 1;

 for (VAR_7 = 0; VAR_7 <= VAR_2; VAR_7++) {
  VAR_4 = &VAR_3->node_zones[VAR_7];
  if (!FUNC_0(VAR_4))
   continue;

  if (!FUNC_6(VAR_4))
   continue;

  VAR_5 += FUNC_2(VAR_4);
  VAR_6 += FUNC_5(VAR_4, VAR_1);
 }


 if (!VAR_5)
  return 1;

 VAR_8 = VAR_6 > VAR_5 / 2;


 if (!VAR_8 && FUNC_3(&VAR_3->kswapd_wait)) {
  VAR_3->kswapd_classzone_idx = FUNC_1(VAR_3->kswapd_classzone_idx,
      (enum zone_type)VAR_2);
  FUNC_4(&VAR_3->kswapd_wait);
 }

 return VAR_8;
}
