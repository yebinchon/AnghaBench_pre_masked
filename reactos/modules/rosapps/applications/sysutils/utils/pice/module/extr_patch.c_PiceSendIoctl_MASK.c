
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ Status; } ;
typedef int PVOID ;
typedef int * PIRP ;
typedef int PDEVICE_OBJECT ;
typedef scalar_t__ NTSTATUS ;
typedef int KEVENT ;
typedef TYPE_1__ IO_STATUS_BLOCK ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

NTSTATUS FUNC_7(PDEVICE_OBJECT VAR_8, ULONG VAR_9,
     PVOID VAR_10, ULONG VAR_11)
{
    KEVENT VAR_12;
    NTSTATUS VAR_13 = VAR_6;
    IO_STATUS_BLOCK VAR_14;
    PIRP VAR_15;

    FUNC_4(&VAR_12,
                      VAR_3,
                      VAR_1
                      );

    if (((void*)0) == (VAR_15 = FUNC_2(VAR_9,
                                                     VAR_8,
                                                     VAR_10,
                                                     VAR_11,
                                                     0,
                                                     0,
                                                     VAR_7,
                                                     &VAR_12,
                                                     &VAR_14))) {
  FUNC_1((0,"PiceSendIoctl: STATUS_INSUFFICIENT_RESOURCES\n"));
        return VAR_4;
    }

    VAR_13 = FUNC_3(VAR_8, VAR_15);

    if (VAR_5 == VAR_13) {

  VAR_13 = FUNC_5(&VAR_12,
                                       VAR_0,
                                       VAR_2,
                                       VAR_1,
                                       ((void*)0));

        FUNC_0(VAR_6 == VAR_13);
        VAR_13 = VAR_14.Status;
    }
 FUNC_1((0,"PiceSendIoctl: status: %d\n",FUNC_6(VAR_13)));
    return VAR_13;
}
