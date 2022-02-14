
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_pool_map {int * to_pool; void* pool_to; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct svc_pool_map *VAR_2, unsigned int VAR_3)
{
 VAR_2->to_pool = FUNC_0(VAR_3, sizeof(unsigned int), VAR_1);
 if (!VAR_2->to_pool)
  goto fail;
 VAR_2->pool_to = FUNC_0(VAR_3, sizeof(unsigned int), VAR_1);
 if (!VAR_2->pool_to)
  goto fail_free;

 return 0;

fail_free:
 FUNC_1(VAR_2->to_pool);
 VAR_2->to_pool = ((void*)0);
fail:
 return -VAR_0;
}
