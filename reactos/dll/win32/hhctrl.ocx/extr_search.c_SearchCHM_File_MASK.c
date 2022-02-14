
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_9__ {int len; char* buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef char WCHAR ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,char const*,int *,int ,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,char*,int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ FUNC_18 (char*,char const*) ;
 char FUNC_19 (char) ;

__attribute__((used)) static WCHAR *FUNC_20(IStorage *VAR_5, const WCHAR *VAR_6, const char *VAR_7)
{
    char *VAR_8 = FUNC_8(VAR_0);
    strbuf_t VAR_9, VAR_10, VAR_11;
    IStream *VAR_12 = ((void*)0);
    DWORD VAR_13, VAR_14 = 0;
    WCHAR *VAR_15 = ((void*)0);
    BOOL VAR_16 = VAR_2;
    stream_t VAR_17;
    HRESULT VAR_18;

    VAR_18 = FUNC_2(VAR_5, VAR_6, ((void*)0), VAR_3, 0, &VAR_12);
    if(FUNC_0(VAR_18)) {
        FUNC_1("Could not open '%s' stream: %08x\n", FUNC_6(VAR_6), VAR_18);
        goto cleanup;
    }

    FUNC_15(&VAR_10);
    FUNC_15(&VAR_9);
    FUNC_15(&VAR_11);

    FUNC_17(&VAR_17, VAR_12);


    while(FUNC_13(&VAR_17, &VAR_10)) {
        FUNC_7(&VAR_10, &VAR_11);

        if(FUNC_12(&VAR_17, &VAR_9) && VAR_9.len > 1)
        {
            char *VAR_19 = &VAR_9.buf[1];
            int VAR_20 = VAR_9.len-1;

            if(!FUNC_5(VAR_11.buf, "title", -1))
            {
                int VAR_21 = FUNC_4(VAR_1, 0, VAR_19, VAR_20, ((void*)0), 0);
                VAR_15 = FUNC_8((VAR_21+1)*sizeof(WCHAR));
                FUNC_4(VAR_1, 0, VAR_19, VAR_20, VAR_15, VAR_21);
                VAR_15[VAR_21] = 0;
            }

            VAR_8 = FUNC_10(VAR_8, VAR_14 + VAR_20 + 1);
            FUNC_11(&VAR_8[VAR_14], VAR_19, VAR_20);
            VAR_8[VAR_14 + VAR_20] = '\0';
            VAR_14 += VAR_20;
        }

        FUNC_16(&VAR_10);
        FUNC_16(&VAR_9);
    }




    for(VAR_13=0;VAR_13<VAR_14;VAR_13++)
        VAR_8[VAR_13] = FUNC_19(VAR_8[VAR_13]);


    if(FUNC_18(VAR_8, VAR_7))
        VAR_16 = VAR_4;

    FUNC_14(&VAR_10);
    FUNC_14(&VAR_9);
    FUNC_14(&VAR_11);

cleanup:
    FUNC_9(VAR_8);
    if(VAR_12)
        FUNC_3(VAR_12);
    if(!VAR_16)
    {
        FUNC_9(VAR_15);
        return ((void*)0);
    }
    return VAR_15;
}
