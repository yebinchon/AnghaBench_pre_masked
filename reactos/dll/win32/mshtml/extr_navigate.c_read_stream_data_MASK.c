
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIRequest ;
struct TYPE_10__ {int readed; int bom; scalar_t__ binding; } ;
struct TYPE_9__ {TYPE_7__* nsstream; TYPE_4__ bsc; int nscontext; TYPE_1__* nschannel; int nslistener; scalar_t__ is_doc_channel; scalar_t__ response_processed; } ;
typedef TYPE_2__ nsChannelBSC ;
typedef int buf ;
typedef int WCHAR ;
struct TYPE_11__ {int buf_size; int nsIInputStream_iface; int * buf; } ;
struct TYPE_8__ {int nsIHttpChannel_iface; int content_type; void* charset; } ;
typedef int IWinInetHttpInfo ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;





 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int,int *,int ,int **,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,void**) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_9 () ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *,int ,int *,int,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_16 (TYPE_4__*,int *,int *,int,int *) ;
 int * VAR_6 ;

__attribute__((used)) static HRESULT FUNC_17(nsChannelBSC *VAR_7, IStream *VAR_8)
{
    DWORD VAR_9;
    nsresult VAR_10;
    HRESULT VAR_11;

    if(!VAR_7->response_processed) {
        IWinInetHttpInfo *VAR_12;

        VAR_7->response_processed = VAR_3;
        if(VAR_7->bsc.binding) {
            VAR_11 = FUNC_4(VAR_7->bsc.binding, &VAR_1, (void**)&VAR_12);
            if(FUNC_7(VAR_11)) {
                FUNC_15(VAR_7, VAR_12);
                FUNC_5(VAR_12);
            }
        }
    }

    if(!VAR_7->nschannel)
        return VAR_2;

    if(!VAR_7->nslistener) {
        BYTE VAR_13[1024];

        do {
            VAR_11 = FUNC_16(&VAR_7->bsc, VAR_8, VAR_13, sizeof(VAR_13), &VAR_9);
        }while(VAR_11 == VAR_2 && VAR_9);

        return VAR_2;
    }

    if(!VAR_7->nsstream) {
        VAR_7->nsstream = FUNC_9();
        if(!VAR_7->nsstream)
            return VAR_0;
    }

    do {
        BOOL VAR_14 = !VAR_7->bsc.readed;

        VAR_11 = FUNC_16(&VAR_7->bsc, VAR_8, VAR_7->nsstream->buf+VAR_7->nsstream->buf_size,
                sizeof(VAR_7->nsstream->buf)-VAR_7->nsstream->buf_size, &VAR_9);
        if(!VAR_9)
            break;

        VAR_7->nsstream->buf_size += VAR_9;

        if(VAR_14) {
            switch(VAR_7->bsc.bom) {
            case 128:
                VAR_7->nschannel->charset = FUNC_11(VAR_5);
                break;
            case 129:
                VAR_7->nschannel->charset = FUNC_11(VAR_4);
            case 130:
                                                          ;
            }

            if(!VAR_7->nschannel->content_type) {
                WCHAR *VAR_15;

                VAR_11 = FUNC_3(((void*)0), ((void*)0), VAR_7->nsstream->buf, VAR_7->nsstream->buf_size,
                        VAR_7->is_doc_channel ? VAR_6 : ((void*)0), 0, &VAR_15, 0);
                if(FUNC_2(VAR_11))
                    return VAR_11;

                FUNC_8("Found MIME %s\n", FUNC_10(VAR_15));

                VAR_7->nschannel->content_type = FUNC_12(VAR_15);
                FUNC_0(VAR_15);
                if(!VAR_7->nschannel->content_type)
                    return VAR_0;
            }

            VAR_11 = FUNC_14(VAR_7);
            if(FUNC_2(VAR_11))
                return VAR_11;
        }

        VAR_10 = FUNC_13(VAR_7->nslistener,
                (nsIRequest*)&VAR_7->nschannel->nsIHttpChannel_iface, VAR_7->nscontext,
                &VAR_7->nsstream->nsIInputStream_iface, VAR_7->bsc.readed-VAR_7->nsstream->buf_size,
                VAR_7->nsstream->buf_size);
        if(FUNC_6(VAR_10))
            FUNC_1("OnDataAvailable failed: %08x\n", VAR_10);

        if(VAR_7->nsstream->buf_size == sizeof(VAR_7->nsstream->buf)) {
            FUNC_1("buffer is full\n");
            break;
        }
    }while(VAR_11 == VAR_2);

    return VAR_2;
}
