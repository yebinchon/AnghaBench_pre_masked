
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; } ;
struct ip6_tnl {int dev; TYPE_1__ parms; } ;
struct __ip6_tnl_parm {int proto; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ip6_tnl *VAR_0, struct __ip6_tnl_parm *VAR_1)
{

 VAR_0->parms.proto = VAR_1->proto;
 FUNC_0(VAR_0->dev);
 return 0;
}
