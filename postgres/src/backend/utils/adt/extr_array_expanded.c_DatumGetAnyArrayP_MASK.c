
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ea_magic; } ;
typedef TYPE_1__ ExpandedArrayHeader ;
typedef int Datum ;
typedef int AnyArrayType ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

AnyArrayType *
FUNC_5(Datum VAR_1)
{
 ExpandedArrayHeader *VAR_2;




 if (FUNC_4(FUNC_2(VAR_1)))
 {
  VAR_2 = (ExpandedArrayHeader *) FUNC_1(VAR_1);
  FUNC_0(VAR_2->ea_magic == VAR_0);
  return (AnyArrayType *) VAR_2;
 }


 return (AnyArrayType *) FUNC_3(VAR_1);
}
