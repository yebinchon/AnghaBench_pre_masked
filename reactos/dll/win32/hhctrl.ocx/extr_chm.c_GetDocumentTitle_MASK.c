
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_11__ {int len; int * buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int WCHAR ;
struct TYPE_12__ {int * pStorage; } ;
typedef int * LPCWSTR ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef TYPE_2__ CHMInfo ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int ,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,char*,int) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int * FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int *) ;

WCHAR *FUNC_18(CHMInfo *VAR_1, LPCWSTR VAR_2)
{
    strbuf_t VAR_3, VAR_4, VAR_5;
    WCHAR *VAR_6 = ((void*)0);
    IStream *VAR_7 = ((void*)0);
    IStorage *VAR_8;
    stream_t VAR_9;
    HRESULT VAR_10;

    FUNC_6("%s\n", FUNC_9(VAR_2));

    VAR_8 = VAR_1->pStorage;
    if(!VAR_8) {
        FUNC_7("Could not open storage to obtain the title for a document.\n");
        return ((void*)0);
    }
    FUNC_2(VAR_8);

    VAR_10 = FUNC_3(VAR_8, VAR_2, ((void*)0), VAR_0, 0, &VAR_7);
    FUNC_4(VAR_8);
    if(FUNC_0(VAR_10))
        FUNC_7("Could not open stream: %08x\n", VAR_10);

    FUNC_17(&VAR_9, VAR_7);
    FUNC_14(&VAR_3);
    FUNC_14(&VAR_5);
    FUNC_14(&VAR_4);

    while(FUNC_12(&VAR_9, &VAR_3)) {
        FUNC_10(&VAR_3, &VAR_4);

        FUNC_6("%s\n", VAR_3.buf);

        if(!FUNC_8(VAR_4.buf, "title", -1)) {
            if(FUNC_11(&VAR_9, &VAR_5) && VAR_5.len > 1)
            {
                VAR_6 = FUNC_16(&VAR_5.buf[1], VAR_5.len-1);
                FUNC_1("magic: %s\n", FUNC_9(VAR_6));
                break;
            }
        }

        FUNC_15(&VAR_3);
    }

    FUNC_13(&VAR_3);
    FUNC_13(&VAR_5);
    FUNC_13(&VAR_4);
    FUNC_5(VAR_7);

    return VAR_6;
}
