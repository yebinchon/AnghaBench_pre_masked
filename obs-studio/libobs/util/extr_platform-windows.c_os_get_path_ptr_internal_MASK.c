
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct dstr {char* array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int ,int *) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (int *,int ,char**) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 wchar_t VAR_5[VAR_0];
 struct dstr VAR_6;

 FUNC_0(((void*)0), VAR_3, ((void*)0), VAR_1, VAR_5);

 FUNC_3(VAR_5, 0, &VAR_4);
 FUNC_2(&VAR_6, VAR_4);
 FUNC_1(&VAR_6, "\\");
 FUNC_1(&VAR_6, VAR_2);
 return VAR_6.array;
}
