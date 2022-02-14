
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptr_ring {int consumer_lock; } ;
struct TYPE_2__ {size_t count; struct page** cache; } ;
struct page_pool {TYPE_1__ alloc; struct ptr_ring ring; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (struct ptr_ring*) ;
 size_t FUNC_1 (struct ptr_ring*,struct page**,int ) ;
 scalar_t__ FUNC_2 (struct ptr_ring*) ;
 size_t FUNC_3 () ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct page *FUNC_7(struct page_pool *VAR_1)
{
 struct ptr_ring *VAR_2 = &VAR_1->ring;
 bool VAR_3 = 0;
 struct page *VAR_4;


 if (FUNC_4(FUNC_3())) {
  if (FUNC_4(VAR_1->alloc.count)) {

   VAR_4 = VAR_1->alloc.cache[--VAR_1->alloc.count];
   return VAR_4;
  }
  VAR_3 = 1;
 }


 if (FUNC_2(VAR_2))
  return ((void*)0);




 FUNC_5(&VAR_2->consumer_lock);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3)
  VAR_1->alloc.count = FUNC_1(VAR_2,
       VAR_1->alloc.cache,
       VAR_0);
 FUNC_6(&VAR_2->consumer_lock);
 return VAR_4;
}
