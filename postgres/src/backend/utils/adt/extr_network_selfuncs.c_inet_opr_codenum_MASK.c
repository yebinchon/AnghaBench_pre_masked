
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;





 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(Oid VAR_1)
{
 switch (VAR_1)
 {
  case 128:
   return -2;
  case 129:
   return -1;
  case 132:
   return 0;
  case 131:
   return 1;
  case 130:
   return 2;
  default:
   FUNC_0(VAR_0, "unrecognized operator %u for inet selectivity",
     VAR_1);
 }
 return 0;
}
