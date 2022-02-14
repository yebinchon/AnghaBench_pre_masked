
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_10__ {size_t ncb_lsn; } ;
struct TYPE_9__ {size_t sessionsLen; TYPE_1__* sessions; } ;
struct TYPE_8__ {scalar_t__ state; int inUse; } ;
typedef TYPE_1__ NetBIOSSession ;
typedef TYPE_2__ NetBIOSAdapter ;
typedef TYPE_3__ NCB ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static UCHAR FUNC_1(NetBIOSAdapter *VAR_5, const NCB *VAR_6)
{
    UCHAR VAR_7;
    NetBIOSSession *VAR_8;

    if (!VAR_5) return VAR_1;
    if (!VAR_6) return VAR_2;
    if (VAR_6->ncb_lsn >= VAR_5->sessionsLen) return VAR_3;
    if (!VAR_5->sessions[VAR_6->ncb_lsn].inUse) return VAR_3;

    VAR_8 = &VAR_5->sessions[VAR_6->ncb_lsn];
    if (VAR_8->state != VAR_4)
        VAR_7 = VAR_3;
    else
    {
        VAR_8->state = VAR_0;
        VAR_7 = FUNC_0(VAR_5, VAR_8);
    }
    return VAR_7;
}
