
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int _mode; } ;
typedef TYPE_1__ RDebug ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_5 (void *VAR_3, const char *VAR_4, const char *VAR_5) {
 static char VAR_6[32] = "cfg.";
 RDebug *VAR_7 = (RDebug *)VAR_3;
 int VAR_8;
 if (FUNC_0 (VAR_4)>0) {
  FUNC_4 (VAR_6 + 4, VAR_4, 20);
  VAR_8 = (int)FUNC_3 (VAR_0, VAR_6, 0);
  if (VAR_7->_mode == 2) {
   VAR_7->_mode = 0;
  } else {
   FUNC_2 (",");
  }
  FUNC_1 ("{\"signum\":\"%s\",\"name\":\"%s\",\"option\":", VAR_4, VAR_5);
  if (VAR_8 & VAR_1) {
   FUNC_2 ("\"cont\"");
  } else if (VAR_8 & VAR_2) {
   FUNC_2 ("\"skip\"");
  } else {
   FUNC_2 ("null");
  }
  FUNC_2 ("}");
 }
 return 1;
}
