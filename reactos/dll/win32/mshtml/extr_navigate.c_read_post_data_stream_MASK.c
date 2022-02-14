
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_3__ {char* post_data; int post_data_len; int * post_stream; scalar_t__* headers; } ;
typedef TYPE_1__ request_data_t ;
typedef scalar_t__ nsresult ;
typedef int nsISeekableStream ;
typedef int nsIInputStream ;
typedef scalar_t__ WCHAR ;
typedef scalar_t__ UINT64 ;
typedef int UINT32 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,char*,int,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 scalar_t__* FUNC_9 (int) ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,scalar_t__*) ;
 scalar_t__ FUNC_15 (int *,int *,void**) ;
 scalar_t__ FUNC_16 (int *,char*,scalar_t__,int*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (scalar_t__*,struct list*) ;

__attribute__((used)) static HRESULT FUNC_20(nsIInputStream *VAR_7, BOOL VAR_8, struct list *VAR_9,
        request_data_t *VAR_10)
{
    nsISeekableStream *VAR_11;
    UINT64 VAR_12 = 0;
    UINT32 VAR_13 = 0;
    char *VAR_14, *VAR_15;
    nsresult VAR_16;
    HRESULT VAR_17 = VAR_6;

    if(!VAR_7)
        return VAR_6;

    VAR_16 = FUNC_14(VAR_7, &VAR_12);
    if(FUNC_4(VAR_16))
        return VAR_1;

    VAR_15 = VAR_14 = FUNC_1(0, VAR_12+1);
    if(!VAR_14)
        return VAR_2;

    VAR_16 = FUNC_16(VAR_7, VAR_14, VAR_12, &VAR_13);
    if(FUNC_4(VAR_16)) {
        FUNC_2(VAR_14);
        return VAR_1;
    }

    if(VAR_8) {
        if(VAR_13 >= 2 && VAR_14[0] == '\r' && VAR_14[1] == '\n') {
            VAR_15 = VAR_14+2;
            VAR_13 -= 2;
        }else {
            WCHAR *VAR_18;
            DWORD VAR_19;
            char *VAR_20;

            VAR_15 += VAR_13;
            for(VAR_20 = VAR_14; VAR_20+4 < VAR_14+VAR_13; VAR_20++) {
                if(!FUNC_11(VAR_20, "\r\n\r\n", 4)) {
                    VAR_20 += 2;
                    VAR_15 = VAR_20+2;
                    break;
                }
            }

            VAR_13 -= VAR_15-VAR_14;

            VAR_19 = FUNC_3(VAR_0, 0, VAR_14, VAR_20-VAR_14, ((void*)0), 0);
            VAR_18 = FUNC_9((VAR_19+1)*sizeof(WCHAR));
            if(VAR_18) {
                FUNC_3(VAR_0, 0, VAR_14, VAR_20-VAR_14, VAR_18, VAR_19);
                VAR_18[VAR_19] = 0;
                if(VAR_9)
                    VAR_17 = FUNC_19(VAR_18, VAR_9);
                if(FUNC_5(VAR_17))
                    VAR_10->headers = VAR_18;
                else
                    FUNC_10(VAR_18);
            }else {
                VAR_17 = VAR_2;
            }
        }
    }

    if(FUNC_0(VAR_17)) {
        FUNC_2(VAR_14);
        return VAR_17;
    }

    if(!VAR_13) {
        FUNC_2(VAR_14);
        VAR_15 = ((void*)0);
    }else if(VAR_15 != VAR_14) {
        char *VAR_21;

        VAR_21 = FUNC_1(0, VAR_13+1);
        if(VAR_21)
            FUNC_12(VAR_21, VAR_15, VAR_13);
        FUNC_2(VAR_14);
        if(!VAR_21)
            return VAR_2;
        VAR_15 = VAR_21;
    }

    if(VAR_15)
        VAR_15[VAR_13] = 0;
    VAR_10->post_data = VAR_15;
    VAR_10->post_data_len = VAR_13;

    VAR_16 = FUNC_15(VAR_7, &VAR_3, (void**)&VAR_11);
    FUNC_7(VAR_16 == VAR_4);

    VAR_16 = FUNC_18(VAR_11, VAR_5, 0);
    FUNC_7(VAR_16 == VAR_4);

    FUNC_17(VAR_11);

    FUNC_13(VAR_7);
    VAR_10->post_stream = VAR_7;
    FUNC_6("post_data = %s\n", FUNC_8(VAR_10->post_data, VAR_10->post_data_len));
    return VAR_6;
}
