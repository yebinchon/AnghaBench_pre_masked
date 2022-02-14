
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct batadv_tvlv_container {int dummy; } ;
struct TYPE_2__ {int container_list_lock; } ;
struct batadv_priv {TYPE_1__ tvlv; } ;


 struct batadv_tvlv_container* FUNC_0 (struct batadv_priv*,int ,int ) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_tvlv_container*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct batadv_priv *VAR_0,
          u8 VAR_1, u8 VAR_2)
{
 struct batadv_tvlv_container *VAR_3;

 FUNC_2(&VAR_0->tvlv.container_list_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_3);
 FUNC_3(&VAR_0->tvlv.container_list_lock);
}
