
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int mtu; } ;
struct iphdr {int dummy; } ;
struct ip_tunnel {int hlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ip_tunnel* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_3, int VAR_4, bool VAR_5)
{
 struct ip_tunnel *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = VAR_6->hlen + sizeof(struct iphdr);
 int VAR_8 = VAR_2 - VAR_3->hard_header_len - VAR_7;

 if (VAR_4 < VAR_1)
  return -VAR_0;

 if (VAR_4 > VAR_8) {
  if (VAR_5)
   return -VAR_0;

  VAR_4 = VAR_8;
 }

 VAR_3->mtu = VAR_4;
 return 0;
}
