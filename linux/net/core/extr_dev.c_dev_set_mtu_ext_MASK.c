
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int mtu; int min_mtu; int max_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ,struct net_device*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int) ;

int FUNC_6(struct net_device *VAR_4, int VAR_5,
      struct netlink_ext_ack *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_5 == VAR_4->mtu)
  return 0;


 if (VAR_5 < 0 || VAR_5 < VAR_4->min_mtu) {
  FUNC_0(VAR_6, "mtu less than device minimum");
  return -VAR_0;
 }

 if (VAR_4->max_mtu > 0 && VAR_5 > VAR_4->max_mtu) {
  FUNC_0(VAR_6, "mtu greater than device maximum");
  return -VAR_0;
 }

 if (!FUNC_4(VAR_4))
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 VAR_7 = FUNC_5(VAR_7);
 if (VAR_7)
  return VAR_7;

 VAR_8 = VAR_4->mtu;
 VAR_7 = FUNC_1(VAR_4, VAR_5);

 if (!VAR_7) {
  VAR_7 = FUNC_3(VAR_2, VAR_4,
         VAR_8);
  VAR_7 = FUNC_5(VAR_7);
  if (VAR_7) {



   FUNC_1(VAR_4, VAR_8);
   FUNC_3(VAR_2, VAR_4,
           VAR_5);
  }
 }
 return VAR_7;
}
