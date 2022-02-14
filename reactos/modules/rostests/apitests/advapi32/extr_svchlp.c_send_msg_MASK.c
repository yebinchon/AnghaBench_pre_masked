
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int DWORD ;


 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 int FUNC_1 (int ,char*,scalar_t__,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3(const char *VAR_1, const char *VAR_2)
{
    DWORD VAR_3 = 0;
    char VAR_4[512];

    FUNC_0(VAR_4, sizeof(VAR_4), "%s:%s", VAR_1, VAR_2);
    FUNC_1(VAR_0, VAR_4, FUNC_2(VAR_4)+1, &VAR_3, ((void*)0));
}
