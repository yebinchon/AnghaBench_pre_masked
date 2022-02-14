
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lzma2; int sb; int filter; } ;
typedef TYPE_1__ CLzma2WithFilters ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(CLzma2WithFilters *VAR_0)
{
  FUNC_2(&VAR_0->filter);



  if (VAR_0->lzma2)
  {
    FUNC_0(VAR_0->lzma2);
    VAR_0->lzma2 = ((void*)0);
  }
}
