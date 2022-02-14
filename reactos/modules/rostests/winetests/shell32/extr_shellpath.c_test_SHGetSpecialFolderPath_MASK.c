
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (char*,char*,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_4(BOOL VAR_3, int VAR_4)
{
    char VAR_5[VAR_1];
    BOOL VAR_6;

    if (!&FUNC_2) return;

    VAR_6 = FUNC_2(((void*)0), VAR_5, VAR_4, VAR_0);
    if (VAR_6 && VAR_2)
        FUNC_3("%s: %s\n", FUNC_0(VAR_4), VAR_5);
    FUNC_1(VAR_6 || VAR_3,
     "SHGetSpecialFolderPathA(NULL, path, %s, FALSE) failed\n",
     FUNC_0(VAR_4));
}
