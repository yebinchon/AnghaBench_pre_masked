
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* prevn; scalar_t__ next; } ;
typedef TYPE_1__ stb__nochildren ;
typedef scalar_t__ stb__alloc_type ;
struct TYPE_9__ {scalar_t__* prevn; scalar_t__ next; } ;
typedef TYPE_2__ stb__alloc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__** FUNC_5 (scalar_t__) ;

void FUNC_6(void *VAR_2, void *VAR_3)
{
   stb__alloc *VAR_4 = FUNC_1(VAR_2);

   stb__alloc_type VAR_5 = FUNC_2(VAR_3);
   FUNC_0(VAR_5 == VAR_0 || VAR_5 == VAR_1);

   if (VAR_5 == VAR_0) {
      stb__alloc *VAR_6 = (stb__alloc *) VAR_3 - 1;


      *(VAR_6->prevn) = VAR_6->next;
      if (VAR_6->next)
         *FUNC_5(VAR_6->next) = VAR_6->prevn;

      FUNC_3(VAR_4, VAR_6);
   } else {
      stb__nochildren *VAR_7 = (stb__nochildren *) VAR_3 - 1;


      *(VAR_7->prevn) = VAR_7->next;
      if (VAR_7->next)
         *FUNC_5(VAR_7->next) = VAR_7->prevn;

      FUNC_4(VAR_4, VAR_7);
   }
}
