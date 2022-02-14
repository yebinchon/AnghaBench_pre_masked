
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {int flags; scalar_t__ available_bytes; scalar_t__ query_available; int request; int current_position; } ;
typedef TYPE_1__ Protocol ;
typedef scalar_t__ HRESULT ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,scalar_t__*,int ,int ) ;
 int FUNC_3 (int ,int *,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;

HRESULT FUNC_8(Protocol *VAR_9, void *VAR_10, ULONG VAR_11, ULONG *VAR_12)
{
    ULONG VAR_13 = 0;
    BOOL VAR_14;
    HRESULT VAR_15 = VAR_7;

    if(VAR_9->flags & VAR_2) {
        *VAR_12 = 0;
        return VAR_7;
    }

    if(!(VAR_9->flags & VAR_4) && (!(VAR_9->flags & VAR_3) || !VAR_9->available_bytes)) {
        *VAR_12 = 0;
        return VAR_1;
    }

    while(VAR_13 < VAR_11 && VAR_9->available_bytes) {
        ULONG VAR_16;

        VAR_14 = FUNC_3(VAR_9->request, ((BYTE *)VAR_10)+VAR_13,
                VAR_9->available_bytes > VAR_11-VAR_13 ? VAR_11-VAR_13 : VAR_9->available_bytes, &VAR_16);
        if(!VAR_14) {
            FUNC_5("InternetReadFile failed: %d\n", FUNC_1());
            VAR_15 = VAR_6;
            FUNC_7(VAR_9, VAR_15);
            break;
        }

        if(!VAR_16) {
            FUNC_6(VAR_9);
            break;
        }

        VAR_13 += VAR_16;
        VAR_9->current_position += VAR_16;
        VAR_9->available_bytes -= VAR_16;

        FUNC_4("current_position %d, available_bytes %d\n", VAR_9->current_position, VAR_9->available_bytes);

        if(!VAR_9->available_bytes) {



            VAR_9->flags &= ~VAR_3;
            VAR_14 = FUNC_2(VAR_9->request, &VAR_9->query_available, 0, 0);
            if(!VAR_14) {
                if (FUNC_1() == VAR_0) {
                    VAR_15 = VAR_1;
                }else {
                    FUNC_5("InternetQueryDataAvailable failed: %d\n", FUNC_1());
                    VAR_15 = VAR_5;
                    FUNC_7(VAR_9, VAR_15);
                }
                break;
            }

            if(!VAR_9->query_available) {
                FUNC_6(VAR_9);
                break;
            }

            VAR_9->available_bytes = VAR_9->query_available;
        }
    }

    *VAR_12 = VAR_13;

    if (VAR_15 != VAR_1)
        VAR_9->flags |= VAR_3;
    if(FUNC_0(VAR_15))
        return VAR_15;

    return VAR_13 ? VAR_8 : VAR_7;
}
