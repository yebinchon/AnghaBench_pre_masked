
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tep_handle*,int,char*,char*,int ,int *) ;

int FUNC_1(struct tep_handle *VAR_1)
{
 FUNC_0(VAR_1, -1, "kmem", "kfree",
       VAR_0, ((void*)0));

 FUNC_0(VAR_1, -1, "kmem", "kmalloc",
       VAR_0, ((void*)0));

 FUNC_0(VAR_1, -1, "kmem", "kmalloc_node",
       VAR_0, ((void*)0));

 FUNC_0(VAR_1, -1, "kmem", "kmem_cache_alloc",
       VAR_0, ((void*)0));

 FUNC_0(VAR_1, -1, "kmem",
       "kmem_cache_alloc_node",
       VAR_0, ((void*)0));

 FUNC_0(VAR_1, -1, "kmem", "kmem_cache_free",
       VAR_0, ((void*)0));
 return 0;
}
