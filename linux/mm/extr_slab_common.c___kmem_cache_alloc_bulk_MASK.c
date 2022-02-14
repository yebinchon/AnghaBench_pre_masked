
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct kmem_cache*,size_t,void**) ;
 void* FUNC_1 (struct kmem_cache*,int ) ;

int FUNC_2(struct kmem_cache *VAR_0, gfp_t VAR_1, size_t VAR_2,
        void **VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  void *VAR_5 = VAR_3[VAR_4] = FUNC_1(VAR_0, VAR_1);
  if (!VAR_5) {
   FUNC_0(VAR_0, VAR_4, VAR_3);
   return 0;
  }
 }
 return VAR_4;
}
