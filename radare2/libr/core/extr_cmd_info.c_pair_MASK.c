
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ws ;


 int VAR_0 ;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (char*,char const*,char*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const char *VAR_2) {
 char VAR_3[16];
 int VAR_4 = FUNC_2 (VAR_1);
 if (!VAR_2) {
  return;
 }
 FUNC_0 (VAR_3, ' ', sizeof (VAR_3));
 VAR_4 = VAR_0 - VAR_4;
 if (VAR_4 < 0) {
  VAR_4 = 0;
 }
 VAR_3[VAR_4] = 0;
 FUNC_1 ("%s%s%s\n", VAR_1, VAR_3, VAR_2);
}
