
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*,char const*,char const*,char*,char*) ;
 scalar_t__ FUNC_3 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_2, const char *VAR_3)
{
    char VAR_4[VAR_1];

    if (!&FUNC_3) return;

    if (FUNC_3(((void*)0), VAR_4, VAR_2, VAR_0))
    {
        char *VAR_5 = FUNC_0(VAR_3);

        FUNC_2(!VAR_5 || !FUNC_1(VAR_5, VAR_4),
         "%%%s%% does not match SHGetSpecialFolderPath:\n"
         "%%%s%% is %s\nSHGetSpecialFolderPath returns %s\n",
         VAR_3, VAR_3, VAR_5, VAR_4);
    }
}
