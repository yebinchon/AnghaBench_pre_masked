
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int forw_bat_list; int forw_bat_list_lock; } ;
struct batadv_forw_packet {int dummy; } ;


 int FUNC_0 (struct batadv_forw_packet*,int *,int *,unsigned long) ;

void FUNC_1(struct batadv_priv *VAR_0,
        struct batadv_forw_packet *VAR_1,
        unsigned long VAR_2)
{
 FUNC_0(VAR_1, &VAR_0->forw_bat_list_lock,
     &VAR_0->forw_bat_list, VAR_2);
}
