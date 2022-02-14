
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WaitEventClient ;
__attribute__((used)) static const char *
FUNC_0(WaitEventClient VAR_0)
{
 const char *VAR_1 = "unknown wait event";

 switch (VAR_0)
 {
  case 136:
   VAR_1 = "ClientRead";
   break;
  case 135:
   VAR_1 = "ClientWrite";
   break;
  case 133:
   VAR_1 = "LibPQWalReceiverConnect";
   break;
  case 132:
   VAR_1 = "LibPQWalReceiverReceive";
   break;
  case 131:
   VAR_1 = "SSLOpenServer";
   break;
  case 130:
   VAR_1 = "WalReceiverWaitStart";
   break;
  case 129:
   VAR_1 = "WalSenderWaitForWAL";
   break;
  case 128:
   VAR_1 = "WalSenderWriteData";
   break;
  case 134:
   VAR_1 = "GSSOpenServer";
   break;

 }

 return VAR_1;
}
