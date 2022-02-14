
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_tvlv_container {int list; } ;
struct TYPE_2__ {int container_list_lock; } ;
struct batadv_priv {TYPE_1__ tvlv; } ;


 int FUNC_0 (struct batadv_tvlv_container*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct batadv_priv *VAR_0,
      struct batadv_tvlv_container *VAR_1)
{
 FUNC_2(&VAR_0->tvlv.container_list_lock);

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->list);


 FUNC_0(VAR_1);
 FUNC_0(VAR_1);
}
