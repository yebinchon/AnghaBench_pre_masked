
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int mutex; int tbl; int run_work; } ;
struct rhash_head {unsigned int size; int future_tbl; int next; } ;
struct bucket_table {unsigned int size; int future_tbl; int next; } ;


 int FUNC_0 (struct rhash_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rhashtable*,struct rhash_head*,void (*) (void*,void*),void*) ;
 int FUNC_6 (struct rhash_head*,unsigned int) ;
 struct rhash_head* FUNC_7 (int ,struct rhashtable*) ;
 int FUNC_8 (struct rhash_head*) ;
 struct rhash_head* FUNC_9 (int ) ;

void FUNC_10(struct rhashtable *VAR_0,
     void (*VAR_1)(void *VAR_2, void *VAR_3),
     void *VAR_4)
{
 struct bucket_table *VAR_5, *VAR_6;
 unsigned int VAR_7;

 FUNC_1(&VAR_0->run_work);

 FUNC_3(&VAR_0->mutex);
 VAR_5 = FUNC_7(VAR_0->tbl, VAR_0);
restart:
 if (VAR_1) {
  for (VAR_7 = 0; VAR_7 < VAR_5->size; VAR_7++) {
   struct rhash_head *VAR_8, *VAR_9;

   FUNC_2();
   for (VAR_8 = FUNC_9(FUNC_6(VAR_5, VAR_7)),
        VAR_9 = !FUNC_8(VAR_8) ?
     FUNC_7(VAR_8->next, VAR_0) : ((void*)0);
        !FUNC_8(VAR_8);
        VAR_8 = VAR_9,
        VAR_9 = !FUNC_8(VAR_8) ?
     FUNC_7(VAR_8->next, VAR_0) : ((void*)0))
    FUNC_5(VAR_0, VAR_8, VAR_1, VAR_4);
  }
 }

 VAR_6 = FUNC_7(VAR_5->future_tbl, VAR_0);
 FUNC_0(VAR_5);
 if (VAR_6) {
  VAR_5 = VAR_6;
  goto restart;
 }
 FUNC_4(&VAR_0->mutex);
}
