
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int unbuddied; int lock; } ;
struct z3fold_header {scalar_t__ first_chunks; scalar_t__ last_chunks; scalar_t__ middle_chunks; int cpu; int buddy; } ;
struct list_head {int dummy; } ;


 struct list_head* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct z3fold_header*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct z3fold_pool *VAR_0,
    struct z3fold_header *VAR_1)
{
 if (VAR_1->first_chunks == 0 || VAR_1->last_chunks == 0 ||
   VAR_1->middle_chunks == 0) {
  struct list_head *VAR_2 = FUNC_0(VAR_0->unbuddied);

  int VAR_3 = FUNC_2(VAR_1);
  FUNC_5(&VAR_0->lock);
  FUNC_1(&VAR_1->buddy, &VAR_2[VAR_3]);
  FUNC_6(&VAR_0->lock);
  VAR_1->cpu = FUNC_4();
  FUNC_3(VAR_0->unbuddied);
 }
}
