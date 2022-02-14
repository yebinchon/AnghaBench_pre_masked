
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct ip_vs_dest_dst {TYPE_1__* dst_cache; } ;
struct ip_vs_dest {int dst_lock; int refcnt; int port; int addr; int af; int dest_dst; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ip_vs_dest*) ;
 int FUNC_3 (int ) ;
 struct ip_vs_dest_dst* FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline void
FUNC_8(struct ip_vs_dest *VAR_0, struct net_device *VAR_1)
{
 struct ip_vs_dest_dst *VAR_2;

 FUNC_6(&VAR_0->dst_lock);
 VAR_2 = FUNC_4(VAR_0->dest_dst, 1);
 if (VAR_2 && VAR_2->dst_cache->dev == VAR_1) {
  FUNC_1(3, "Reset dev:%s dest %s:%u ,dest->refcnt=%d\n",
         VAR_1->name,
         FUNC_0(VAR_0->af, &VAR_0->addr),
         FUNC_3(VAR_0->port),
         FUNC_5(&VAR_0->refcnt));
  FUNC_2(VAR_0);
 }
 FUNC_7(&VAR_0->dst_lock);

}
