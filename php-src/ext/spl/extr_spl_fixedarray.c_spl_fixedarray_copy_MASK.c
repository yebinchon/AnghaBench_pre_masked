
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int * elements; } ;
typedef TYPE_1__ spl_fixedarray ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(spl_fixedarray *VAR_0, spl_fixedarray *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) {
  FUNC_0(&VAR_0->elements[VAR_2], &VAR_1->elements[VAR_2]);
 }
}
