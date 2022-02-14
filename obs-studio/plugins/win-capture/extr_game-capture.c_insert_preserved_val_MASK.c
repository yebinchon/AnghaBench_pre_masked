
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; int member_0; } ;
typedef int obs_property_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char**,char**,char**) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,char*,char*,char*) ;
 int FUNC_4 (int *,int,int ,char const*) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static void FUNC_6(obs_property_t *VAR_0, const char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 struct dstr VAR_5 = {0};

 FUNC_1(VAR_1, &VAR_2, &VAR_3, &VAR_4);

 FUNC_3(&VAR_5, "[%s]: %s", VAR_4, VAR_3);
 FUNC_4(VAR_0, 1, VAR_5.array, VAR_1);
 FUNC_5(VAR_0, 1, 1);

 FUNC_2(&VAR_5);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
}
