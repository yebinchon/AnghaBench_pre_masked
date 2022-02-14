
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
 int VAR_0 ;

const char *
FUNC_0(uint8 VAR_1)
{
 const char *VAR_2 = ((void*)0);

 switch (VAR_1 & ~VAR_0)
 {
  case 137:
   VAR_2 = "CHECKPOINT_SHUTDOWN";
   break;
  case 138:
   VAR_2 = "CHECKPOINT_ONLINE";
   break;
  case 131:
   VAR_2 = "NOOP";
   break;
  case 132:
   VAR_2 = "NEXTOID";
   break;
  case 128:
   VAR_2 = "SWITCH";
   break;
  case 139:
   VAR_2 = "BACKUP_END";
   break;
  case 130:
   VAR_2 = "PARAMETER_CHANGE";
   break;
  case 129:
   VAR_2 = "RESTORE_POINT";
   break;
  case 133:
   VAR_2 = "FPW_CHANGE";
   break;
  case 136:
   VAR_2 = "END_OF_RECOVERY";
   break;
  case 135:
   VAR_2 = "FPI";
   break;
  case 134:
   VAR_2 = "FPI_FOR_HINT";
   break;
 }

 return VAR_2;
}
