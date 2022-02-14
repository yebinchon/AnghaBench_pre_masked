
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_6 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 int FUNC_4 (char*,scalar_t__,char*) ;

void FUNC_5(void)
{
 int VAR_7;


 if (VAR_5 && VAR_4) {

  VAR_7 = FUNC_4("trigger/current_trigger",
      VAR_5, "NULL");
  if (VAR_7 < 0)
   FUNC_1(VAR_6, "Failed to disable trigger: %s\n",
    FUNC_2(-VAR_7));
  VAR_4 = 0;
 }


 if (VAR_3) {
  VAR_7 = FUNC_3("enable", VAR_3, 0);
  if (VAR_7 < 0)
   FUNC_1(VAR_6, "Failed to disable buffer: %s\n",
    FUNC_2(-VAR_7));
 }


 if (VAR_5 && VAR_2 == VAR_0) {
  VAR_7 = FUNC_0(VAR_5, 0);
  if (VAR_7)
   FUNC_1(VAR_6, "Failed to disable all channels\n");
  VAR_2 = VAR_1;
 }
}
