
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hlist_head {int dummy; } ;
struct batadv_mcast_mla_flags {int dummy; } ;


 struct net_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct hlist_head*,struct batadv_mcast_mla_flags*) ;
 int FUNC_2 (struct net_device*,struct hlist_head*,struct batadv_mcast_mla_flags*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_0,
       struct hlist_head *VAR_1,
       struct batadv_mcast_mla_flags *VAR_2)
{
 struct net_device *VAR_3 = FUNC_0(VAR_0);
 int VAR_4, VAR_5 = 0;

 if (VAR_3)
  VAR_0 = VAR_3;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  goto out;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_5 < 0) {
  VAR_4 = 0;
  goto out;
 }

out:
 if (VAR_3)
  FUNC_3(VAR_3);

 return VAR_4 + VAR_5;
}
