
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int * entries; } ;
typedef TYPE_1__ zend_blacklist ;
typedef int (* blacklist_apply_func_arg_t ) (int *,void*) ;



void FUNC_0(zend_blacklist *VAR_0, blacklist_apply_func_arg_t VAR_1, void *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->pos; VAR_3++) {
  VAR_1(&VAR_0->entries[VAR_3], VAR_2);
 }
}
