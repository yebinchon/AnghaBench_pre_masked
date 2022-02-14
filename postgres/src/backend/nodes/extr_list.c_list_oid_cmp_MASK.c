
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int ListCell ;


 scalar_t__ FUNC_0 (int const*) ;

int
FUNC_1(const ListCell *VAR_0, const ListCell *VAR_1)
{
 Oid VAR_2 = FUNC_0(VAR_0);
 Oid VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 > VAR_3)
  return 1;
 return 0;
}
