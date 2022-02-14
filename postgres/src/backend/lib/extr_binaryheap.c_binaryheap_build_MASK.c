
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bh_has_heap_property; scalar_t__ bh_size; } ;
typedef TYPE_1__ binaryheap ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(binaryheap *VAR_0)
{
 int VAR_1;

 for (VAR_1 = FUNC_0(VAR_0->bh_size - 1); VAR_1 >= 0; VAR_1--)
  FUNC_1(VAR_0, VAR_1);
 VAR_0->bh_has_heap_property = 1;
}
