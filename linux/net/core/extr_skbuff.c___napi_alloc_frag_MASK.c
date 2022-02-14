
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_alloc_cache {int page; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (int *,unsigned int,int ) ;
 struct napi_alloc_cache* FUNC_1 (int *) ;

__attribute__((used)) static void *FUNC_2(unsigned int VAR_1, gfp_t VAR_2)
{
 struct napi_alloc_cache *VAR_3 = FUNC_1(&VAR_0);

 return FUNC_0(&VAR_3->page, VAR_1, VAR_2);
}
