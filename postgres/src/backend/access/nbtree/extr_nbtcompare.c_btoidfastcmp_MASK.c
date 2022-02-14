
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SortSupport ;
typedef scalar_t__ Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(Datum VAR_2, Datum VAR_3, SortSupport VAR_4)
{
 Oid VAR_5 = FUNC_0(VAR_2);
 Oid VAR_6 = FUNC_0(VAR_3);

 if (VAR_5 > VAR_6)
  return VAR_0;
 else if (VAR_5 == VAR_6)
  return 0;
 else
  return VAR_1;
}
