
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_0)
{
 switch(VAR_0)
 {
  case 128:
   FUNC_0("(ECPG_INFORMIX_ENOTDMY)");
   break;
  case 129:
   FUNC_0("(ECPG_INFORMIX_ENOSHORTDATE)");
   break;
  case 131:
   FUNC_0("(ECPG_INFORMIX_BAD_DAY)");
   break;
  case 130:
   FUNC_0("(ECPG_INFORMIX_BAD_MONTH)");
   break;
  default:
   FUNC_0("(unknown ret: %d)", VAR_0);
   break;
 }
 FUNC_0("\n");
}
