
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clusterip_net {int mutex; scalar_t__ procdir; int lock; } ;
struct clusterip_config {int pde; int list; int entries; int net; } ;


 struct clusterip_net* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline void
FUNC_9(struct clusterip_config *VAR_0)
{
 struct clusterip_net *VAR_1 = FUNC_0(VAR_0->net);

 FUNC_2();
 if (FUNC_7(&VAR_0->entries, &VAR_1->lock)) {
  FUNC_1(&VAR_0->list);
  FUNC_8(&VAR_1->lock);
  FUNC_3();
  return;
 }
 FUNC_3();
}
