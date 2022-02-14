
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {int dummy; } ;
struct zs_pool {int * handle_cachep; void* zspage_cachep; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct zs_pool *VAR_1)
{
 VAR_1->handle_cachep = FUNC_0("zs_handle", VAR_0,
     0, 0, ((void*)0));
 if (!VAR_1->handle_cachep)
  return 1;

 VAR_1->zspage_cachep = FUNC_0("zspage", sizeof(struct zspage),
     0, 0, ((void*)0));
 if (!VAR_1->zspage_cachep) {
  FUNC_1(VAR_1->handle_cachep);
  VAR_1->handle_cachep = ((void*)0);
  return 1;
 }

 return 0;
}
