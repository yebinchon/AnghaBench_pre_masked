
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int object_size; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (struct kmem_cache*,int ) ;
 int FUNC_1 (struct kmem_cache*,size_t,void**) ;
 int FUNC_2 (struct kmem_cache*,int ,size_t,void**,int ) ;
 int FUNC_3 (struct kmem_cache*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (struct kmem_cache*,int ,size_t,void**) ;
 struct kmem_cache* FUNC_8 (struct kmem_cache*,int ) ;
 int FUNC_9 (int ,struct kmem_cache*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct kmem_cache *VAR_1, gfp_t VAR_2, size_t VAR_3,
     void **VAR_4)
{
 size_t VAR_5;

 VAR_1 = FUNC_8(VAR_1, VAR_2);
 if (!VAR_1)
  return 0;

 FUNC_3(VAR_1, VAR_2);

 FUNC_4();
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  void *VAR_6 = FUNC_0(VAR_1, VAR_2);

  if (FUNC_10(!VAR_6))
   goto error;
  VAR_4[VAR_5] = VAR_6;
 }
 FUNC_5();

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);


 if (FUNC_10(FUNC_9(VAR_2, VAR_1)))
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   FUNC_6(VAR_4[VAR_5], 0, VAR_1->object_size);

 FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_3;
error:
 FUNC_5();
 FUNC_2(VAR_1, VAR_2, VAR_5, VAR_4, VAR_0);
 FUNC_7(VAR_1, VAR_2, VAR_5, VAR_4);
 FUNC_1(VAR_1, VAR_5, VAR_4);
 return 0;
}
