
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ Status; scalar_t__ Information; } ;
struct TYPE_14__ {int IdType; } ;
struct TYPE_15__ {TYPE_2__ QueryId; } ;
struct TYPE_17__ {TYPE_3__ Parameters; int MinorFunction; int MajorFunction; } ;
struct TYPE_13__ {int Status; } ;
struct TYPE_16__ {TYPE_1__ IoStatus; } ;
typedef scalar_t__ PWSTR ;
typedef TYPE_4__* PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef int PDEVICE_OBJECT ;
typedef scalar_t__ NTSTATUS ;
typedef int KEVENT ;
typedef TYPE_6__ IO_STATUS_BLOCK ;
typedef int IO_STACK_LOCATION ;
typedef int BUS_QUERY_ID_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (int ,int ,int *,int ,int *,int *,TYPE_6__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_5__*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static
NTSTATUS
FUNC_10(
    PDEVICE_OBJECT VAR_9,
    BUS_QUERY_ID_TYPE VAR_10,
    PWSTR *VAR_11)
{
    PIO_STACK_LOCATION VAR_12;
    IO_STATUS_BLOCK VAR_13;
    PDEVICE_OBJECT VAR_14;
    KEVENT VAR_15;
    PIRP VAR_16;
    NTSTATUS VAR_17;

    FUNC_8();


    FUNC_4(&VAR_15, VAR_5, VAR_1);

    VAR_14 = FUNC_2(VAR_9);


    VAR_16 = FUNC_0(VAR_2,
                                       VAR_14,
                                       ((void*)0),
                                       0,
                                       ((void*)0),
                                       &VAR_15,
                                       &VAR_13);
    if (VAR_16 == ((void*)0))
    {
        VAR_17 = VAR_6;
        goto done;
    }


    VAR_16->IoStatus.Status = VAR_7;


    VAR_12 = FUNC_3(VAR_16);


    FUNC_9(VAR_12, sizeof(IO_STACK_LOCATION));
    VAR_12->MajorFunction = VAR_2;
    VAR_12->MinorFunction = VAR_3;
    VAR_12->Parameters.QueryId.IdType = VAR_10;


    VAR_17 = FUNC_1(VAR_14, VAR_16);
    if (VAR_17 == VAR_8)
    {
        FUNC_5(&VAR_15,
                              VAR_0,
                              VAR_4,
                              VAR_1,
                              ((void*)0));

        VAR_17 = VAR_13.Status;
    }

    if (FUNC_6(VAR_17))
    {
        *VAR_11 = (PWSTR)VAR_13.Information;
    }

done:

    FUNC_7(VAR_14);

    return VAR_17;
}
