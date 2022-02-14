
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ InvalidationChunk ;



__attribute__((used)) static void
FUNC_0(InvalidationChunk **VAR_0,
         InvalidationChunk **VAR_1)
{
 InvalidationChunk *VAR_2 = *VAR_1;

 if (VAR_2 == ((void*)0))
  return;

 while (VAR_2->next != ((void*)0))
  VAR_2 = VAR_2->next;

 VAR_2->next = *VAR_0;

 *VAR_0 = *VAR_1;

 *VAR_1 = ((void*)0);
}
