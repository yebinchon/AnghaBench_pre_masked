
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
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (char*,int) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10 (void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 int VAR_3 = 5;
 char *VAR_4 = FUNC_9 (VAR_1);
 char *VAR_5 = FUNC_8 (VAR_4, ' ');
 char *VAR_6, *VAR_7;
 if (VAR_5) {
  VAR_5 = (char *)FUNC_6 (VAR_5 + 1);
  VAR_7 = FUNC_8 (VAR_5, ' ');
  if (VAR_7) {
   *VAR_7 = 0;
   VAR_6 = (char *)FUNC_6 (VAR_7 + 1);
   VAR_3 = FUNC_0 (VAR_5);
   VAR_5 = VAR_6;
  }
 }
 switch (*VAR_4) {
 case '?':
  FUNC_1 ("Usage: head [file] # to list first n lines in file\n");
  break;
 default:
  if (!VAR_5) {
   VAR_5 = "";
  }
  if (FUNC_5 (VAR_2->fs, VAR_5)) {
   FUNC_4 (VAR_2, "md %s", VAR_5);
  } else {
   char *VAR_8 = FUNC_7 (VAR_5, VAR_3);
   if (VAR_8) {
    FUNC_3 (VAR_8);
    FUNC_2 (VAR_8);
   }
  }
  break;
 }
 FUNC_2 (VAR_4);
 return 0;
}
