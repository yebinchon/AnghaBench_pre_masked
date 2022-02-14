
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct device {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net const*,int *,int *) ;
 struct net_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, kuid_t *VAR_1, kgid_t *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_0);
 const struct net *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_4, VAR_1, VAR_2);
}
