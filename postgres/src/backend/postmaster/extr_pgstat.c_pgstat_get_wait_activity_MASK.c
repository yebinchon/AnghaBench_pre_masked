
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WaitEventActivity ;
__attribute__((used)) static const char *
FUNC_0(WaitEventActivity VAR_0)
{
 const char *VAR_1 = "unknown wait event";

 switch (VAR_0)
 {
  case 141:
   VAR_1 = "ArchiverMain";
   break;
  case 140:
   VAR_1 = "AutoVacuumMain";
   break;
  case 139:
   VAR_1 = "BgWriterHibernate";
   break;
  case 138:
   VAR_1 = "BgWriterMain";
   break;
  case 137:
   VAR_1 = "CheckpointerMain";
   break;
  case 136:
   VAR_1 = "LogicalApplyMain";
   break;
  case 135:
   VAR_1 = "LogicalLauncherMain";
   break;
  case 134:
   VAR_1 = "PgStatMain";
   break;
  case 133:
   VAR_1 = "RecoveryWalAll";
   break;
  case 132:
   VAR_1 = "RecoveryWalStream";
   break;
  case 131:
   VAR_1 = "SysLoggerMain";
   break;
  case 130:
   VAR_1 = "WalReceiverMain";
   break;
  case 129:
   VAR_1 = "WalSenderMain";
   break;
  case 128:
   VAR_1 = "WalWriterMain";
   break;

 }

 return VAR_1;
}
