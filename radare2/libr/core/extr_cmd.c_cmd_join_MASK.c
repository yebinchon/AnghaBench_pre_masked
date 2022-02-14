
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fs; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char const*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char const*) ;
 void* FUNC_6 (char const*,char) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 char *VAR_3 = FUNC_7 (VAR_1);
 const char *VAR_4 = FUNC_6 (VAR_3, ' ');
 if (!VAR_4) {
  goto beach;
 }
 VAR_4 = FUNC_4 (VAR_4);
 char *VAR_5 = FUNC_6 (VAR_4, ' ');
 if (!VAR_5) {
  goto beach;
 }
 *VAR_5 = '\0';
 const char *VAR_6 = VAR_5+1;
 if (!VAR_6) {
  goto beach;
 }
 VAR_6 = FUNC_4 (VAR_6);
 switch (*VAR_1) {
 case '?':
  goto beach;
 default:
  if (!VAR_4) {
   VAR_4 = "";
  }
  if (!VAR_6) {
   VAR_6 = "";
  }
  if (!FUNC_3 (VAR_2->fs, VAR_4) && !FUNC_3 (VAR_2->fs, VAR_6)) {
   char *VAR_7 = FUNC_5 (VAR_4, VAR_6);
   if (VAR_7) {
    FUNC_2 (VAR_7);
    FUNC_1 (VAR_7);
   }
  }
  break;
 }
 FUNC_1 (VAR_3);
 return 0;
beach:
 FUNC_0 ("Usage: join [file1] [file2] # join the contents of the two files\n");
 FUNC_1 (VAR_3);
 return 0;
}
