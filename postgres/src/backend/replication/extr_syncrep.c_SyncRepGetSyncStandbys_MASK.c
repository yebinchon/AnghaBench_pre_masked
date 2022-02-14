
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ syncrep_method; } ;
typedef int List ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * FUNC_2 (int*) ;
 int * FUNC_3 (int*) ;
 int VAR_3 ;

List *
FUNC_4(bool *VAR_4)
{
 FUNC_0(FUNC_1(VAR_3));


 if (VAR_4 != ((void*)0))
  *VAR_4 = 0;


 if (VAR_2 == ((void*)0))
  return VAR_0;

 return (VAR_2->syncrep_method == VAR_1) ?
  FUNC_2(VAR_4) :
  FUNC_3(VAR_4);
}
