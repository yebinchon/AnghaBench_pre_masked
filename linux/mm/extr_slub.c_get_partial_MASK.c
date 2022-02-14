
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache_cpu {int dummy; } ;
struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (struct kmem_cache*,int ,struct kmem_cache_cpu*) ;
 int FUNC_1 (struct kmem_cache*,int) ;
 void* FUNC_2 (struct kmem_cache*,int ,struct kmem_cache_cpu*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void *FUNC_6(struct kmem_cache *VAR_1, gfp_t VAR_2, int VAR_3,
  struct kmem_cache_cpu *VAR_4)
{
 void *VAR_5;
 int VAR_6 = VAR_3;

 if (VAR_3 == VAR_0)
  VAR_6 = FUNC_5();
 else if (!FUNC_3(VAR_3))
  VAR_6 = FUNC_4(VAR_3);

 VAR_5 = FUNC_2(VAR_1, FUNC_1(VAR_1, VAR_6), VAR_4, VAR_2);
 if (VAR_5 || VAR_3 != VAR_0)
  return VAR_5;

 return FUNC_0(VAR_1, VAR_2, VAR_4);
}
