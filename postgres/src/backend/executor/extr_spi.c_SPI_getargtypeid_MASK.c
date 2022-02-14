
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; int nargs; int * argtypes; } ;
typedef TYPE_1__* SPIPlanPtr ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

Oid
FUNC_0(SPIPlanPtr VAR_4, int VAR_5)
{
 if (VAR_4 == ((void*)0) || VAR_4->magic != VAR_3 ||
  VAR_5 < 0 || VAR_5 >= VAR_4->nargs)
 {
  VAR_2 = VAR_1;
  return VAR_0;
 }
 return VAR_4->argtypes[VAR_5];
}
