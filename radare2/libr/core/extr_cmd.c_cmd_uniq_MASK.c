
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (int ,char const*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static int FUNC_8(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 const char *VAR_3 = FUNC_7 (VAR_1, ' ');
 if (VAR_3) {
  VAR_3 = FUNC_5 (VAR_3 + 1);
 }
 switch (*VAR_1) {
 case '?':
  FUNC_0 ("Usage: uniq # uniq to list unique strings in file\n");
  break;
 default:
  if (!VAR_3) {
   VAR_3 = "";
  }
  if (FUNC_4 (VAR_2->fs, VAR_3)) {
   FUNC_3 (VAR_2, "md %s", VAR_3);
  } else {
   char *VAR_4 = FUNC_6 (VAR_3);
   if (VAR_4) {
    FUNC_2 (VAR_4);
    FUNC_1 (VAR_4);
   }
  }
  break;
 }
 return 0;
}
