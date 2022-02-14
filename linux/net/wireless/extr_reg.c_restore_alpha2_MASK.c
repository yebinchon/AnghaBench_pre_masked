
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 char* VAR_1 ;

__attribute__((used)) static void FUNC_3(char *VAR_2, bool VAR_3)
{

 VAR_2[0] = '9';
 VAR_2[1] = '7';


 if (FUNC_0()) {

  if (VAR_3) {
   FUNC_2("Restoring regulatory settings including user preference\n");
   VAR_1[0] = '9';
   VAR_1[1] = '7';






   if (!FUNC_1(VAR_0)) {
    FUNC_2("Keeping preference on module parameter ieee80211_regdom: %c%c\n",
      VAR_0[0], VAR_0[1]);
    VAR_2[0] = VAR_0[0];
    VAR_2[1] = VAR_0[1];
   }
  } else {
   FUNC_2("Restoring regulatory settings while preserving user preference for: %c%c\n",
     VAR_1[0], VAR_1[1]);
   VAR_2[0] = VAR_1[0];
   VAR_2[1] = VAR_1[1];
  }
 } else if (!FUNC_1(VAR_0)) {
  FUNC_2("Keeping preference on module parameter ieee80211_regdom: %c%c\n",
    VAR_0[0], VAR_0[1]);
  VAR_2[0] = VAR_0[0];
  VAR_2[1] = VAR_0[1];
 } else
  FUNC_2("Restoring regulatory settings\n");
}
