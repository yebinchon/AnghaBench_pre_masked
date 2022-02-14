
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {char* broken_rfc; int rfc1766; int hr; int lcid; } ;
typedef int IMultiLanguage2 ;
typedef int HRESULT ;
typedef size_t DWORD ;
typedef char CHAR ;
typedef int * BSTR ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,scalar_t__,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,int,char*,int,int *,int *) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int,char*,size_t,...) ;

__attribute__((used)) static void FUNC_10(IMultiLanguage2 *VAR_9)
{
    CHAR VAR_10[VAR_5];
    CHAR VAR_11[VAR_5 + 1];
    DWORD VAR_12;
    HRESULT VAR_13;
    BSTR VAR_14;

    for(VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); VAR_12++) {
        VAR_11[0] = '\0';

        VAR_14 = ((void*)0);
        VAR_13 = FUNC_1(VAR_9, VAR_8[VAR_12].lcid, &VAR_14);
        FUNC_9(VAR_13 == VAR_8[VAR_12].hr,
            "#%02d: HRESULT 0x%x (expected 0x%x)\n", VAR_12, VAR_13, VAR_8[VAR_12].hr);

        if (VAR_13 != VAR_7)
            continue;

        FUNC_5(VAR_0, 0, VAR_14, -1, VAR_11, sizeof(VAR_11), ((void*)0), ((void*)0));
        FUNC_2(VAR_4, VAR_3, VAR_8[VAR_12].rfc1766,
                    FUNC_8(VAR_8[VAR_12].rfc1766) + 1, VAR_10, VAR_5);


        FUNC_9( (!FUNC_7(VAR_11, VAR_10)) ||
            FUNC_6(!FUNC_7(VAR_11, VAR_8[VAR_12].broken_rfc)),
            "#%02d: got '%s' (expected '%s')\n", VAR_12, VAR_11, VAR_10);

        FUNC_4(VAR_14);
    }

    VAR_13 = FUNC_1(VAR_9, FUNC_3(VAR_2, VAR_6), ((void*)0));
    FUNC_9(VAR_13 == VAR_1, "got 0x%x (expected E_INVALIDARG)\n", VAR_13);
}
