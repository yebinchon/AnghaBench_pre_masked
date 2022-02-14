
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int FontCount; int** FaceNames; } ;
struct TYPE_6__ {int* lfFaceName; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ LOGFONTW ;
typedef TYPE_2__ GFRI_ENTRY ;
typedef int Data ;
typedef size_t DWORD ;
typedef size_t BOOL ;


 size_t FUNC_0 (int ,size_t*,TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int*,int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int,char*,int,int*,int*) ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static void
FUNC_7(LPCWSTR VAR_0, const GFRI_ENTRY *VAR_1)
{
    BOOL VAR_2;
    DWORD VAR_3, VAR_4, VAR_5 = 2;
    static LOGFONTW VAR_6[100];


    VAR_4 = 0;
    VAR_2 = FUNC_0(VAR_0, &VAR_4, ((void*)0), VAR_5);
    FUNC_5(VAR_2, 1);
    FUNC_5(VAR_4, VAR_1->FontCount * sizeof(LOGFONTW));


    VAR_4 = 1024;
    VAR_2 = FUNC_0(VAR_0, &VAR_4, ((void*)0), VAR_5);
    FUNC_5(VAR_2, 0);
    FUNC_5(VAR_4, 1024);


    VAR_4 = 0;
    FUNC_1(VAR_6, sizeof(VAR_6));
    VAR_2 = FUNC_0(VAR_0, &VAR_4, VAR_6, VAR_5);
    FUNC_5(VAR_2, 1);
    FUNC_5(VAR_4, VAR_1->FontCount * sizeof(LOGFONTW));


    VAR_4 = sizeof(VAR_6);
    FUNC_1(VAR_6, sizeof(VAR_6));
    VAR_2 = FUNC_0(VAR_0, &VAR_4, VAR_6, VAR_5);
    FUNC_5(VAR_2, 1);
    FUNC_5(VAR_4, VAR_1->FontCount * sizeof(LOGFONTW));
    for (VAR_3 = 0; VAR_3 < VAR_1->FontCount; ++VAR_3)
    {
        FUNC_4(FUNC_2(VAR_6[VAR_3].lfFaceName, VAR_1->FaceNames[VAR_3]) == 0,
            "face name #%d mismatched: \"%S\" and \"%S\"\n", (int)VAR_3, VAR_6[VAR_3].lfFaceName, VAR_1->FaceNames[VAR_3]);
    }
}
