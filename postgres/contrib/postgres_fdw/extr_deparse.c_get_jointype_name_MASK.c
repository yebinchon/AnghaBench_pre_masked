
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JoinType ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,int) ;

const char *
FUNC_1(JoinType VAR_1)
{
 switch (VAR_1)
 {
  case 130:
   return "INNER";

  case 129:
   return "LEFT";

  case 128:
   return "RIGHT";

  case 131:
   return "FULL";

  default:

   FUNC_0(VAR_0, "unsupported join type %d", VAR_1);
 }


 return ((void*)0);
}
