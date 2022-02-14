
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; int member_0; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char) ;
 int FUNC_2 (struct dstr*,char const*) ;
 char FUNC_3 (struct dstr*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0, const char *VAR_1)
{
 struct dstr VAR_2 = {0};

 FUNC_2(&VAR_2, VAR_0);

 if (VAR_2.array && FUNC_3(&VAR_2) != '/' && FUNC_3(&VAR_2) != '\\')
  FUNC_1(&VAR_2, '/');

 FUNC_0(&VAR_2, VAR_1);
 return VAR_2.array;
}
