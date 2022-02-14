
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int) ;

const char *
FUNC_1(int VAR_3)
{
 switch (VAR_3)
 {
  case 130:
   return "Unknown host";
  case 136:
   return "Host name lookup failure";


  case 135:
   return "Invalid argument";


  case 133:
   return "Address family not supported";


  case 132:
   return "Not enough memory";


  case 131:
   return "No host data of that type was found";


  case 129:
   return "Class type not found";


  case 128:
   return "Socket type not supported";

  default:
   return "Unknown server error";
 }

}
