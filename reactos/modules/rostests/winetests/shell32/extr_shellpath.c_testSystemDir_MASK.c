
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int systemDirx86 ;
typedef int systemDir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,char*,char*) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int *,char*,int ,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    char VAR_4[VAR_3], VAR_5[VAR_3], VAR_6[VAR_3];

    if (!&FUNC_6) return;

    FUNC_0(VAR_5, sizeof(VAR_5));
    FUNC_3(VAR_5);
    if (FUNC_6(((void*)0), VAR_4, VAR_0, VAR_2))
    {
        FUNC_3(VAR_4);
        FUNC_4(!FUNC_2(VAR_5, VAR_4),
         "GetSystemDirectory returns %s SHGetSpecialFolderPath returns %s\n",
         VAR_5, VAR_4);
    }

    if (!&FUNC_5 || !FUNC_5(VAR_6, sizeof(VAR_6)))
        FUNC_0(VAR_6, sizeof(VAR_6));
    FUNC_3(VAR_6);
    if (FUNC_6(((void*)0), VAR_4, VAR_1, VAR_2))
    {
        FUNC_3(VAR_4);
        FUNC_4(!FUNC_2(VAR_6, VAR_4) || FUNC_1(!FUNC_2(VAR_5, VAR_4)),
         "GetSystemDirectory returns %s SHGetSpecialFolderPath returns %s\n",
         VAR_5, VAR_4);
    }
}
