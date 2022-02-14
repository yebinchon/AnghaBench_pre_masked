
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zspage {int dummy; } ;
struct TYPE_2__ {int pages_compacted; } ;
struct zs_pool {TYPE_1__ stats; } ;
struct zs_compact_control {void* d_page; void* s_page; scalar_t__ obj_idx; } ;
struct size_class {int lock; scalar_t__ pages_per_zspage; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct zs_pool*,struct size_class*,struct zspage*) ;
 void* FUNC_2 (struct zspage*) ;
 struct zspage* FUNC_3 (struct size_class*,int) ;
 int FUNC_4 (struct zs_pool*,struct size_class*,struct zs_compact_control*) ;
 scalar_t__ FUNC_5 (struct size_class*,struct zspage*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct size_class*) ;

__attribute__((used)) static void FUNC_9(struct zs_pool *VAR_1, struct size_class *VAR_2)
{
 struct zs_compact_control VAR_3;
 struct zspage *VAR_4;
 struct zspage *VAR_5 = ((void*)0);

 FUNC_6(&VAR_2->lock);
 while ((VAR_4 = FUNC_3(VAR_2, 1))) {

  if (!FUNC_8(VAR_2))
   break;

  VAR_3.obj_idx = 0;
  VAR_3.s_page = FUNC_2(VAR_4);

  while ((VAR_5 = FUNC_3(VAR_2, 0))) {
   VAR_3.d_page = FUNC_2(VAR_5);




   if (!FUNC_4(VAR_1, VAR_2, &VAR_3))
    break;

   FUNC_5(VAR_2, VAR_5);
  }


  if (VAR_5 == ((void*)0))
   break;

  FUNC_5(VAR_2, VAR_5);
  if (FUNC_5(VAR_2, VAR_4) == VAR_0) {
   FUNC_1(VAR_1, VAR_2, VAR_4);
   VAR_1->stats.pages_compacted += VAR_2->pages_per_zspage;
  }
  FUNC_7(&VAR_2->lock);
  FUNC_0();
  FUNC_6(&VAR_2->lock);
 }

 if (VAR_4)
  FUNC_5(VAR_2, VAR_4);

 FUNC_7(&VAR_2->lock);
}
