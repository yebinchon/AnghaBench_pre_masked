
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0)
{
 const char *VAR_1;

 switch (VAR_0)
 {
  case 140:
  case 139:
  case 138:
  case 137:
  case 136:
   VAR_1 = FUNC_0("DEBUG");
   break;
  case 132:
  case 131:
   VAR_1 = FUNC_0("LOG");
   break;
  case 133:
   VAR_1 = FUNC_0("INFO");
   break;
  case 130:
   VAR_1 = FUNC_0("NOTICE");
   break;
  case 128:
   VAR_1 = FUNC_0("WARNING");
   break;
  case 135:
   VAR_1 = FUNC_0("ERROR");
   break;
  case 134:
   VAR_1 = FUNC_0("FATAL");
   break;
  case 129:
   VAR_1 = FUNC_0("PANIC");
   break;
  default:
   VAR_1 = "???";
   break;
 }

 return VAR_1;
}
