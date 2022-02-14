
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Status; } ;
struct TYPE_5__ {int StorageDevice; } ;
typedef TYPE_1__* PVCB ;
typedef scalar_t__ PIRP ;
typedef scalar_t__ NTSTATUS ;
typedef int KEVENT ;
typedef TYPE_2__ IO_STATUS_BLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ,int *,int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static
NTSTATUS
FUNC_4(
    PVCB VAR_7)
{
    PIRP VAR_8;
    KEVENT VAR_9;
    NTSTATUS VAR_10;
    IO_STATUS_BLOCK VAR_11;

    FUNC_2(&VAR_9, VAR_4, VAR_1);
    VAR_8 = FUNC_0(VAR_2, VAR_7->StorageDevice,
                                       ((void*)0), 0, ((void*)0), &VAR_9, &VAR_11);
    if (VAR_8)
    {
        VAR_10 = FUNC_1(VAR_7->StorageDevice, VAR_8);
        if (VAR_10 == VAR_6)
        {
            FUNC_3(&VAR_9, VAR_0, VAR_3, VAR_1, ((void*)0));
            VAR_10 = VAR_11.Status;
        }
    }
    else
    {
        VAR_10 = VAR_5;
    }

    return VAR_10;
}
