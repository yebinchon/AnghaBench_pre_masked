
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {char* mime; int broken_failure; char* broken_mime; int hres; char* mime_pjpeg; int size; int * data; int proposed_mime; int url; } ;
typedef char* LPWSTR ;
typedef int HRESULT ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_3 ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (int *,char*,int *,int ,char const*,int ,char**,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 char* VAR_6 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    WCHAR *VAR_7, *VAR_8, *VAR_9;
    HRESULT VAR_10;
    BYTE VAR_11;
    int VAR_12;

    static const WCHAR VAR_13[] =
        {'a','p','p','l','i','c','a','t','i','o','n','/','o','c','t','e','t','-','s','t','r','e','a','m',0};
    static const WCHAR VAR_14[] = {'i','m','a','g','e','/','p','j','p','e','g',0};
    static const WCHAR VAR_15[] = {'t','e','x','t','/','h','t','m','l',0};
    static const WCHAR VAR_16[] = {'t','e','x','t','/','p','l','a','i','n',0};

    for(VAR_12 = 0; VAR_12 < FUNC_0(VAR_4); VAR_12++) {
        VAR_7 = (LPWSTR)0xf0f0f0f0;
        VAR_9 = FUNC_2(VAR_4[VAR_12].url);
        VAR_10 = FUNC_6(((void*)0), VAR_9, ((void*)0), 0, ((void*)0), 0, &VAR_7, 0);
        if(VAR_4[VAR_12].mime) {
            FUNC_5(VAR_10 == VAR_2 || FUNC_3(VAR_4[VAR_12].broken_failure), "[%d] FindMimeFromData failed: %08x\n", VAR_12, VAR_10);
            if(VAR_10 == VAR_2) {
                FUNC_5(!FUNC_8(VAR_7, VAR_4[VAR_12].mime)
                   || FUNC_3(VAR_4[VAR_12].broken_mime && !FUNC_8(VAR_7, VAR_4[VAR_12].broken_mime)),
                   "[%d] wrong mime: %s\n", VAR_12, FUNC_9(VAR_7));
                FUNC_1(VAR_7);
            }
        }else {
            FUNC_5(VAR_10 == VAR_0 || VAR_10 == VAR_4[VAR_12].hres,
               "[%d] FindMimeFromData failed: %08x, expected %08x\n",
               VAR_12, VAR_10, VAR_4[VAR_12].hres);
            FUNC_5(VAR_7 == (LPWSTR)0xf0f0f0f0, "[%d] mime != 0xf0f0f0f0\n", VAR_12);
        }

        VAR_7 = (LPWSTR)0xf0f0f0f0;
        VAR_10 = FUNC_6(((void*)0), VAR_9, ((void*)0), 0, VAR_16, 0, &VAR_7, 0);
        FUNC_5(VAR_10 == VAR_2, "[%d] FindMimeFromData failed: %08x\n", VAR_12, VAR_10);
        FUNC_5(!FUNC_8(VAR_7, "text/plain"), "[%d] wrong mime: %s\n", VAR_12, FUNC_9(VAR_7));
        FUNC_1(VAR_7);

        VAR_7 = (LPWSTR)0xf0f0f0f0;
        VAR_10 = FUNC_6(((void*)0), VAR_9, ((void*)0), 0, VAR_13, 0, &VAR_7, 0);
        FUNC_5(VAR_10 == VAR_2, "[%d] FindMimeFromData failed: %08x\n", VAR_12, VAR_10);
        FUNC_5(!FUNC_8(VAR_7, "application/octet-stream"), "[%d] wrong mime: %s\n", VAR_12, FUNC_9(VAR_7));
        FUNC_1(VAR_7);
        FUNC_4(VAR_9);
    }

    for(VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++) {
        VAR_9 = FUNC_2(VAR_5[VAR_12].url);
        VAR_8 = FUNC_2(VAR_5[VAR_12].proposed_mime);
        VAR_10 = FUNC_6(((void*)0), VAR_9, VAR_5[VAR_12].data, VAR_5[VAR_12].size,
                VAR_8, 0, &VAR_7, 0);
        FUNC_5(VAR_10 == VAR_2, "[%d] FindMimeFromData failed: %08x\n", VAR_12, VAR_10);
        VAR_11 = !FUNC_8(VAR_7, VAR_5[VAR_12].mime);
        FUNC_5(VAR_11 || FUNC_3(VAR_5[VAR_12].broken_mime && !FUNC_8(VAR_7, VAR_5[VAR_12].broken_mime)),
            "[%d] wrong mime: %s\n", VAR_12, FUNC_9(VAR_7));
        FUNC_4(VAR_8);
        FUNC_4(VAR_9);
        FUNC_1(VAR_7);
        if(!VAR_11 || VAR_9 || VAR_8)
            continue;

        VAR_10 = FUNC_6(((void*)0), ((void*)0), VAR_5[VAR_12].data, VAR_5[VAR_12].size,
                VAR_13, 0, &VAR_7, 0);
        FUNC_5(VAR_10 == VAR_2, "[%d] FindMimeFromData failed: %08x\n", VAR_12, VAR_10);
        FUNC_5(!FUNC_8(VAR_7, VAR_5[VAR_12].mime) || FUNC_3(VAR_5[VAR_12].broken_mime
                        && !FUNC_8(VAR_7, VAR_5[VAR_12].broken_mime)),
                    "[%d] wrong mime: %s\n", VAR_12, FUNC_9(VAR_7));
        FUNC_1(VAR_7);

        VAR_10 = FUNC_6(((void*)0), ((void*)0), VAR_5[VAR_12].data, VAR_5[VAR_12].size,
                VAR_16, 0, &VAR_7, 0);
        FUNC_5(VAR_10 == VAR_2, "[%d] FindMimeFromData failed: %08x\n", VAR_12, VAR_10);
        FUNC_5(!FUNC_8(VAR_7, VAR_5[VAR_12].mime) || FUNC_3(VAR_5[VAR_12].broken_mime
                    && !FUNC_8(VAR_7, VAR_5[VAR_12].broken_mime)),
                "[%d] wrong mime: %s\n", VAR_12, FUNC_9(VAR_7));
        FUNC_1(VAR_7);

        VAR_10 = FUNC_6(((void*)0), ((void*)0), VAR_5[VAR_12].data, VAR_5[VAR_12].size,
                VAR_15, 0, &VAR_7, 0);
        FUNC_5(VAR_10 == VAR_2, "[%d] FindMimeFromData failed: %08x\n", VAR_12, VAR_10);
        if(!FUNC_7("application/octet-stream", VAR_5[VAR_12].mime)
           || !FUNC_7("text/plain", VAR_5[VAR_12].mime) || VAR_12==92)
            FUNC_5(!FUNC_8(VAR_7, "text/html"), "[%d] wrong mime: %s\n", VAR_12, FUNC_9(VAR_7));
        else
            FUNC_5(!FUNC_8(VAR_7, VAR_5[VAR_12].mime), "[%d] wrong mime: %s\n", VAR_12, FUNC_9(VAR_7));
        FUNC_1(VAR_7);

        VAR_10 = FUNC_6(((void*)0), ((void*)0), VAR_5[VAR_12].data, VAR_5[VAR_12].size,
                VAR_14, 0, &VAR_7, 0);
        FUNC_5(VAR_10 == VAR_2, "[%d] FindMimeFromData failed: %08x\n", VAR_12, VAR_10);
        FUNC_5(!FUNC_8(VAR_7, VAR_5[VAR_12].mime_pjpeg ? VAR_5[VAR_12].mime_pjpeg : VAR_5[VAR_12].mime)
           || FUNC_3(!FUNC_8(VAR_7, VAR_5[VAR_12].mime)),
           "[%d] wrong mime, got %s\n", VAR_12, FUNC_9(VAR_7));
        FUNC_1(VAR_7);
    }

    VAR_10 = FUNC_6(((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), 0, &VAR_7, 0);
    FUNC_5(VAR_10 == VAR_1, "FindMimeFromData failed: %08x, expected E_INVALIDARG\n", VAR_10);

    VAR_10 = FUNC_6(((void*)0), ((void*)0), ((void*)0), 0, VAR_16, 0, &VAR_7, 0);
    FUNC_5(VAR_10 == VAR_1, "FindMimeFromData failed: %08x, expected E_INVALIDARG\n", VAR_10);

    VAR_10 = FUNC_6(((void*)0), ((void*)0), VAR_3, 0, ((void*)0), 0, &VAR_7, 0);
    FUNC_5(VAR_10 == VAR_0, "FindMimeFromData failed: %08x, expected E_FAIL\n", VAR_10);

    VAR_10 = FUNC_6(((void*)0), VAR_6, VAR_3, 0, ((void*)0), 0, &VAR_7, 0);
    FUNC_5(VAR_10 == VAR_0, "FindMimeFromData failed: %08x, expected E_FAIL\n", VAR_10);

    VAR_10 = FUNC_6(((void*)0), ((void*)0), VAR_3, 0, VAR_16, 0, &VAR_7, 0);
    FUNC_5(VAR_10 == VAR_2, "FindMimeFromData failed: %08x\n", VAR_10);
    FUNC_5(!FUNC_8(VAR_7, "text/plain"), "wrong mime: %s\n", FUNC_9(VAR_7));
    FUNC_1(VAR_7);

    VAR_10 = FUNC_6(((void*)0), ((void*)0), VAR_3, 0, VAR_16, 0, ((void*)0), 0);
    FUNC_5(VAR_10 == VAR_1, "FindMimeFromData failed: %08x, expected E_INVALIDARG\n", VAR_10);
}
