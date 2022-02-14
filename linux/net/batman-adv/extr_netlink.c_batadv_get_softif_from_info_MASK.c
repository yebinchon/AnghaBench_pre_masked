
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int * attrs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct net*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct net_device *
FUNC_5(struct net *VAR_3, struct genl_info *VAR_4)
{
 struct net_device *VAR_5;
 int VAR_6;

 if (!VAR_4->attrs[VAR_0])
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_4(VAR_4->attrs[VAR_0]);

 VAR_5 = FUNC_2(VAR_3, VAR_6);
 if (!VAR_5)
  return FUNC_0(-VAR_2);

 if (!FUNC_1(VAR_5))
  goto err_put_softif;

 return VAR_5;

err_put_softif:
 FUNC_3(VAR_5);

 return FUNC_0(-VAR_1);
}
