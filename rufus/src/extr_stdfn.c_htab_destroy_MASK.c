
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; TYPE_2__* table; scalar_t__ filled; } ;
typedef TYPE_1__ htab_table ;
struct TYPE_5__ {struct TYPE_5__* str; scalar_t__ used; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(htab_table* VAR_0)
{
 size_t VAR_1;

 if ((VAR_0 == ((void*)0)) || (VAR_0->table == ((void*)0))) {
  return;
 }

 for (VAR_1=0; VAR_1<VAR_0->size+1; VAR_1++) {
  if (VAR_0->table[VAR_1].used) {
   FUNC_0(VAR_0->table[VAR_1].str);
  }
 }
 VAR_0->filled = 0; VAR_0->size = 0;
 FUNC_0(VAR_0->table);
 VAR_0->table = ((void*)0);
}
