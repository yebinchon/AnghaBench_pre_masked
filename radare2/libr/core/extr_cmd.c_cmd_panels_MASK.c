
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int panels_root; int config; scalar_t__ panels; scalar_t__ vmode; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 char* FUNC_3 (TYPE_1__*,char*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static int FUNC_8(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 if (VAR_2->vmode) {
  return 0;
 }
 if (*VAR_1 == '?') {
  FUNC_0 ("Usage: v[*i]\n");
  FUNC_0 ("v.test    # save current layout with name test\n");
  FUNC_0 ("v test    # load saved layout with name test\n");
  FUNC_0 ("vi ...    # launch 'cfg.editor'\n");
  return 0;
 }
 if (*VAR_1 == ' ') {
  if (VAR_2->panels) {
   FUNC_5 (VAR_2, VAR_1 + 1);
  }
  FUNC_2 (VAR_2->config, "scr.layout", VAR_1 + 1);
  return 1;
 }
 if (*VAR_1 == '=') {
  FUNC_6 (VAR_2, VAR_1 + 1);
  FUNC_2 (VAR_2->config, "scr.layout", VAR_1 + 1);
  return 1;
 }
 if (*VAR_1 == 'i') {
  char *VAR_3 = FUNC_7 (VAR_1, ' ');
  if (VAR_3) {
   char *VAR_4 = FUNC_3 (VAR_2, VAR_3 + 1, ((void*)0));
   if (VAR_4) {
    FUNC_1 (VAR_4);
   } else {
    FUNC_0 ("Cannot open file (%s)\n", VAR_3 + 1);
   }
  }

  return 0;
 }
 FUNC_4 (VAR_2, VAR_2->panels_root);
 return 1;
}
