
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {void* xa_node; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct xa_state*) ;

__attribute__((used)) static void *FUNC_2(struct xa_state *VAR_0, void *VAR_1)
{
 if (FUNC_0(VAR_1))
  return ((void*)0);
 if (FUNC_1(VAR_0))
  VAR_1 = VAR_0->xa_node;
 return VAR_1;
}
