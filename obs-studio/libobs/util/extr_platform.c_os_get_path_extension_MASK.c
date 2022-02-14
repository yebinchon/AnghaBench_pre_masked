
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; } ;


 int FUNC_0 (struct dstr*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*,char*,char*) ;
 char* FUNC_3 (char*,char) ;

const char *FUNC_4(const char *VAR_0)
{
 struct dstr VAR_1;
 size_t VAR_2 = 0;
 char *VAR_3;
 char *VAR_4;

 FUNC_1(&VAR_1, VAR_0);
 FUNC_2(&VAR_1, "\\", "/");

 VAR_4 = FUNC_3(VAR_1.array, '/');
 VAR_3 = FUNC_3(VAR_1.array, '.');
 if (VAR_3)
  VAR_2 = (size_t)(VAR_3 - VAR_1.array);

 FUNC_0(&VAR_1);

 if (!VAR_3 || VAR_4 > VAR_3)
  return ((void*)0);

 return VAR_0 + VAR_2;
}
