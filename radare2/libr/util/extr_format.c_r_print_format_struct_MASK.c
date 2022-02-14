
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int namefmt ;
struct TYPE_5__ {int (* cb_printf ) (char*,char const*) ;int sdb_types; int formats; } ;
typedef TYPE_1__ RPrint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*,int ,int const*,int,char const*,int,char const*,char*) ;
 int FUNC_2 (TYPE_1__*,char const*,int,int ) ;
 char* FUNC_3 (int ,char const*) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static int FUNC_9(RPrint* VAR_5, ut64 VAR_6, const ut8* VAR_7, int VAR_8, const char *VAR_9,
  int VAR_10, int VAR_11, const char *VAR_12, char *VAR_13, int VAR_14) {
 const char *VAR_15;
 char VAR_16[128];
 VAR_10++;
 if ((VAR_10 % VAR_4) > VAR_1 || (VAR_10 % VAR_3)/VAR_4 > VAR_1) {
  FUNC_0 ("Too much nested struct, recursion too deep...\n");
  return 0;
 }
 if (VAR_14) {
  VAR_15 = VAR_9;
 } else {
  VAR_15 = FUNC_4 (VAR_5->formats, VAR_9, ((void*)0));
  if (!VAR_15) {
   VAR_15 = FUNC_3 (VAR_5->sdb_types, VAR_9);
  }
 }
 if (!VAR_15 || !*VAR_15) {
  FUNC_0 ("Undefined struct '%s'.\n", VAR_9);
  return 0;
 }
 if (VAR_0 && !VAR_2) {
  FUNC_5 (VAR_16, sizeof (VAR_16), "%%%ds", 10+6*VAR_10%VAR_4);
  if (VAR_15[0] == '0') {
   VAR_5->cb_printf (VAR_16, "union");
  } else {
   VAR_5->cb_printf (VAR_16, "struct");
  }
  VAR_5->cb_printf ("<%s>\n", VAR_9);
 }
 FUNC_1 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_15, VAR_11, VAR_12, VAR_13);
 return FUNC_2 (VAR_5, VAR_15, VAR_11, 0);
}
