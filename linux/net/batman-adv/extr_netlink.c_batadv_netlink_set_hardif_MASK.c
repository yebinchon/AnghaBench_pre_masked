
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; struct batadv_priv** user_ptr; } ;
struct TYPE_2__ {int throughput_override; int elp_interval; } ;
struct batadv_priv {TYPE_1__ bat_v; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_priv*) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2,
         struct genl_info *VAR_3)
{
 struct batadv_hard_iface *VAR_4 = VAR_3->user_ptr[1];
 struct batadv_priv *VAR_5 = VAR_3->user_ptr[0];
 FUNC_1(VAR_5, VAR_4);

 return 0;
}
