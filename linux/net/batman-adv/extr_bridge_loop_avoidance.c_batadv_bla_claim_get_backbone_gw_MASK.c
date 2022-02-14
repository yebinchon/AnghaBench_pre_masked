
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_bla_claim {int backbone_lock; struct batadv_bla_backbone_gw* backbone_gw; } ;
struct batadv_bla_backbone_gw {int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct batadv_bla_backbone_gw *
FUNC_3(struct batadv_bla_claim *VAR_0)
{
 struct batadv_bla_backbone_gw *VAR_1;

 FUNC_1(&VAR_0->backbone_lock);
 VAR_1 = VAR_0->backbone_gw;
 FUNC_0(&VAR_1->refcount);
 FUNC_2(&VAR_0->backbone_lock);

 return VAR_1;
}
