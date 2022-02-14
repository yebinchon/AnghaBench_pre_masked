
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int member_4; int member_3; int member_2; int * member_1; int member_0; } ;
typedef int IUnknown ;
typedef int IEnumFORMATETC ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ FORMATETC ;


 int FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*,int **) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,char*,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    IBindCtx *VAR_3 = ((void*)0);
    IEnumFORMATETC *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    IUnknown *VAR_6 = ((void*)0);
    HRESULT VAR_7;

    static FORMATETC VAR_8 = {0,((void*)0),0,0,0};
    static WCHAR VAR_9[] =
        {'_','E','n','u','m','F','O','R','M','A','T','E','T','C','_',0};

    FUNC_0(0, &VAR_3);

    VAR_7 = FUNC_1(1, &VAR_8, &VAR_4);
    FUNC_9(VAR_7 == VAR_2, "CreateFormatEnumerator failed: %08x\n", VAR_7);
    if(FUNC_2(VAR_7))
        return;

    VAR_7 = FUNC_6(((void*)0), VAR_4, 0);
    FUNC_9(VAR_7 == VAR_1,
            "RegisterFormatEnumerator failed: %08x, expected E_INVALIDARG\n", VAR_7);
    VAR_7 = FUNC_6(VAR_3, ((void*)0), 0);
    FUNC_9(VAR_7 == VAR_1,
            "RegisterFormatEnumerator failed: %08x, expected E_INVALIDARG\n", VAR_7);

    VAR_7 = FUNC_6(VAR_3, VAR_4, 0);
    FUNC_9(VAR_7 == VAR_2, "RegisterFormatEnumerator failed: %08x\n", VAR_7);

    VAR_7 = FUNC_3(VAR_3, VAR_9, &VAR_6);
    FUNC_9(VAR_7 == VAR_2, "GetObjectParam failed: %08x\n", VAR_7);
    FUNC_9(VAR_6 == (IUnknown*)VAR_4, "unk != format\n");

    VAR_7 = FUNC_7(((void*)0), VAR_4);
    FUNC_9(VAR_7 == VAR_1,
            "RevokeFormatEnumerator failed: %08x, expected E_INVALIDARG\n", VAR_7);

    VAR_7 = FUNC_7(VAR_3, VAR_4);
    FUNC_9(VAR_7 == VAR_2, "RevokeFormatEnumerator failed: %08x\n", VAR_7);

    VAR_7 = FUNC_7(VAR_3, VAR_4);
    FUNC_9(VAR_7 == VAR_0, "RevokeFormatEnumerator failed: %08x, expected E_FAIL\n", VAR_7);

    VAR_7 = FUNC_3(VAR_3, VAR_9, &VAR_6);
    FUNC_9(VAR_7 == VAR_0, "GetObjectParam failed: %08x, expected E_FAIL\n", VAR_7);

    VAR_7 = FUNC_6(VAR_3, VAR_4, 0);
    FUNC_9(VAR_7 == VAR_2, "RegisterFormatEnumerator failed: %08x\n", VAR_7);

    VAR_7 = FUNC_1(1, &VAR_8, &VAR_5);
    FUNC_9(VAR_7 == VAR_2, "CreateFormatEnumerator failed: %08x\n", VAR_7);

    if(FUNC_8(VAR_7)) {
        VAR_7 = FUNC_7(VAR_3, VAR_4);
        FUNC_9(VAR_7 == VAR_2, "RevokeFormatEnumerator failed: %08x\n", VAR_7);

        FUNC_5(VAR_5);
    }

    VAR_7 = FUNC_3(VAR_3, VAR_9, &VAR_6);
    FUNC_9(VAR_7 == VAR_0, "GetObjectParam failed: %08x, expected E_FAIL\n", VAR_7);

    FUNC_5(VAR_4);

    VAR_7 = FUNC_6(VAR_3, VAR_4, 0);
    FUNC_9(VAR_7 == VAR_2, "RegisterFormatEnumerator failed: %08x\n", VAR_7);
    VAR_7 = FUNC_7(VAR_3, ((void*)0));
    FUNC_9(VAR_7 == VAR_2, "RevokeFormatEnumerator failed: %08x\n", VAR_7);
    VAR_7 = FUNC_3(VAR_3, VAR_9, &VAR_6);
    FUNC_9(VAR_7 == VAR_0, "GetObjectParam failed: %08x, expected E_FAIL\n", VAR_7);

    FUNC_5(VAR_4);
    FUNC_4(VAR_3);
}
