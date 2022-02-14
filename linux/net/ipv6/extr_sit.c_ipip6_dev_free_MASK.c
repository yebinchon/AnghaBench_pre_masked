
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tstats; } ;
struct ip_tunnel {int dst_cache; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct ip_tunnel* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct ip_tunnel *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->dst_cache);
 FUNC_1(VAR_0->tstats);
}
