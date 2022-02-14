
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int,int *,int ,char*) ;

__attribute__((used)) static void FUNC_3(BOOL VAR_3, int VAR_4)
{
    char VAR_5[VAR_0];
    HRESULT VAR_6;

    if (!&FUNC_2) return;

    VAR_6 = FUNC_2(((void*)0), VAR_4, ((void*)0), VAR_1, VAR_5);
    FUNC_1(VAR_6 == VAR_2 || VAR_3,
     "SHGetFolderPathA(NULL, %s, NULL, SHGFP_TYPE_CURRENT, path) failed: 0x%08x\n", FUNC_0(VAR_4), VAR_6);
}
