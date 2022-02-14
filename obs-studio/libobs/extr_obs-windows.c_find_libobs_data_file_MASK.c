
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; } ;


 scalar_t__ FUNC_0 (char const*,char*,struct dstr*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*) ;

char *FUNC_3(const char *VAR_0)
{
 struct dstr VAR_1;
 FUNC_2(&VAR_1);

 if (FUNC_0(VAR_0, "data/libobs/", &VAR_1))
  return VAR_1.array;

 if (FUNC_0(VAR_0, "../../data/libobs/", &VAR_1))
  return VAR_1.array;

 FUNC_1(&VAR_1);
 return ((void*)0);
}
