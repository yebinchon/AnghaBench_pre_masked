
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WaitEventTimeout ;






__attribute__((used)) static const char *
FUNC_0(WaitEventTimeout VAR_0)
{
 const char *VAR_1 = "unknown wait event";

 switch (VAR_0)
 {
  case 130:
   VAR_1 = "BaseBackupThrottle";
   break;
  case 129:
   VAR_1 = "PgSleep";
   break;
  case 128:
   VAR_1 = "RecoveryApplyDelay";
   break;

 }

 return VAR_1;
}
