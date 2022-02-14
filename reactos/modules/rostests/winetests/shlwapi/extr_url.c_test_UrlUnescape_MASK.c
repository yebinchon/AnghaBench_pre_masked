
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szReturnUrl ;
typedef int inplaceW ;
typedef int inplace ;
typedef float WCHAR ;
struct TYPE_3__ {char* url; char const* expect; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef char CHAR ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (float*) ;
 float* FUNC_2 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,float*,int,char*,int,int ,int ) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (float*,float*) ;
 int FUNC_6 (float*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*,char*,int*,int ) ;
 int FUNC_9 (float*,float*,int*,int ) ;
 scalar_t__ FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    CHAR VAR_6[VAR_2];
    WCHAR VAR_7[VAR_2];
    WCHAR *VAR_8, *VAR_9;
    DWORD VAR_10;
    size_t VAR_11;
    static char VAR_12[] = "file:///C:/Program%20Files";
    static char VAR_13[] = "file:///C:/Program%20Files";
    static const char VAR_14[] = "file:///C:/Program Files";
    static WCHAR VAR_15[] = {'f','i','l','e',':','/','/','/','C',':','/','P','r','o','g','r','a','m',' ','F','i','l','e','s',0};
    static WCHAR VAR_16[] ={'f','i','l','e',':','/','/','/',
                'C',':','/','P','r','o','g','r','a','m','%','2','0','F','i','l','e','s',0};
    HRESULT VAR_17;

    if (!&FUNC_8) {
        FUNC_11("UrlUnescapeA not found\n");
        return;
    }
    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
        VAR_10=VAR_2;
        VAR_17 = FUNC_8(VAR_4[VAR_11].url, VAR_6, &VAR_10, 0);
        FUNC_7(VAR_17 == VAR_3,
            "UrlUnescapeA returned 0x%x (expected S_OK) for \"%s\"\n",
            VAR_17, VAR_4[VAR_11].url);
        FUNC_7(FUNC_10(VAR_6,VAR_4[VAR_11].expect)==0, "Expected \"%s\", but got \"%s\" from \"%s\"\n", VAR_4[VAR_11].expect, VAR_6, VAR_4[VAR_11].url);

        FUNC_4(VAR_6, sizeof(VAR_6));

        VAR_17 = FUNC_8(VAR_4[VAR_11].url, VAR_6, ((void*)0), 0);
        FUNC_7(VAR_17 == VAR_1,
            "UrlUnescapeA returned 0x%x (expected E_INVALIDARG) for \"%s\"\n",
            VAR_17, VAR_4[VAR_11].url);
        FUNC_7(FUNC_10(VAR_6,"")==0, "Expected empty string\n");

        if (&FUNC_9) {
            VAR_10 = VAR_2;
            VAR_8 = FUNC_2(VAR_4[VAR_11].url);
            VAR_9 = FUNC_2(VAR_4[VAR_11].expect);
            VAR_17 = FUNC_9(VAR_8, VAR_7, &VAR_10, 0);
            FUNC_7(VAR_17 == VAR_3,
                "UrlUnescapeW returned 0x%x (expected S_OK) for \"%s\"\n",
                VAR_17, VAR_4[VAR_11].url);

            FUNC_3(VAR_0,0,VAR_7,-1,VAR_6,VAR_2,0,0);
            FUNC_7(FUNC_5(VAR_7, VAR_9)==0,
                "Expected \"%s\", but got \"%s\" from \"%s\" flags %08lx\n",
                VAR_4[VAR_11].expect, VAR_6, VAR_4[VAR_11].url, 0L);
            FUNC_1(VAR_8);
            FUNC_1(VAR_9);
        }
    }

    VAR_10 = sizeof(VAR_12);
    VAR_17 = FUNC_8(VAR_12, ((void*)0), &VAR_10, VAR_5);
    FUNC_7(VAR_17 == VAR_3, "UrlUnescapeA returned 0x%x (expected S_OK)\n", VAR_17);
    FUNC_7(!FUNC_10(VAR_12, VAR_14), "got %s expected %s\n", VAR_12, VAR_14);
    FUNC_7(VAR_10 == 27, "got %d expected 27\n", VAR_10);


    VAR_17 = FUNC_8(VAR_13, ((void*)0), ((void*)0), VAR_5);
    FUNC_7(VAR_17 == VAR_3, "UrlUnescapeA returned 0x%x (expected S_OK)\n", VAR_17);
    FUNC_7(!FUNC_10(VAR_13, VAR_14), "got %s expected %s\n", VAR_13, VAR_14);

    if (&FUNC_9) {
        VAR_10 = sizeof(VAR_15);
        VAR_17 = FUNC_9(VAR_15, ((void*)0), &VAR_10, VAR_5);
        FUNC_7(VAR_17 == VAR_3, "UrlUnescapeW returned 0x%x (expected S_OK)\n", VAR_17);
        FUNC_7(VAR_10 == 50, "got %d expected 50\n", VAR_10);


        VAR_17 = FUNC_9(VAR_16, ((void*)0), ((void*)0), VAR_5);
        FUNC_7(VAR_17 == VAR_3, "UrlUnescapeW returned 0x%x (expected S_OK)\n", VAR_17);

        FUNC_7(FUNC_6(VAR_16) == 24, "got %d expected 24\n", FUNC_6(VAR_16));
    }
}
