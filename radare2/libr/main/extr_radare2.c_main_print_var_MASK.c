
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,...) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char const*,char const*) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_11) {
 int VAR_12 = 0;




 char *VAR_13 = FUNC_5 (VAR_5);
 char *VAR_14 = FUNC_5 (VAR_6);

 char *VAR_15 = FUNC_2 (VAR_1);
 char *VAR_16 = FUNC_2 (VAR_2);
 char *VAR_17 = FUNC_2 (VAR_0);
 char *VAR_18 = FUNC_2 (VAR_3);
 char *VAR_19 = FUNC_2 (VAR_4);
 char *VAR_20 = FUNC_3 (VAR_7);
 char *VAR_21 = FUNC_3 (VAR_9);
 struct radare2_var_t {
  const char *name;
  const char *value;
 } VAR_22[] = {
  { "R2_PREFIX", VAR_8 },
  { "R2_MAGICPATH", VAR_21 },
  { "R2_PREFIX", VAR_8 },
  { "R2_INCDIR", VAR_13 },
  { "R2_LIBDIR", VAR_14 },
  { "R2_LIBEXT", VAR_10 },
  { "R2_RCONFIGHOME", VAR_15 },
  { "R2_RDATAHOME", VAR_16 },
  { "R2_RCACHEHOME", VAR_17 },
  { "R2_LIBR_PLUGINS", VAR_20 },
  { "R2_USER_PLUGINS", VAR_18 },
  { "R2_USER_ZIGNS", VAR_19 },
  { ((void*)0), ((void*)0) }
 };
 int VAR_23 = 0;
 if (VAR_11 && FUNC_6 (VAR_11, "R2_", 3)) {
  VAR_23 = 3;
 }
 if (VAR_11) {
  while (VAR_22[VAR_12].name) {
   if (!FUNC_4 (VAR_22[VAR_12].name + VAR_23, VAR_11)) {
    FUNC_1 ("%s\n", VAR_22[VAR_12].value);
    break;
   }
   VAR_12++;
  }
 } else {
  while (VAR_22[VAR_12].name) {
   FUNC_1 ("%s=%s\n", VAR_22[VAR_12].name, VAR_22[VAR_12].value);
   VAR_12++;
  }
 }
 FUNC_0 (VAR_13);
 FUNC_0 (VAR_14);
 FUNC_0 (VAR_15);
 FUNC_0 (VAR_16);
 FUNC_0 (VAR_17);
 FUNC_0 (VAR_18);
 FUNC_0 (VAR_19);
 FUNC_0 (VAR_20);
 FUNC_0 (VAR_21);
 return 0;
}
