
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int buf ;
struct TYPE_8__ {scalar_t__ secur_hres; scalar_t__ path_hres; scalar_t__ domain_hres; scalar_t__ rootdocument_hres; scalar_t__ rootdocument; int url; scalar_t__ domain; scalar_t__ schema; scalar_t__ path; scalar_t__ encoded_url; } ;
typedef TYPE_1__ WCHAR ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (int,char*,int,...) ;
 scalar_t__ FUNC_6 (int ,int ,int ,TYPE_1__*,int,scalar_t__*,int ) ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_11;
    DWORD VAR_12;
    int VAR_13;

    static WCHAR VAR_14[4096];

    FUNC_4(VAR_14, 0xf0, sizeof(VAR_14));
    VAR_11 = FUNC_6(VAR_8[0].url, VAR_5, 0, VAR_14,
            3, &VAR_12, 0);
    FUNC_5(VAR_11 == VAR_0, "schema failed: %08x, expected E_POINTER\n", VAR_11);

    for(VAR_13 = 0; VAR_13 < FUNC_0(VAR_8); VAR_13++) {
        FUNC_4(VAR_14, 0xf0, sizeof(VAR_14));
        VAR_11 = FUNC_6(VAR_8[VAR_13].url, VAR_6, 0, VAR_14,
                FUNC_0(VAR_14), &VAR_12, 0);
        FUNC_5(VAR_11 == VAR_8[VAR_13].secur_hres, "[%d] security url failed: %08x, expected %08x\n",
                VAR_13, VAR_11, VAR_8[VAR_13].secur_hres);

        FUNC_4(VAR_14, 0xf0, sizeof(VAR_14));
        VAR_11 = FUNC_6(VAR_8[VAR_13].url, VAR_2, 0, VAR_14,
                FUNC_0(VAR_14), &VAR_12, 0);
        FUNC_5(VAR_11 == VAR_7, "[%d] encoding failed: %08x\n", VAR_13, VAR_11);
        FUNC_5(VAR_12 == FUNC_2(VAR_8[VAR_13].encoded_url), "[%d] wrong size\n", VAR_13);
        FUNC_5(!FUNC_1(VAR_8[VAR_13].encoded_url, VAR_14), "[%d] wrong encoded url\n", VAR_13);

        FUNC_4(VAR_14, 0xf0, sizeof(VAR_14));
        VAR_11 = FUNC_6(VAR_8[VAR_13].url, VAR_3, 0, VAR_14,
                FUNC_0(VAR_14), &VAR_12, 0);
        FUNC_5(VAR_11 == VAR_8[VAR_13].path_hres, "[%d] path failed: %08x, expected %08x\n",
                VAR_13, VAR_11, VAR_8[VAR_13].path_hres);
        if(VAR_8[VAR_13].path) {
            FUNC_5(VAR_12 == FUNC_2(VAR_8[VAR_13].path), "[%d] wrong size\n", VAR_13);
            FUNC_5(!FUNC_1(VAR_8[VAR_13].path, VAR_14), "[%d] wrong path\n", VAR_13);
        }

        FUNC_4(VAR_14, 0xf0, sizeof(VAR_14));
        VAR_11 = FUNC_6(VAR_8[VAR_13].url, VAR_5, 0, VAR_14,
                FUNC_0(VAR_14), &VAR_12, 0);
        FUNC_5(VAR_11 == VAR_7, "[%d] schema failed: %08x\n", VAR_13, VAR_11);
        FUNC_5(VAR_12 == FUNC_2(VAR_8[VAR_13].schema), "[%d] wrong size\n", VAR_13);
        FUNC_5(!FUNC_1(VAR_8[VAR_13].schema, VAR_14), "[%d] wrong schema\n", VAR_13);

        if(FUNC_3(VAR_8[VAR_13].url, VAR_10, 3*sizeof(WCHAR))
                && FUNC_3(VAR_8[VAR_13].url, VAR_9, 5*sizeof(WCHAR))) {
            FUNC_4(VAR_14, 0xf0, sizeof(VAR_14));
            VAR_11 = FUNC_6(VAR_8[VAR_13].url, VAR_1, 0, VAR_14,
                    FUNC_0(VAR_14), &VAR_12, 0);
            FUNC_5(VAR_11 == VAR_8[VAR_13].domain_hres, "[%d] domain failed: %08x\n", VAR_13, VAR_11);
            if(VAR_8[VAR_13].domain)
                FUNC_5(!FUNC_1(VAR_8[VAR_13].domain, VAR_14), "[%d] wrong domain, received %s\n", VAR_13, FUNC_7(VAR_14));
        }

        FUNC_4(VAR_14, 0xf0, sizeof(VAR_14));
        VAR_11 = FUNC_6(VAR_8[VAR_13].url, VAR_4, 0, VAR_14,
                FUNC_0(VAR_14), &VAR_12, 0);
        FUNC_5(VAR_11 == VAR_8[VAR_13].rootdocument_hres, "[%d] rootdocument failed: %08x\n", VAR_13, VAR_11);
        if(VAR_8[VAR_13].rootdocument)
            FUNC_5(!FUNC_1(VAR_8[VAR_13].rootdocument, VAR_14), "[%d] wrong rootdocument, received %s\n", VAR_13, FUNC_7(VAR_14));
    }
}
