
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_ib_refill_cache {TYPE_1__* percpu; int xfer; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int count; int first; } ;


 int FUNC_0 (struct list_head*) ;
 struct list_head* VAR_0 ;
 int FUNC_1 (int ) ;
 struct list_head* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct list_head*) ;
 struct list_head* FUNC_4 (int *,int *,struct list_head*) ;
 int FUNC_5 (struct list_head*,struct list_head*) ;
 int FUNC_6 (struct list_head*,struct list_head*) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 struct list_head* FUNC_9 (int *,int *) ;

__attribute__((used)) static void FUNC_10(struct list_head *VAR_1,
     struct rds_ib_refill_cache *VAR_2)
{
 unsigned long VAR_3;
 struct list_head *VAR_4, *VAR_5;

 FUNC_8(VAR_3);

 VAR_5 = FUNC_2(VAR_2->percpu->first);
 if (!VAR_5)
  FUNC_0(VAR_1);
 else
  FUNC_5(VAR_1, VAR_5);

 FUNC_3(VAR_2->percpu->first, VAR_1);
 FUNC_1(VAR_2->percpu->count);

 if (FUNC_2(VAR_2->percpu->count) < VAR_0)
  goto end;







 do {
  VAR_4 = FUNC_9(&VAR_2->xfer, ((void*)0));
  if (VAR_4)
   FUNC_6(VAR_4, VAR_5);
  VAR_4 = FUNC_4(&VAR_2->xfer, ((void*)0), VAR_5);
 } while (VAR_4);


 FUNC_3(VAR_2->percpu->first, ((void*)0));
 FUNC_3(VAR_2->percpu->count, 0);
end:
 FUNC_7(VAR_3);
}
