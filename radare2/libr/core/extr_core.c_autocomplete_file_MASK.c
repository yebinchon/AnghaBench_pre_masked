
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RLineCompletion ;


 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static void FUNC_4(RLineCompletion *VAR_0, const char *VAR_1) {
 FUNC_1 (VAR_1);
 char *VAR_2 = FUNC_3 (VAR_1, '>');

 if (VAR_2) {
  VAR_1 = FUNC_2 (VAR_2 + 1);
 }
 if (VAR_1 && !*VAR_1) {
  FUNC_0 (VAR_0, VAR_1, "./");
 } else {
  FUNC_0 (VAR_0, VAR_1, VAR_1);
 }

}
