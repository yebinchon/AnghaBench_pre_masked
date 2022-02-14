
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct authinfo {scalar_t__ scheme; scalar_t__ finished; int data_len; int data; } ;
typedef char WCHAR ;
struct TYPE_10__ {TYPE_3__* QOS; } ;
struct TYPE_11__ {int cancel_event; int async_data; TYPE_4__ common; int servername; } ;
struct TYPE_9__ {TYPE_2__* qos; } ;
struct TYPE_7__ {int HttpCredentials; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_5__ RpcConnection_http ;
typedef scalar_t__ RPC_STATUS ;
typedef int HINTERNET ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*,int,int) ;
 int FUNC_1 (int ,int *,int ,int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct authinfo*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,struct authinfo**) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static RPC_STATUS FUNC_9(RpcConnection_http *VAR_5, HINTERNET VAR_6)
{
    static const WCHAR VAR_7[] = {'A','u','t','h','o','r','i','z','a','t','i','o','n',':','\r','\n',0};
    struct authinfo *VAR_8 = ((void*)0);
    RPC_STATUS VAR_9;
    BOOL VAR_10;

    for (;;)
    {
        VAR_9 = FUNC_3(VAR_6, VAR_5->servername, VAR_5->common.QOS->qos->u.HttpCredentials, &VAR_8);
        if (VAR_9 != VAR_4) break;

        VAR_9 = FUNC_5(VAR_6, VAR_8->scheme, VAR_8->data, VAR_8->data_len);
        if (VAR_9 != VAR_4) break;

        FUNC_6(VAR_5->async_data);
        VAR_10 = FUNC_1(VAR_6, ((void*)0), 0, ((void*)0), 0);
        VAR_9 = FUNC_8(VAR_5->async_data, VAR_10, VAR_5->cancel_event);
        if (VAR_9 != VAR_4 || VAR_8->finished) break;

        VAR_9 = FUNC_7(VAR_6);
        if (VAR_9 != VAR_4 && VAR_9 != VAR_0) break;
        FUNC_4(VAR_6, VAR_5->async_data, VAR_5->cancel_event);
    }

    if (VAR_8->scheme != VAR_3)
        FUNC_0(VAR_6, VAR_7, -1, VAR_2 | VAR_1);

    FUNC_2(VAR_8);
    return VAR_9;
}
