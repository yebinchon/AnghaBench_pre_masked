
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovs_net {int xt_label; } ;
struct net {int dummy; } ;
typedef enum ovs_key_attr { ____Placeholder_ovs_key_attr } ovs_key_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ovs_net* FUNC_1 (struct net*,int ) ;
 int VAR_7 ;

bool FUNC_2(struct net *VAR_8, enum ovs_key_attr VAR_9)
{
 if (VAR_9 == VAR_5)
  return 1;
 if (FUNC_0(VAR_2) &&
     VAR_9 == VAR_6)
  return 1;
 if (FUNC_0(VAR_1) &&
     VAR_9 == VAR_4)
  return 1;
 if (FUNC_0(VAR_0) &&
     VAR_9 == VAR_3) {
  struct ovs_net *VAR_10 = FUNC_1(VAR_8, VAR_7);

  return VAR_10->xt_label;
 }

 return 0;
}
