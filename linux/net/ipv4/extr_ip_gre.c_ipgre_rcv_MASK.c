
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnl_ptk_info {scalar_t__ proto; } ;
struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct ip_tunnel_net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct tnl_ptk_info const*,struct ip_tunnel_net*,int,int) ;
 struct net* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 struct ip_tunnel_net* FUNC_3 (struct net*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, const struct tnl_ptk_info *VAR_5,
       int VAR_6)
{
 struct net *VAR_7 = FUNC_1(VAR_4->dev);
 struct ip_tunnel_net *VAR_8;
 int VAR_9;

 if (VAR_5->proto == FUNC_2(VAR_0))
  VAR_8 = FUNC_3(VAR_7, VAR_2);
 else
  VAR_8 = FUNC_3(VAR_7, VAR_3);

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_8, VAR_6, 0);
 if (VAR_9 == VAR_1 && VAR_5->proto == FUNC_2(VAR_0)) {



  VAR_8 = FUNC_3(VAR_7, VAR_3);
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_8, VAR_6, 1);
 }
 return VAR_9;
}
