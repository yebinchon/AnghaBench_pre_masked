
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef int * HRESULT ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int,int **) ;
 int * VAR_5 ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    LPWSTR VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_3, &VAR_6);
    FUNC_2(VAR_7 == VAR_5, "HlinkGetSpecialReference(HLSR_HOME) failed: %08x\n", VAR_7);
    FUNC_2(VAR_6 != ((void*)0), "ref == NULL\n");
    FUNC_0(VAR_6);

    VAR_7 = FUNC_1(VAR_4, &VAR_6);
    FUNC_2(VAR_7 == VAR_5, "HlinkGetSpecialReference(HLSR_SEARCHPAGE) failed: %08x\n", VAR_7);
    FUNC_2(VAR_6 != ((void*)0), "ref == NULL\n");
    FUNC_0(VAR_6);

    VAR_6 = (void*)0xdeadbeef;
    VAR_7 = FUNC_1(VAR_2, &VAR_6);
    FUNC_2(VAR_7 == VAR_1, "HlinkGetSpecialReference(HLSR_HISTORYFOLDER) failed: %08x\n", VAR_7);
    FUNC_2(VAR_6 == ((void*)0), "ref=%p\n", VAR_6);

    VAR_6 = (void*)0xdeadbeef;
    VAR_7 = FUNC_1(4, &VAR_6);
    FUNC_2(VAR_7 == VAR_0, "HlinkGetSpecialReference(HLSR_HISTORYFOLDER) failed: %08x\n", VAR_7);
    FUNC_2(VAR_6 == ((void*)0), "ref=%p\n", VAR_6);
}
