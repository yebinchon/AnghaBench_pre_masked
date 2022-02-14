
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int RangeVar ;
typedef int Oid ;
typedef scalar_t__ LOCKMODE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int const*,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__) ;

Relation
FUNC_3(const RangeVar *VAR_1, LOCKMODE VAR_2)
{
 Oid VAR_3;
 if (VAR_2 != VAR_0)
  FUNC_0();


 VAR_3 = FUNC_1(VAR_1, VAR_2, 0);


 return FUNC_2(VAR_3, VAR_0);
}
