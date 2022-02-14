
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct rtnl_link_ops {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel_parm {int name; } ;
struct ip_tunnel_net {TYPE_1__* fb_tunnel_dev; int type; int * tunnels; struct rtnl_link_ops* rtnl_link_ops; } ;
typedef int parms ;
struct TYPE_6__ {int type; int mtu; int features; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct net*,struct rtnl_link_ops*,struct ip_tunnel_parm*) ;
 struct net VAR_3 ;
 int FUNC_4 (struct ip_tunnel_net*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct ip_tunnel_parm*,int ,int) ;
 struct ip_tunnel_net* FUNC_7 (struct net*,unsigned int) ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*,int ) ;

int FUNC_13(struct net *VAR_4, unsigned int VAR_5,
      struct rtnl_link_ops *VAR_6, char *VAR_7)
{
 struct ip_tunnel_net *VAR_8 = FUNC_7(VAR_4, VAR_5);
 struct ip_tunnel_parm VAR_9;
 unsigned int VAR_10;

 VAR_8->rtnl_link_ops = VAR_6;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  FUNC_0(&VAR_8->tunnels[VAR_10]);

 if (!VAR_6 || !FUNC_8(VAR_4)) {
  struct ip_tunnel_net *VAR_11;

  VAR_11 = FUNC_7(&VAR_3, VAR_5);
  VAR_8->type = VAR_11->type;
  VAR_8->fb_tunnel_dev = ((void*)0);
  return 0;
 }

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_7)
  FUNC_12(VAR_9.name, VAR_7, VAR_0);

 FUNC_10();
 VAR_8->fb_tunnel_dev = FUNC_3(VAR_4, VAR_6, &VAR_9);



 if (!FUNC_1(VAR_8->fb_tunnel_dev)) {
  VAR_8->fb_tunnel_dev->features |= VAR_2;
  VAR_8->fb_tunnel_dev->mtu = FUNC_5(VAR_8->fb_tunnel_dev);
  FUNC_4(VAR_8, FUNC_9(VAR_8->fb_tunnel_dev));
  VAR_8->type = VAR_8->fb_tunnel_dev->type;
 }
 FUNC_11();

 return FUNC_2(VAR_8->fb_tunnel_dev);
}
