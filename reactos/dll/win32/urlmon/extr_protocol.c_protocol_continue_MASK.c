
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ pData; } ;
struct TYPE_13__ {int flags; scalar_t__ query_available; scalar_t__ available_bytes; int request; scalar_t__ post_stream; TYPE_1__* vtbl; int protocol_sink; } ;
struct TYPE_12__ {int (* on_error ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ Protocol ;
typedef TYPE_3__ PROTOCOLDATA ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ,scalar_t__*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*) ;

HRESULT FUNC_13(Protocol *VAR_6, PROTOCOLDATA *VAR_7)
{
    BOOL VAR_8;
    HRESULT VAR_9;

    VAR_8 = !VAR_7 || VAR_7->pData == FUNC_5(VAR_0);

    if(!VAR_6->request) {
        FUNC_6("Expected request to be non-NULL\n");
        return VAR_5;
    }

    if(!VAR_6->protocol_sink) {
        FUNC_6("Expected IInternetProtocolSink pointer to be non-NULL\n");
        return VAR_5;
    }

    if(VAR_6->flags & VAR_2) {
        VAR_6->flags &= ~VAR_2;
        VAR_6->vtbl->on_error(VAR_6, FUNC_3(VAR_7->pData));
        return VAR_5;
    }

    if(VAR_6->post_stream)
        return FUNC_12(VAR_6);

    if(VAR_8) {
        VAR_9 = FUNC_10(VAR_6);
        if(FUNC_0(VAR_9))
            return VAR_5;
    }

    if(!VAR_7 || VAR_7->pData >= FUNC_5(VAR_0)) {
        if(!VAR_6->available_bytes) {
            if(VAR_6->query_available) {
                VAR_6->available_bytes = VAR_6->query_available;
            }else {
                BOOL VAR_10;




                VAR_6->flags &= ~VAR_3;
                VAR_10 = FUNC_2(VAR_6->request, &VAR_6->query_available, 0, 0);
                if(VAR_10) {
                    FUNC_4("available %u bytes\n", VAR_6->query_available);
                    if(!VAR_6->query_available) {
                        FUNC_7(VAR_6);
                        return VAR_5;
                    }
                    VAR_6->available_bytes = VAR_6->query_available;
                }else if(FUNC_1() != VAR_1) {
                    VAR_6->flags |= VAR_3;
                    FUNC_6("InternetQueryDataAvailable failed: %d\n", FUNC_1());
                    FUNC_9(VAR_6, VAR_4);
                    return VAR_5;
                }
            }

            VAR_6->flags |= VAR_3;
        }

        FUNC_8(VAR_6);
    }

    return VAR_5;
}
