
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*,char const*,int ) ;
 int FUNC_2 (int *,char*,...) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(REgg *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3) {
 int VAR_4, VAR_5 = 0;
 VAR_5 = FUNC_4 (VAR_2) + 1;
 VAR_4 = (VAR_5 % 4);
 if (VAR_4) {
  VAR_4 = 4 - VAR_4;
 }
 VAR_5 += VAR_4 - 4;
 FUNC_2 (VAR_0, "  add pc, %d\n", (VAR_5));



 FUNC_2 (VAR_0, ".string \"%s\"\n", VAR_2 = FUNC_3 (VAR_2));
 FUNC_0 ((char *) VAR_2);
 if (VAR_4) {
  FUNC_2 (VAR_0, ".fill %d, 1, 0\n", (VAR_4));
 }
 FUNC_2 (VAR_0, "  sub r0, pc, %d\n", VAR_5 + 12);
 {
  char VAR_6[32], *VAR_7 = FUNC_1 (VAR_0, VAR_6, VAR_1, 0);

  FUNC_2 (VAR_0, "  str r0, [%s]\n", VAR_7);
  FUNC_0 (VAR_7);
 }
}
