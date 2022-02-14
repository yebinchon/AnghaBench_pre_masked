
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kmem_cache*) ;
 int FUNC_1 (struct kmem_cache*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kmem_cache*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct kmem_cache*) ;
 int FUNC_7 (struct kmem_cache*) ;
 int FUNC_8 (struct kmem_cache*) ;

__attribute__((used)) static int FUNC_9(struct kmem_cache *VAR_4)
{

 FUNC_1(VAR_4);

 if (FUNC_0(VAR_4) != 0)
  return -VAR_0;

 FUNC_4(VAR_4);
 FUNC_3(&VAR_4->list);

 if (VAR_4->flags & VAR_1) {



  FUNC_2(&VAR_4->list, &VAR_2);
  FUNC_5(&VAR_3);
 } else {




  FUNC_6(VAR_4);

 }

 return 0;
}
