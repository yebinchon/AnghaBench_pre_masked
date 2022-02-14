
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; struct TYPE_4__* ents; int (* drop_val ) (int *,void*) ;void* val; } ;
typedef TYPE_1__ fz_hash_table ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,void*) ;

void
FUNC_2(fz_context *VAR_0, fz_hash_table *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->drop_val)
 {
  int VAR_2, VAR_3 = VAR_1->size;
  for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2)
  {
   void *VAR_4 = VAR_1->ents[VAR_2].val;
   if (VAR_4)
    VAR_1->drop_val(VAR_0, VAR_4);
  }
 }

 FUNC_0(VAR_0, VAR_1->ents);
 FUNC_0(VAR_0, VAR_1);
}
