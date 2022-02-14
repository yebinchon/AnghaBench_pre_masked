
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int dwFlags; int dwContext; } ;
struct TYPE_18__ {int status_code; scalar_t__ contentLength; int * verb; TYPE_9__ hdr; int netconn; } ;
typedef TYPE_1__ http_request_t ;
typedef int WCHAR ;
typedef int INT ;
typedef int DWORD_PTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ,int *,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_9__*,int ,int ,int *,int) ;
 int VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 int * FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static DWORD FUNC_20(http_request_t *VAR_10, DWORD VAR_11, DWORD_PTR VAR_12)
{
    INT VAR_13;
    DWORD VAR_14 = VAR_2;

    if(!FUNC_16(VAR_10->netconn)) {
        FUNC_8("Not connected\n");
        FUNC_17(VAR_10, 0, VAR_1);
        return VAR_1;
    }

    FUNC_7(&VAR_10->hdr, VAR_10->hdr.dwContext,
                  VAR_5, ((void*)0), 0);

    if (FUNC_0(VAR_10, &VAR_13) || !VAR_13)
        VAR_14 = VAR_0;

    FUNC_7(&VAR_10->hdr, VAR_10->hdr.dwContext,
                  VAR_6, &VAR_13, sizeof(DWORD));


    FUNC_14(VAR_10);
    FUNC_3(VAR_10);
    FUNC_4(VAR_10);
    FUNC_5(VAR_10);

    if ((VAR_14 = FUNC_18(VAR_10)) == VAR_2) {
        if(!VAR_10->contentLength)
            FUNC_15(VAR_10, VAR_7);
    }

    if (VAR_14 == VAR_2 && !(VAR_10->hdr.dwFlags & VAR_4))
    {
        switch(VAR_10->status_code) {
        case 130:
        case 131:
        case 128:
        case 129: {
            WCHAR *VAR_15;

            VAR_15 = FUNC_11(VAR_10);
            if(!VAR_15)
                break;

            if (FUNC_19(VAR_10->verb, VAR_8) && FUNC_19(VAR_10->verb, VAR_9) &&
                VAR_10->status_code != 129)
            {
                FUNC_12(VAR_10->verb);
                VAR_10->verb = FUNC_13(VAR_8);
            }
            FUNC_15(VAR_10, FUNC_10(VAR_10, VAR_3) == VAR_2);
            VAR_14 = FUNC_1(VAR_10, VAR_15);
            FUNC_12(VAR_15);
            if (VAR_14 == VAR_2)
                VAR_14 = FUNC_2(VAR_10, ((void*)0), 0, ((void*)0), 0, 0, VAR_7);
        }
        }
    }

    if(VAR_14 == VAR_2)
        FUNC_9(VAR_10);

    if (VAR_14 == VAR_2 && VAR_10->contentLength)
        FUNC_6(VAR_10);
    else
        FUNC_17(VAR_10, VAR_14 == VAR_2, VAR_14);

    return VAR_14;
}
