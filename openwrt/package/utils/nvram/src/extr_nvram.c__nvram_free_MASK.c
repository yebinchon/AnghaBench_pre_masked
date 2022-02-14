
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {struct TYPE_6__* value; struct TYPE_6__* next; } ;
typedef TYPE_1__ nvram_tuple_t ;
struct TYPE_7__ {TYPE_1__* nvram_dead; TYPE_1__** nvram_hash; } ;
typedef TYPE_2__ nvram_handle_t ;


 size_t FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(nvram_handle_t *VAR_0)
{
 uint32_t VAR_1;
 nvram_tuple_t *VAR_2, *VAR_3;


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->nvram_hash); VAR_1++) {
  for (VAR_2 = VAR_0->nvram_hash[VAR_1]; VAR_2; VAR_2 = VAR_3) {
   VAR_3 = VAR_2->next;
   if (VAR_2->value)
    FUNC_1(VAR_2->value);
   FUNC_1(VAR_2);
  }
  VAR_0->nvram_hash[VAR_1] = ((void*)0);
 }


 for (VAR_2 = VAR_0->nvram_dead; VAR_2; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  if (VAR_2->value)
   FUNC_1(VAR_2->value);
  FUNC_1(VAR_2);
 }

 VAR_0->nvram_dead = ((void*)0);
}
