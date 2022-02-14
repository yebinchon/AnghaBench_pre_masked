
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {size_t newlen; int flags; int * url; int newurl; int res; } ;
typedef int HRESULT ;
typedef size_t DWORD ;
typedef int CHAR ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int,int *,size_t) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int *,int,int *,int,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int,char*,size_t,...) ;
 int FUNC_7 (int *,int *,size_t*,int ) ;
 int FUNC_8 (int *,int *,size_t*,int ) ;
 int VAR_5 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    CHAR VAR_6[VAR_4];
    WCHAR VAR_7[VAR_4];
    WCHAR VAR_8[VAR_4];
    HRESULT VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;

    if (!&FUNC_7) {
        FUNC_9("UrlApplySchemeA not found\n");
        return;
    }

    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
        VAR_10 = VAR_4;
        FUNC_4(VAR_6, VAR_5);
        VAR_9 = FUNC_7(VAR_3[VAR_11].url, VAR_6, &VAR_10, VAR_3[VAR_11].flags);
        FUNC_6( VAR_9 == VAR_3[VAR_11].res,
            "#%dA: got HRESULT 0x%x (expected 0x%x)\n", VAR_11, VAR_9, VAR_3[VAR_11].res);

        FUNC_6( VAR_10 == VAR_3[VAR_11].newlen,
            "#%dA: got len %d (expected %d)\n", VAR_11, VAR_10, VAR_3[VAR_11].newlen);

        FUNC_6( !FUNC_3(VAR_6, VAR_3[VAR_11].newurl),
            "#%dA: got '%s' (expected '%s')\n", VAR_11, VAR_6, VAR_3[VAR_11].newurl);


        VAR_10 = VAR_4;
        FUNC_4(VAR_6, VAR_5);
        FUNC_1(VAR_0, 0, VAR_6, -1, VAR_8, VAR_10);
        FUNC_1(VAR_0, 0, VAR_3[VAR_11].url, -1, VAR_7, VAR_10);

        VAR_9 = FUNC_8(VAR_7, VAR_8, &VAR_10, VAR_3[VAR_11].flags);
        FUNC_2(VAR_0, 0, VAR_8, -1, VAR_6, VAR_4, ((void*)0), ((void*)0));
        FUNC_6( VAR_9 == VAR_3[VAR_11].res,
            "#%dW: got HRESULT 0x%x (expected 0x%x)\n", VAR_11, VAR_9, VAR_3[VAR_11].res);

        FUNC_6( VAR_10 == VAR_3[VAR_11].newlen,
            "#%dW: got len %d (expected %d)\n", VAR_11, VAR_10, VAR_3[VAR_11].newlen);

        FUNC_6( !FUNC_3(VAR_6, VAR_3[VAR_11].newurl),
            "#%dW: got '%s' (expected '%s')\n", VAR_11, VAR_6, VAR_3[VAR_11].newurl);

    }


    FUNC_4(VAR_6, VAR_5);
    VAR_10 = FUNC_5(VAR_3[0].newurl);
    VAR_9 = FUNC_7(VAR_3[0].url, VAR_6, &VAR_10, VAR_3[0].flags);
    FUNC_6(VAR_9 == VAR_2, "got HRESULT 0x%x (expected E_POINTER)\n", VAR_9);

    VAR_11 = FUNC_5(VAR_3[0].newurl)+1;
    FUNC_6(VAR_10 == VAR_11, "got len %d (expected %d)\n", VAR_10, VAR_11);
    FUNC_6(!FUNC_3(VAR_6, VAR_5), "got '%s' (expected '%s')\n", VAR_6, VAR_5);


    FUNC_4(VAR_6, VAR_5);
    VAR_10 = VAR_4;
    VAR_9 = FUNC_7(((void*)0), VAR_6, &VAR_10, VAR_3[0].flags);
    FUNC_6(VAR_9 == VAR_1, "got HRESULT 0x%x (expected E_INVALIDARG)\n", VAR_9);
    FUNC_6(VAR_10 == VAR_4, "got len %d\n", VAR_10);
    FUNC_6(!FUNC_3(VAR_6, VAR_5), "got '%s' (expected '%s')\n", VAR_6, VAR_5);

    VAR_10 = VAR_4;
    VAR_9 = FUNC_7(VAR_3[0].url, ((void*)0), &VAR_10, VAR_3[0].flags);
    FUNC_6(VAR_9 == VAR_1, "got HRESULT 0x%x (expected E_INVALIDARG)\n", VAR_9);
    FUNC_6(VAR_10 == VAR_4, "got len %d\n", VAR_10);

    FUNC_4(VAR_6, VAR_5);
    VAR_9 = FUNC_7(VAR_3[0].url, VAR_6, ((void*)0), VAR_3[0].flags);
    FUNC_6(VAR_9 == VAR_1, "got HRESULT 0x%x (expected E_INVALIDARG)\n", VAR_9);
    FUNC_6(!FUNC_3(VAR_6, VAR_5), "got '%s' (expected '%s')\n", VAR_6, VAR_5);

}
