
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ MessagesAvailable; int NextMessageSize; int ReadTimeout; int MaximumMessageSize; } ;
struct TYPE_8__ {int Flink; } ;
struct TYPE_10__ {scalar_t__ MessageCount; int MessageListLock; TYPE_1__ MessageListHead; int TimeOut; int MaxMessageSize; } ;
struct TYPE_9__ {int Size; } ;
typedef int* PULONG ;
typedef TYPE_2__* PMSFS_MESSAGE ;
typedef TYPE_3__* PMSFS_FCB ;
typedef TYPE_4__* PFILE_MAILSLOT_QUERY_INFORMATION ;
typedef int NTSTATUS ;
typedef int KIRQL ;
typedef int FILE_MAILSLOT_QUERY_INFORMATION ;


 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static NTSTATUS
FUNC_3(PMSFS_FCB VAR_5,
                             PFILE_MAILSLOT_QUERY_INFORMATION VAR_6,
                             PULONG VAR_7)
{
    KIRQL VAR_8;

    if (*VAR_7 < sizeof(FILE_MAILSLOT_QUERY_INFORMATION))
        return VAR_3;

    VAR_6->MaximumMessageSize = VAR_5->MaxMessageSize;
    VAR_6->ReadTimeout = VAR_5->TimeOut;

    FUNC_1(&VAR_5->MessageListLock, &VAR_8);
    VAR_6->MessagesAvailable = VAR_5->MessageCount;
    if (VAR_5->MessageCount == 0)
    {
        VAR_6->NextMessageSize = VAR_0;
    }
    else
    {
        PMSFS_MESSAGE VAR_9 = FUNC_0(VAR_5->MessageListHead.Flink,
                                                  VAR_1,
                                                  VAR_2);
        VAR_6->NextMessageSize = VAR_9->Size;
    }
    FUNC_2(&VAR_5->MessageListLock, VAR_8);

    *VAR_7 -= sizeof(FILE_MAILSLOT_QUERY_INFORMATION);

    return VAR_4;
}
