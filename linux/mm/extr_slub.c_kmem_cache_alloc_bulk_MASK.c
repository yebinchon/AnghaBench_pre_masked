
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_cpu {int tid; void* freelist; } ;
struct kmem_cache {int object_size; int cpu_slab; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct kmem_cache*,int ,int ,int ,struct kmem_cache_cpu*) ;
 int FUNC_1 (struct kmem_cache*,int,void**) ;
 void* FUNC_2 (struct kmem_cache*,void*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct kmem_cache*,void*) ;
 int FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct kmem_cache*,int ,int,void**) ;
 struct kmem_cache* FUNC_9 (struct kmem_cache*,int ) ;
 int FUNC_10 (int ,struct kmem_cache*) ;
 struct kmem_cache_cpu* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct kmem_cache *VAR_2, gfp_t VAR_3, size_t VAR_4,
     void **VAR_5)
{
 struct kmem_cache_cpu *VAR_6;
 int VAR_7;


 VAR_2 = FUNC_9(VAR_2, VAR_3);
 if (FUNC_12(!VAR_2))
  return 0;





 FUNC_3();
 VAR_6 = FUNC_11(VAR_2->cpu_slab);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  void *VAR_8 = VAR_6->freelist;

  if (FUNC_12(!VAR_8)) {




   VAR_5[VAR_7] = FUNC_0(VAR_2, VAR_3, VAR_0,
         VAR_1, VAR_6);
   if (FUNC_12(!VAR_5[VAR_7]))
    goto error;

   VAR_6 = FUNC_11(VAR_2->cpu_slab);
   FUNC_5(VAR_2, VAR_5[VAR_7]);

   continue;
  }
  VAR_6->freelist = FUNC_2(VAR_2, VAR_8);
  VAR_5[VAR_7] = VAR_8;
  FUNC_5(VAR_2, VAR_5[VAR_7]);
 }
 VAR_6->tid = FUNC_7(VAR_6->tid);
 FUNC_4();


 if (FUNC_12(FUNC_10(VAR_3, VAR_2))) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_6(VAR_5[VAR_9], 0, VAR_2->object_size);
 }


 FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5);
 return VAR_7;
error:
 FUNC_4();
 FUNC_8(VAR_2, VAR_3, VAR_7, VAR_5);
 FUNC_1(VAR_2, VAR_7, VAR_5);
 return 0;
}
