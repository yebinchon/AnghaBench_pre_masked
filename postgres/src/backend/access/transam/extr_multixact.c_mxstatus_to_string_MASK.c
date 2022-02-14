
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MultiXactStatus ;


 int VAR_0 ;






 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static char *
FUNC_1(MultiXactStatus VAR_1)
{
 switch (VAR_1)
 {
  case 133:
   return "keysh";
  case 131:
   return "sh";
  case 132:
   return "fornokeyupd";
  case 130:
   return "forupd";
  case 129:
   return "nokeyupd";
  case 128:
   return "upd";
  default:
   FUNC_0(VAR_0, "unrecognized multixact status %d", VAR_1);
   return "";
 }
}
