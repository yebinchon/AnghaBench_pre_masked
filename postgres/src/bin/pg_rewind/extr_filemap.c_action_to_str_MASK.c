
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_action_t ;
__attribute__((used)) static const char *
FUNC_0(file_action_t VAR_0)
{
 switch (VAR_0)
 {
  case 130:
   return "NONE";
  case 133:
   return "COPY";
  case 128:
   return "TRUNCATE";
  case 132:
   return "COPY_TAIL";
  case 131:
   return "CREATE";
  case 129:
   return "REMOVE";

  default:
   return "unknown";
 }
}
