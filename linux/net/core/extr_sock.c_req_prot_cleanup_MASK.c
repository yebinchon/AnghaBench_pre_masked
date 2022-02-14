
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock_ops {int * slab; int * slab_name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct request_sock_ops *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->slab_name);
 VAR_0->slab_name = ((void*)0);
 FUNC_1(VAR_0->slab);
 VAR_0->slab = ((void*)0);
}
