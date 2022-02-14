
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int dummy; } ;
struct z3fold_header {int cpu; int work; int buddy; struct z3fold_pool* pool; struct z3fold_buddy_slots* slots; scalar_t__ start_middle; scalar_t__ first_num; scalar_t__ last_chunks; scalar_t__ middle_chunks; scalar_t__ first_chunks; int refcount; int page_lock; } ;
struct z3fold_buddy_slots {int dummy; } ;
struct page {int private; int lru; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct z3fold_buddy_slots* FUNC_2 (struct z3fold_pool*,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 struct z3fold_header* FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct z3fold_header *FUNC_7(struct page *VAR_6, bool VAR_7,
     struct z3fold_pool *VAR_8, gfp_t VAR_9)
{
 struct z3fold_header *VAR_10 = FUNC_5(VAR_6);
 struct z3fold_buddy_slots *VAR_11;

 FUNC_0(&VAR_6->lru);
 FUNC_3(VAR_3, &VAR_6->private);
 FUNC_3(VAR_0, &VAR_6->private);
 FUNC_3(VAR_1, &VAR_6->private);
 FUNC_3(VAR_4, &VAR_6->private);
 FUNC_3(VAR_2, &VAR_6->private);
 if (VAR_7)
  return VAR_10;

 VAR_11 = FUNC_2(VAR_8, VAR_9);
 if (!VAR_11)
  return ((void*)0);

 FUNC_6(&VAR_10->page_lock);
 FUNC_4(&VAR_10->refcount);
 VAR_10->first_chunks = 0;
 VAR_10->middle_chunks = 0;
 VAR_10->last_chunks = 0;
 VAR_10->first_num = 0;
 VAR_10->start_middle = 0;
 VAR_10->cpu = -1;
 VAR_10->slots = VAR_11;
 VAR_10->pool = VAR_8;
 FUNC_0(&VAR_10->buddy);
 FUNC_1(&VAR_10->work, VAR_5);
 return VAR_10;
}
