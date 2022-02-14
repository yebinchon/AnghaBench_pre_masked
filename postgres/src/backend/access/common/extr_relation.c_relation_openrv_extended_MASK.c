
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Relation ;
typedef int RangeVar ;
typedef int Oid ;
typedef scalar_t__ LOCKMODE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,scalar_t__,int) ;
 int * FUNC_3 (int ,scalar_t__) ;

Relation
FUNC_4(const RangeVar *VAR_1, LOCKMODE VAR_2,
       bool VAR_3)
{
 Oid VAR_4;





 if (VAR_2 != VAR_0)
  FUNC_0();


 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);


 if (!FUNC_1(VAR_4))
  return ((void*)0);


 return FUNC_3(VAR_4, VAR_0);
}
