
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_refill_cache {struct list_head* ready; int xfer; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*,struct list_head*) ;
 struct list_head* FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct rds_ib_refill_cache *VAR_0)
{
 struct list_head *VAR_1;

 VAR_1 = FUNC_1(&VAR_0->xfer, ((void*)0));
 if (VAR_1) {
  if (VAR_0->ready)
   FUNC_0(VAR_1, VAR_0->ready);
  else
   VAR_0->ready = VAR_1;
 }
}
