
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int content_length; int available_bytes; int protocol_sink; int query_available; int request; } ;
typedef TYPE_1__ Protocol ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

HRESULT FUNC_6(Protocol *VAR_6)
{
    BOOL VAR_7;
    HRESULT VAR_8;

    VAR_6->flags |= VAR_4;

    VAR_8 = FUNC_5(VAR_6);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_7 = FUNC_3(VAR_6->request, &VAR_6->query_available, 0, 0);
    if(VAR_7)
        VAR_6->available_bytes = VAR_6->query_available;
    else
        FUNC_4("InternetQueryDataAvailable failed: %u\n", FUNC_1());

    VAR_6->flags |= VAR_2|VAR_3;
    FUNC_2(VAR_6->protocol_sink, VAR_1|VAR_0,
            VAR_6->available_bytes, VAR_6->content_length);
    return VAR_5;
}
