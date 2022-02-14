
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tep_func_resolver_t ;
struct tep_handle {struct func_resolver* func_resolver; } ;
struct func_resolver {void* priv; int * func; } ;


 int FUNC_0 (struct func_resolver*) ;
 struct func_resolver* FUNC_1 (int) ;

int FUNC_2(struct tep_handle *VAR_0,
         tep_func_resolver_t *VAR_1, void *VAR_2)
{
 struct func_resolver *VAR_3 = FUNC_1(sizeof(*VAR_3));

 if (VAR_3 == ((void*)0))
  return -1;

 VAR_3->func = VAR_1;
 VAR_3->priv = VAR_2;

 FUNC_0(VAR_0->func_resolver);
 VAR_0->func_resolver = VAR_3;

 return 0;
}
