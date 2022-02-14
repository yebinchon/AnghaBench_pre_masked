
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct zone {TYPE_1__* zone_pgdat; } ;
struct TYPE_5__ {scalar_t__ kswapd_classzone_idx; int kswapd_order; scalar_t__ kswapd_failures; int kswapd_wait; int node_id; } ;
typedef TYPE_1__ pg_data_t ;
typedef int gfp_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zone*,int) ;
 int FUNC_1 (struct zone*) ;
 void* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int,int) ;

void FUNC_9(struct zone *VAR_3, gfp_t VAR_4, int VAR_5,
     enum zone_type VAR_6)
{
 pg_data_t *VAR_7;

 if (!FUNC_1(VAR_3))
  return;

 if (!FUNC_0(VAR_3, VAR_4))
  return;
 VAR_7 = VAR_3->zone_pgdat;

 if (VAR_7->kswapd_classzone_idx == VAR_0)
  VAR_7->kswapd_classzone_idx = VAR_6;
 else
  VAR_7->kswapd_classzone_idx = FUNC_2(VAR_7->kswapd_classzone_idx,
        VAR_6);
 VAR_7->kswapd_order = FUNC_2(VAR_7->kswapd_order, VAR_5);
 if (!FUNC_6(&VAR_7->kswapd_wait))
  return;


 if (VAR_7->kswapd_failures >= VAR_1 ||
     (FUNC_3(VAR_7, VAR_5, VAR_6) &&
      !FUNC_4(VAR_7, VAR_6))) {







  if (!(VAR_4 & VAR_2))
   FUNC_8(VAR_7, VAR_5, VAR_6);
  return;
 }

 FUNC_5(VAR_7->node_id, VAR_6, VAR_5,
          VAR_4);
 FUNC_7(&VAR_7->kswapd_wait);
}
