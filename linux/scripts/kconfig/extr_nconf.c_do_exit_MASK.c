
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4;
 if (!FUNC_1()) {
  VAR_2 = 1;
  return 0;
 }
 VAR_4 = FUNC_0(VAR_3,
   "Do you wish to save your new configuration?\n"
    "<ESC> to cancel and resume nconfig.",
   2,
   "   <save>   ",
   "<don't save>");
 if (VAR_4 == VAR_0) {
  VAR_2 = 0;
  return -1;
 }


 switch (VAR_4) {
 case 0:
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4)
   FUNC_0(
    VAR_3,
    "Error during writing of configuration.\n"
      "Your configuration changes were NOT saved.",
      1,
      "<OK>");
  FUNC_3(0);
  break;
 default:
  FUNC_0(
   VAR_3,
   "Your configuration changes were NOT saved.",
   1,
   "<OK>");
  break;
 }
 VAR_2 = 1;
 return 0;
}
