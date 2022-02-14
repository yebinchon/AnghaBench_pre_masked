
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * rtnl_link_ops; } ;
struct net {int dummy; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int,char const*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,struct net*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (struct net_device*) ;

struct net_device *FUNC_5(struct net *VAR_3, const char *VAR_4)
{
 struct net_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(sizeof(struct batadv_priv), VAR_4,
      VAR_0, VAR_2);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(VAR_5, VAR_3);

 VAR_5->rtnl_link_ops = &VAR_1;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 < 0) {
  FUNC_3("Unable to register the batman interface '%s': %i\n",
         VAR_4, VAR_6);
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
