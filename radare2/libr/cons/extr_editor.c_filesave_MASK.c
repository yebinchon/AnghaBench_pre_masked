
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int const*,int,int ) ;
 int FUNC_4 (char*,char) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7() {
 char VAR_5[128];
 int VAR_6;
 if (!VAR_3) {
  FUNC_0 ("File: ");
  VAR_5[0] = 0;
  if (FUNC_1 (VAR_5, sizeof (VAR_5) - 1, VAR_4)) {
   VAR_5[sizeof (VAR_5) - 1] = 0;
   VAR_6 = FUNC_6 (VAR_5);
   if (VAR_6 > 0) {
    VAR_5[VAR_6 - 1] = 0;
    FUNC_2 (VAR_3);
    VAR_3 = FUNC_5 (VAR_5);
   }
  }
 }
 if (VAR_1) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_1[VAR_6] == '\0') {
    VAR_1[VAR_6] = '\n';
   }
  }
 }
 if (FUNC_3 (VAR_3, (const ut8 *)VAR_1, VAR_0, 0)) {
  FUNC_0 ("File '%s' saved (%d byte(s))\n", VAR_3, VAR_0);
 } else {
  FUNC_0 ("Cannot save file\n");
 }
 VAR_2 = FUNC_4 (VAR_1, '\n');
}
