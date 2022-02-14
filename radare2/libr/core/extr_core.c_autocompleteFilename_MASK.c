
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef int RLineCompletion ;
typedef TYPE_1__ RLineBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,int ,char const*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static void FUNC_8(RLineCompletion *VAR_1, RLineBuffer *VAR_2, char **VAR_3, int VAR_4) {
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7 = 0, VAR_8 = 0;
 char *VAR_9 = FUNC_7 (VAR_2->data, '>');
 if (VAR_9) {
  VAR_5 = FUNC_2 (VAR_9 + 1);
 } else {
  VAR_5 = FUNC_2 (VAR_2->data);
 }
 if (!VAR_5) {
  goto out;
 }

 VAR_7 = FUNC_6 (VAR_5);
 if (VAR_7 < VAR_4) {
  goto out;
 }

 VAR_6 = FUNC_2 (FUNC_5 (VAR_5, VAR_4));
 if (!VAR_6) {
  goto out;
 }
 const char *VAR_10 = FUNC_4 (VAR_6);

 FUNC_0 (VAR_1, VAR_2->data, VAR_10);

 if (VAR_6[0] == '/' || VAR_6[0] == '.' || !VAR_3) {
  goto out;
 }

 for (VAR_8 = 0; VAR_3[VAR_8]; VAR_8 ++) {
  char *VAR_11 = FUNC_3 ("%s%s%s", VAR_3[VAR_8], VAR_0, VAR_10);
  if (!VAR_11) {
   break;
  }
  FUNC_0 (VAR_1, VAR_2->data, VAR_11);
 }
out:
 FUNC_1 (VAR_5);
 FUNC_1 (VAR_6);
}
