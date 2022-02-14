
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct dstr {char* array; } ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*,char*,char*) ;
 int FUNC_4 (struct dstr*,size_t) ;
 int FUNC_5 (int *,int ,char**) ;
 char* FUNC_6 (char*,char) ;

char *FUNC_7(const char *VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 wchar_t VAR_4[VAR_0];
 struct dstr VAR_5;

 FUNC_0(((void*)0), VAR_4, VAR_0);

 FUNC_5(VAR_4, 0, &VAR_2);
 FUNC_2(&VAR_5, VAR_2);
 FUNC_3(&VAR_5, "\\", "/");
 VAR_3 = FUNC_6(VAR_5.array, '/');
 if (VAR_3) {
  size_t VAR_6 = VAR_3 - VAR_5.array + 1;
  FUNC_4(&VAR_5, VAR_6);
 }

 if (VAR_1 && *VAR_1) {
  FUNC_1(&VAR_5, VAR_1);
 }

 return VAR_5.array;
}
