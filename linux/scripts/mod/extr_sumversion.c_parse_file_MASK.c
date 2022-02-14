
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md4_ctx {int dummy; } ;


 int FUNC_0 (char,struct md4_ctx*) ;
 char* FUNC_1 (char const*,unsigned long*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,unsigned long) ;
 scalar_t__ FUNC_4 (char*,unsigned long,struct md4_ctx*) ;
 int FUNC_5 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, struct md4_ctx *VAR_1)
{
 char *VAR_2;
 unsigned long VAR_3, VAR_4;

 VAR_2 = FUNC_1(VAR_0, &VAR_4);
 if (!VAR_2)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {

  if (VAR_2[VAR_3] == '\\' && (VAR_3+1 < VAR_4) && VAR_2[VAR_3+1] == '\n') {
   VAR_3++;
   continue;
  }


  if (FUNC_2(VAR_2[VAR_3]))
   continue;


  if (VAR_2[VAR_3] == '"') {
   VAR_3 += FUNC_4(VAR_2+VAR_3, VAR_4 - VAR_3, VAR_1);
   continue;
  }


  if (VAR_2[VAR_3] == '/' && VAR_2[VAR_3+1] == '*') {
   VAR_3 += FUNC_3(VAR_2+VAR_3, VAR_4 - VAR_3);
   continue;
  }

  FUNC_0(VAR_2[VAR_3], VAR_1);
 }
 FUNC_5(VAR_2, VAR_4);
 return 1;
}
