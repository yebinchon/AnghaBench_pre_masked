
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int load; int size; } ;
typedef TYPE_1__ fz_hash_table ;
typedef int fz_context ;


 void* FUNC_0 (int *,TYPE_1__*,void const*,void*) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

void *
FUNC_2(fz_context *VAR_0, fz_hash_table *VAR_1, const void *VAR_2, void *VAR_3)
{
 if (VAR_1->load > VAR_1->size * 8 / 10)
  FUNC_1(VAR_0, VAR_1, VAR_1->size * 2);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
