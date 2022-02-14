
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; int member_0; } ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (struct dstr*,char const*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, const char *VAR_1)
{
 struct dstr VAR_2 = {0};
 bool VAR_3 = 0;

 FUNC_1(&VAR_2, VAR_1, VAR_0);

 VAR_3 = FUNC_2(VAR_2.array);

 if (!VAR_3 && FUNC_0(VAR_0, "lib", 3) == 0)
  FUNC_1(&VAR_2, VAR_1, VAR_0 + 3);

 return VAR_2.array;
}
