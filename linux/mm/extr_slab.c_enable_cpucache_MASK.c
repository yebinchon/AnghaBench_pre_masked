
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int limit; int shared; int batchcount; int size; int name; int num; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct kmem_cache*,int ,int ) ;
 int FUNC_1 (struct kmem_cache*,int,int,int,int ) ;
 int FUNC_2 (struct kmem_cache*) ;
 struct kmem_cache* FUNC_3 (struct kmem_cache*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct kmem_cache *VAR_1, gfp_t VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;

 VAR_3 = FUNC_0(VAR_1, VAR_1->num, VAR_2);
 if (VAR_3)
  goto end;

 if (!FUNC_2(VAR_1)) {
  struct kmem_cache *VAR_7 = FUNC_3(VAR_1);
  VAR_4 = VAR_7->limit;
  VAR_5 = VAR_7->shared;
  VAR_6 = VAR_7->batchcount;
 }

 if (VAR_4 && VAR_5 && VAR_6)
  goto skip_setup;
 if (VAR_1->size > 131072)
  VAR_4 = 1;
 else if (VAR_1->size > VAR_0)
  VAR_4 = 8;
 else if (VAR_1->size > 1024)
  VAR_4 = 24;
 else if (VAR_1->size > 256)
  VAR_4 = 54;
 else
  VAR_4 = 120;
 VAR_5 = 0;
 if (VAR_1->size <= VAR_0 && FUNC_4() > 1)
  VAR_5 = 8;
 VAR_6 = (VAR_4 + 1) / 2;
skip_setup:
 VAR_3 = FUNC_1(VAR_1, VAR_4, VAR_6, VAR_5, VAR_2);
end:
 if (VAR_3)
  FUNC_5("enable_cpucache failed for %s, error %d\n",
         VAR_1->name, -VAR_3);
 return VAR_3;
}
