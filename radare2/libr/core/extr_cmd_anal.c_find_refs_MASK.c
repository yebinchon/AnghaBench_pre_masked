
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
typedef int cmd ;
struct TYPE_5__ {int offset; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_0, const char *VAR_1) {
 char VAR_2[128];
 ut64 VAR_3 = VAR_0->offset;
 while (*VAR_1 == ' ') VAR_1++;
 if (!*VAR_1) {
  VAR_1 = "str.";
 }
 if (*VAR_1 == '?') {
  FUNC_0 ("Usage: axF [flag-str-filter]\n");
  return;
 }
 FUNC_0 ("Finding references of flags matching '%s'...\n", VAR_1);
 FUNC_3 (VAR_2, sizeof (VAR_2) - 1, ".(findstref) @@= `f~%s[0]`", VAR_1);
 FUNC_1 (VAR_0, "(findstref,f here=$$,s entry0,/r here,f-here)");
 FUNC_1 (VAR_0, VAR_2);
 FUNC_1 (VAR_0, "(-findstref)");
 FUNC_2 (VAR_0, VAR_3, 1);
}
