
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_0 ;
 int FUNC_1 (struct net*,int ) ;
 struct net* FUNC_2 (struct net_device*) ;
 struct rtable* FUNC_3 (struct net*,int ,int ,int ,int ) ;
 int FUNC_4 (struct rtable*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(__be32 VAR_1, __be32 VAR_2, struct net_device *VAR_3)
{
 struct rtable *VAR_4;
 int VAR_5 = 0;

 struct net *VAR_6 = FUNC_2(VAR_3);

 VAR_4 = FUNC_3(VAR_6, VAR_1, VAR_2, 0, FUNC_5(VAR_3));
 if (FUNC_0(VAR_4))
  return 1;
 if (VAR_4->dst.dev != VAR_3) {
  FUNC_1(VAR_6, VAR_0);
  VAR_5 = 1;
 }
 FUNC_4(VAR_4);
 return VAR_5;
}
