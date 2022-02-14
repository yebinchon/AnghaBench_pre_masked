
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ slice_ndim; struct TYPE_4__* slice_nulls; struct TYPE_4__* slice_values; } ;
typedef TYPE_1__* ArrayIterator ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(ArrayIterator VAR_0)
{
 if (VAR_0->slice_ndim > 0)
 {
  FUNC_0(VAR_0->slice_values);
  FUNC_0(VAR_0->slice_nulls);
 }
 FUNC_0(VAR_0);
}
