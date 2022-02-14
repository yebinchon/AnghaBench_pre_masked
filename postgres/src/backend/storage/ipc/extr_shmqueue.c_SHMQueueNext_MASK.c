
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__ const* next; } ;
typedef int Size ;
typedef TYPE_1__ const SHM_QUEUE ;
typedef int * Pointer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

Pointer
FUNC_2(const SHM_QUEUE *VAR_0, const SHM_QUEUE *VAR_1, Size VAR_2)
{
 SHM_QUEUE *VAR_3 = VAR_1->next;

 FUNC_0(FUNC_1(VAR_1));

 if (VAR_3 == VAR_0)
  return ((void*)0);

 return (Pointer) (((char *) VAR_3) - VAR_2);
}
