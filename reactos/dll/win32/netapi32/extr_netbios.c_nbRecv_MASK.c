
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
struct TYPE_13__ {size_t sessionsLen; TYPE_1__ impl; TYPE_2__* transport; TYPE_4__* sessions; } ;
struct TYPE_12__ {scalar_t__ state; int data; int inUse; } ;
struct TYPE_11__ {size_t ncb_lsn; int ncb_buffer; } ;
struct TYPE_10__ {int (* recv ) (int ,int ,TYPE_3__*) ;} ;
typedef TYPE_3__* PNCB ;
typedef TYPE_4__ NetBIOSSession ;
typedef TYPE_5__ NetBIOSAdapter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static UCHAR FUNC_1(NetBIOSAdapter *VAR_6, PNCB VAR_7)
{
    UCHAR VAR_8;
    NetBIOSSession *VAR_9;

    if (!VAR_6) return VAR_1;
    if (!VAR_6->transport->recv) return VAR_2;
    if (!VAR_7) return VAR_3;
    if (VAR_7->ncb_lsn >= VAR_6->sessionsLen) return VAR_4;
    if (!VAR_6->sessions[VAR_7->ncb_lsn].inUse) return VAR_4;
    if (!VAR_7->ncb_buffer) return VAR_0;

    VAR_9 = &VAR_6->sessions[VAR_7->ncb_lsn];
    if (VAR_9->state != VAR_5)
        VAR_8 = VAR_4;
    else
        VAR_8 = VAR_6->transport->recv(VAR_6->impl.data, VAR_9->data, VAR_7);
    return VAR_8;
}
