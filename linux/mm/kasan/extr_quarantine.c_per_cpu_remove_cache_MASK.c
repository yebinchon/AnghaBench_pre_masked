
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlist_head {int dummy; } ;
struct kmem_cache {int dummy; } ;


 struct qlist_head VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlist_head*,struct kmem_cache*) ;
 int FUNC_1 (struct qlist_head*,struct qlist_head*,struct kmem_cache*) ;
 struct qlist_head* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct kmem_cache *VAR_3 = VAR_2;
 struct qlist_head VAR_4 = VAR_0;
 struct qlist_head *VAR_5;

 VAR_5 = FUNC_2(&VAR_1);
 FUNC_1(VAR_5, &VAR_4, VAR_3);
 FUNC_0(&VAR_4, VAR_3);
}
