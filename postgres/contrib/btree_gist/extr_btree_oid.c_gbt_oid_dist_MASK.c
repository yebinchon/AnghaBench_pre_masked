
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;
typedef scalar_t__ Oid ;
typedef int FmgrInfo ;



__attribute__((used)) static float8
FUNC_0(const void *VAR_0, const void *VAR_1, FmgrInfo *VAR_2)
{
 Oid VAR_3 = *(const Oid *) VAR_0;
 Oid VAR_4 = *(const Oid *) VAR_1;

 if (VAR_3 < VAR_4)
  return (float8) (VAR_4 - VAR_3);
 else
  return (float8) (VAR_3 - VAR_4);
}
