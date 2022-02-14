
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filter; int sb; int * lzma2; int * bigAlloc; int * alloc; } ;
typedef int ISzAlloc ;
typedef TYPE_1__ CLzma2WithFilters ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CLzma2WithFilters *VAR_0, ISzAlloc *VAR_1, ISzAlloc *VAR_2)
{
  VAR_0->alloc = VAR_1;
  VAR_0->bigAlloc = VAR_2;
  VAR_0->lzma2 = ((void*)0);



  FUNC_1(&VAR_0->filter);
}
