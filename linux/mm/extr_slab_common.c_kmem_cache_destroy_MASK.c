
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int name; scalar_t__ refcount; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct kmem_cache*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct kmem_cache*) ;
 int FUNC_10 (struct kmem_cache*) ;
 int VAR_0 ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct kmem_cache *VAR_1)
{
 int VAR_2;

 if (FUNC_11(!VAR_1))
  return;

 FUNC_1(VAR_1);

 FUNC_2();
 FUNC_3();

 FUNC_4(&VAR_0);

 VAR_1->refcount--;
 if (VAR_1->refcount)
  goto out_unlock;

 VAR_2 = FUNC_10(VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_9(VAR_1);

 if (VAR_2) {
  FUNC_6("kmem_cache_destroy %s: Slab cache still has objects\n",
         VAR_1->name);
  FUNC_0();
 }
out_unlock:
 FUNC_5(&VAR_0);

 FUNC_8();
 FUNC_7();
}
