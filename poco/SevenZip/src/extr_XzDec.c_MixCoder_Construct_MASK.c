
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* coders; scalar_t__ numCoders; scalar_t__ buf; int * alloc; } ;
struct TYPE_4__ {int * p; } ;
typedef int ISzAlloc ;
typedef TYPE_2__ CMixCoder ;


 int VAR_0 ;

void FUNC_0(CMixCoder *VAR_1, ISzAlloc *VAR_2)
{
  int VAR_3;
  VAR_1->alloc = VAR_2;
  VAR_1->buf = 0;
  VAR_1->numCoders = 0;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    VAR_1->coders[VAR_3].p = ((void*)0);
}
