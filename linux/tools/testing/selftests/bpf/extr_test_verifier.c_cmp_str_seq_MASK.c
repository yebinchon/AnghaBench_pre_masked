
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int needle ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_0, const char *VAR_1)
{
 char VAR_2[80];
 const char *VAR_3, *VAR_4;
 int VAR_5;

 do {
  VAR_3 = FUNC_1(VAR_1, '\t');
  if (!VAR_3)
   VAR_3 = VAR_1 + FUNC_2(VAR_1);

  VAR_5 = VAR_3 - VAR_1;
  if (VAR_5 >= sizeof(VAR_2) || !VAR_5) {
   FUNC_0("FAIL\nTestcase bug\n");
   return 0;
  }
  FUNC_3(VAR_2, VAR_1, VAR_5);
  VAR_2[VAR_5] = 0;
  VAR_4 = FUNC_4(VAR_0, VAR_2);
  if (!VAR_4) {
   FUNC_0("FAIL\nUnexpected verifier log in successful load!\n"
          "EXP: %s\nRES:\n", VAR_2);
   return 0;
  }
  VAR_0 = VAR_4 + VAR_5;
  VAR_1 = VAR_3 + 1;
 } while (*VAR_3);
 return 1;
}
