
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*,char*) ;
 char* FUNC_3 (char*) ;

char *FUNC_4(const char *VAR_0)
{
 char *VAR_1 = FUNC_3("HOME");
 if (VAR_1 == ((void*)0))
  FUNC_0("Could not get $HOME\n");

 struct dstr VAR_2;
 FUNC_2(&VAR_2, VAR_1);
 FUNC_1(&VAR_2, "/.");
 FUNC_1(&VAR_2, VAR_0);
 return VAR_2.array;

}
