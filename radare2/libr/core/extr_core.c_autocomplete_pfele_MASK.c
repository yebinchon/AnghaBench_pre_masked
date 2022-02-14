
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* print; } ;
struct TYPE_4__ {int formats; } ;
typedef int RLineCompletion ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char*,char*,char const*) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,char*,int *) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_9 (RCore *VAR_0, RLineCompletion *VAR_1, char *VAR_2, char *VAR_3, int VAR_4, char *VAR_5) {
 int VAR_6, VAR_7 = 0;
 int VAR_8 = FUNC_7 (VAR_5);
 char* VAR_9 = FUNC_5 (VAR_0->print->formats, VAR_2, ((void*)0));
 if (VAR_9) {
  int VAR_10 = FUNC_4 (VAR_9);
  if (VAR_10 > 1) {
   for (VAR_6 = 1; VAR_6 < VAR_10; VAR_6++) {
    const char *VAR_11 = FUNC_3 (VAR_9, VAR_6);
    char *VAR_12 = FUNC_6 (VAR_11, '(');
    char *VAR_13 = FUNC_6 (VAR_11, ')');

    if (VAR_12 && VAR_13) {
     VAR_11 = VAR_12 + 1;
     *VAR_13 = '\0';
    }
    if (!VAR_8 || !FUNC_8 (VAR_5, VAR_11, VAR_8)) {
     char *VAR_14 = FUNC_2 ("pf%s.%s.%s", VAR_3, VAR_2, VAR_11);
     FUNC_1 (VAR_1, VAR_14);
     FUNC_0 (VAR_14);
    }
   }
  }
 }
 FUNC_0 (VAR_9);
 return VAR_7;
}
