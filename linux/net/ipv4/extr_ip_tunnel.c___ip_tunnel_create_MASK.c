
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int setup; int priv_size; int kind; } ;
struct net_device {struct rtnl_link_ops const* rtnl_link_ops; } ;
struct net {int dummy; } ;
struct ip_tunnel_parm {scalar_t__* name; } ;
struct ip_tunnel {struct net* net; struct ip_tunnel_parm parms; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct net_device*,struct net*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct net_device*) ;
 struct ip_tunnel* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,scalar_t__*,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static struct net_device *FUNC_12(struct net *VAR_4,
          const struct rtnl_link_ops *VAR_5,
          struct ip_tunnel_parm *VAR_6)
{
 int VAR_7;
 struct ip_tunnel *VAR_8;
 struct net_device *VAR_9;
 char VAR_10[VAR_2];

 VAR_7 = -VAR_0;
 if (VAR_6->name[0]) {
  if (!FUNC_4(VAR_6->name))
   goto failed;
  FUNC_10(VAR_10, VAR_6->name, VAR_2);
 } else {
  if (FUNC_11(VAR_5->kind) > (VAR_2 - 3))
   goto failed;
  FUNC_9(VAR_10, VAR_5->kind);
  FUNC_8(VAR_10, "%d");
 }

 FUNC_0();
 VAR_9 = FUNC_2(VAR_5->priv_size, VAR_10, VAR_3, VAR_5->setup);
 if (!VAR_9) {
  VAR_7 = -VAR_1;
  goto failed;
 }
 FUNC_3(VAR_9, VAR_4);

 VAR_9->rtnl_link_ops = VAR_5;

 VAR_8 = FUNC_6(VAR_9);
 VAR_8->parms = *VAR_6;
 VAR_8->net = VAR_4;

 VAR_7 = FUNC_7(VAR_9);
 if (VAR_7)
  goto failed_free;

 return VAR_9;

failed_free:
 FUNC_5(VAR_9);
failed:
 return FUNC_1(VAR_7);
}
