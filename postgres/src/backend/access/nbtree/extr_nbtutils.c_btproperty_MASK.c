
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int IndexAMProperty ;




bool
FUNC_0(Oid VAR_0, int VAR_1,
     IndexAMProperty VAR_2, const char *VAR_3,
     bool *VAR_4, bool *VAR_5)
{
 switch (VAR_2)
 {
  case 128:

   if (VAR_1 == 0)
    return 0;

   *VAR_4 = 1;
   return 1;

  default:
   return 0;
 }
}
