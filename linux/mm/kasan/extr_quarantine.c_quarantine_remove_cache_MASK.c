
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlist_head {int dummy; } ;
struct kmem_cache {int dummy; } ;


 struct qlist_head VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;
 int FUNC_1 (int ,struct kmem_cache*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct qlist_head*,struct kmem_cache*) ;
 int FUNC_4 (int *,struct qlist_head*,struct kmem_cache*) ;
 int VAR_4 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;

void FUNC_8(struct kmem_cache *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 struct qlist_head VAR_9 = VAR_0;
 FUNC_1(VAR_3, VAR_6, 1);

 FUNC_5(&VAR_4, VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_2(&VAR_2[VAR_8]))
   continue;
  FUNC_4(&VAR_2[VAR_8], &VAR_9, VAR_6);

  FUNC_6(&VAR_4, VAR_7);
  FUNC_0();
  FUNC_5(&VAR_4, VAR_7);
 }
 FUNC_6(&VAR_4, VAR_7);

 FUNC_3(&VAR_9, VAR_6);

 FUNC_7(&VAR_5);
}
