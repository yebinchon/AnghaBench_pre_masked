
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_9__ {int data; } ;
struct TYPE_13__ {int sessionsLen; TYPE_1__ impl; TYPE_2__* transport; } ;
struct TYPE_12__ {int max_cfg_sess; int max_sess; } ;
struct TYPE_11__ {int ncb_length; char* ncb_callname; int ncb_buffer; } ;
struct TYPE_10__ {int (* astat ) (int ,TYPE_3__*) ;} ;
typedef TYPE_3__* PNCB ;
typedef TYPE_4__* PADAPTER_STATUS ;
typedef TYPE_5__ NetBIOSAdapter ;
typedef int ADAPTER_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_3__*) ;

__attribute__((used)) static UCHAR FUNC_1(NetBIOSAdapter *VAR_5, PNCB VAR_6)
{
    UCHAR VAR_7;

    if (!VAR_5) return VAR_1;
    if (!VAR_5->transport->astat) return VAR_3;
    if (!VAR_6) return VAR_4;
    if (!VAR_6->ncb_buffer) return VAR_0;
    if (VAR_6->ncb_length < sizeof(ADAPTER_STATUS)) return VAR_2;

    VAR_7 = VAR_5->transport->astat(VAR_5->impl.data, VAR_6);
    if (VAR_6->ncb_callname[0] == '*')
    {
        PADAPTER_STATUS VAR_8 = (PADAPTER_STATUS)VAR_6->ncb_buffer;

        VAR_8->max_sess = VAR_8->max_cfg_sess = VAR_5->sessionsLen;
    }
    return VAR_7;
}
