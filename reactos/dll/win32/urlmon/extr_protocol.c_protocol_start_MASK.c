
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int cbSize; int dwOptions; } ;
struct TYPE_11__ {int bindf; TYPE_1__* vtbl; TYPE_8__ bind_info; int * protocol_sink; int * protocol; } ;
struct TYPE_10__ {scalar_t__ (* open_request ) (TYPE_2__*,int *,int ,int ,int *) ;} ;
typedef TYPE_2__ Protocol ;
typedef int IUri ;
typedef int IInternetProtocolSink ;
typedef int IInternetProtocol ;
typedef int IInternetBindInfo ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BINDINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int*,TYPE_8__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_11 ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int *,int ,int ,int *) ;

HRESULT FUNC_10(Protocol *VAR_12, IInternetProtocol *VAR_13, IUri *VAR_14,
        IInternetProtocolSink *VAR_15, IInternetBindInfo *VAR_16)
{
    DWORD VAR_17;
    HRESULT VAR_18;

    VAR_12->protocol = VAR_13;

    FUNC_2(VAR_15);
    VAR_12->protocol_sink = VAR_15;

    FUNC_5(&VAR_12->bind_info, 0, sizeof(VAR_12->bind_info));
    VAR_12->bind_info.cbSize = sizeof(BINDINFO);
    VAR_18 = FUNC_1(VAR_16, &VAR_12->bindf, &VAR_12->bind_info);
    if(VAR_18 != VAR_10) {
        FUNC_3("GetBindInfo failed: %08x\n", VAR_18);
        return FUNC_8(VAR_12, VAR_18);
    }

    if(!(VAR_12->bindf & VAR_0))
        FUNC_7(VAR_12, VAR_4, ((void*)0));

    if(!FUNC_4(VAR_16))
        return FUNC_8(VAR_12, VAR_5);

    VAR_17 = VAR_6;
    if(VAR_12->bindf & VAR_2)
        VAR_17 |= VAR_9;
    if(VAR_12->bindf & VAR_1)
        VAR_17 |= VAR_7;
    if(VAR_12->bind_info.dwOptions & VAR_3)
        VAR_17 |= VAR_8;

    VAR_18 = VAR_12->vtbl->open_request(VAR_12, VAR_14, VAR_17, VAR_11, VAR_16);
    if(FUNC_0(VAR_18)) {
        FUNC_6(VAR_12);
        return FUNC_8(VAR_12, VAR_18);
    }

    return VAR_10;
}
