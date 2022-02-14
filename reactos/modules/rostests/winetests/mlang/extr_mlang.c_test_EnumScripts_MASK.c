
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
typedef int UINT ;
struct TYPE_7__ {int uiCodePage; int wszProportionalFont; int wszFixedWidthFont; int wszDescription; int ScriptId; } ;
typedef TYPE_1__ SCRIPTINFO ;
typedef int IMultiLanguage2 ;
typedef int IEnumScript ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int,TYPE_1__*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int ,int **) ;
 int FUNC_8 (int *,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int,char*,int,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(IMultiLanguage2 *VAR_5, DWORD VAR_6)
{
    IEnumScript *VAR_7 = ((void*)0);
    SCRIPTINFO *VAR_8;
    SCRIPTINFO VAR_9;
    HRESULT VAR_10;
    ULONG VAR_11, VAR_12;
    UINT VAR_13;

    VAR_13 = 0;
    VAR_10 = FUNC_8(VAR_5, &VAR_13);
    FUNC_9(VAR_10 == VAR_3 && VAR_13 != 0, "IMultiLanguage2_GetNumberOfScripts: expected S_OK/!0, got %08x/%u\n", VAR_10, VAR_13);

    FUNC_11("total mlang supported scripts %u\n", VAR_13);

    VAR_10 = FUNC_7(VAR_5, VAR_6, VAR_1, &VAR_7);
    FUNC_9(VAR_10 == VAR_3 && VAR_7, "IMultiLanguage2_EnumScripts: expected S_OK/!NULL, got %08x/%p\n", VAR_10, VAR_7);

    VAR_10 = FUNC_5(VAR_7);
    FUNC_9(VAR_10 == VAR_3, "IEnumScript_Reset: expected S_OK, got %08x\n", VAR_10);
    VAR_12 = 65536;
    VAR_10 = FUNC_3(VAR_7, 0, ((void*)0), &VAR_12);
    FUNC_9(VAR_12 == 65536 && VAR_10 == VAR_0, "IEnumScript_Next: expected 65536/E_FAIL, got %u/%08x\n", VAR_12, VAR_10);
    VAR_10 = FUNC_3(VAR_7, 0, ((void*)0), ((void*)0));
    FUNC_9(VAR_10 == VAR_0, "IEnumScript_Next: expected E_FAIL, got %08x\n", VAR_10);

    VAR_8 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_8) * VAR_13 * 2);

    VAR_12 = VAR_13 * 2;
    VAR_10 = FUNC_3(VAR_7, 0, VAR_8, &VAR_12);
    FUNC_9(VAR_10 == VAR_2 && VAR_12 == 0, "IEnumScript_Next: expected S_FALSE/0, got %08x/%u\n", VAR_10, VAR_12);

    VAR_12 = VAR_13 * 2;
    VAR_10 = FUNC_3(VAR_7, VAR_12, VAR_8, &VAR_12);
    FUNC_9(VAR_10 == VAR_3 && VAR_12 != 0, "IEnumScript_Next: expected S_OK, got %08x/%u\n", VAR_10, VAR_12);

    FUNC_11("flags %08x, enumerated scripts %u\n", VAR_6, VAR_12);

    if (!VAR_6)
    {
 FUNC_9(VAR_12 == VAR_13, "IEnumScript_Next: expected %u, got %u\n", VAR_13, VAR_12);
    }

    VAR_13 = VAR_12;

    for (VAR_11 = 0; VAR_4 && VAR_11 < VAR_12; VAR_11++)
    {
    }


    VAR_12 = 1;
    VAR_10 = FUNC_3(VAR_7, 1, &VAR_9, &VAR_12);
    FUNC_9(VAR_10 == VAR_2 && VAR_12 == 0, "IEnumScript_Next: expected S_FALSE/0, got %08x/%u\n", VAR_10, VAR_12);

    VAR_10 = FUNC_5(VAR_7);
    FUNC_9(VAR_10 == VAR_3, "IEnumScript_Reset: expected S_OK, got %08x\n", VAR_10);
    VAR_12 = 0;
    VAR_10 = FUNC_3(VAR_7, 1, &VAR_9, &VAR_12);
    FUNC_9(VAR_12 == 1 && VAR_10 == VAR_3, "IEnumScript_Next: expected 1/S_OK, got %u/%08x\n", VAR_12, VAR_10);
    FUNC_10(VAR_8, &VAR_9);

    if (0)
    {



    VAR_10 = FUNC_6(VAR_7, 1);
    FUNC_9(VAR_10 == VAR_3, "IEnumScript_Skip: expected S_OK, got %08x\n", VAR_10);
    }
    for (VAR_11 = 0; VAR_11 < VAR_13 - 1; VAR_11++)
    {
        VAR_12 = 0;
        VAR_10 = FUNC_3(VAR_7, 1, &VAR_9, &VAR_12);
        FUNC_9(VAR_12 == 1 && VAR_10 == VAR_3, "IEnumScript_Next: expected 1/S_OK, got %u/%08x\n", VAR_12, VAR_10);
        FUNC_10(&VAR_8[VAR_11 + 1], &VAR_9);
    }

    FUNC_2(FUNC_0(), 0, VAR_8);
    FUNC_4(VAR_7);
}
