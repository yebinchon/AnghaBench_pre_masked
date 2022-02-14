
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BackendType ;
const char *
FUNC_0(BackendType VAR_0)
{
 const char *VAR_1 = "unknown process type";

 switch (VAR_0)
 {
  case 137:
   VAR_1 = "autovacuum launcher";
   break;
  case 136:
   VAR_1 = "autovacuum worker";
   break;
  case 135:
   VAR_1 = "client backend";
   break;
  case 134:
   VAR_1 = "background worker";
   break;
  case 133:
   VAR_1 = "background writer";
   break;
  case 132:
   VAR_1 = "checkpointer";
   break;
  case 131:
   VAR_1 = "startup";
   break;
  case 130:
   VAR_1 = "walreceiver";
   break;
  case 129:
   VAR_1 = "walsender";
   break;
  case 128:
   VAR_1 = "walwriter";
   break;
 }

 return VAR_1;
}
