
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tb ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel {int collect_md; } ;


 struct net_device* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int *) ;
 int FUNC_6 (struct net*,struct net_device*,struct nlattr**,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct nlattr***,int ,int) ;
 struct ip_tunnel* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int *) ;
 struct net_device* FUNC_10 (struct net*,char const*,int ,int *,struct nlattr**,int *) ;
 int FUNC_11 (int *) ;

struct net_device *FUNC_12(struct net *VAR_4, const char *VAR_5,
     u8 VAR_6)
{
 struct nlattr *VAR_7[VAR_0 + 1];
 struct net_device *VAR_8;
 FUNC_2(VAR_3);
 struct ip_tunnel *VAR_9;
 int VAR_10;

 FUNC_7(&VAR_7, 0, sizeof(VAR_7));

 VAR_8 = FUNC_10(VAR_4, VAR_5, VAR_6,
          &VAR_2, VAR_7, ((void*)0));
 if (FUNC_1(VAR_8))
  return VAR_8;


 VAR_9 = FUNC_8(VAR_8);
 VAR_9->collect_md = 1;

 VAR_10 = FUNC_6(VAR_4, VAR_8, VAR_7, ((void*)0), ((void*)0));
 if (VAR_10 < 0) {
  FUNC_4(VAR_8);
  return FUNC_0(VAR_10);
 }




 VAR_10 = FUNC_3(VAR_8, VAR_1, 0);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_9(VAR_8, ((void*)0));
 if (VAR_10 < 0)
  goto out;

 return VAR_8;
out:
 FUNC_5(VAR_8, &VAR_3);
 FUNC_11(&VAR_3);
 return FUNC_0(VAR_10);
}
