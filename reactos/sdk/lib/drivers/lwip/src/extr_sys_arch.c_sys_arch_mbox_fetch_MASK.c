
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32_t ;
struct TYPE_9__ {int Lock; int Event; int ListHead; } ;
typedef TYPE_1__ sys_mbox_t ;
typedef int UINT64 ;
struct TYPE_11__ {int QuadPart; } ;
struct TYPE_10__ {int * Message; } ;
typedef int * PVOID ;
typedef TYPE_2__* PLWIP_MESSAGE_CONTAINER ;
typedef int PLIST_ENTRY ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int KIRQL ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int,int **,int ,int ,int ,int ,TYPE_3__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

u32_t
FUNC_12(sys_mbox_t *VAR_11, void **VAR_12, u32_t VAR_13)
{
    LARGE_INTEGER VAR_14, VAR_15, VAR_16;
    UINT64 VAR_17;
    NTSTATUS VAR_18;
    PVOID VAR_19;
    PLWIP_MESSAGE_CONTAINER VAR_20;
    PLIST_ENTRY VAR_21;
    KIRQL VAR_22;
    PVOID VAR_23[] = {&VAR_11->Event, &VAR_9};

    VAR_14.QuadPart = FUNC_3(VAR_13, -10000);

    FUNC_7(&VAR_15);

    VAR_18 = FUNC_9(2,
                                      VAR_23,
                                      VAR_10,
                                      VAR_0,
                                      VAR_2,
                                      VAR_1,
                                      VAR_13 != 0 ? &VAR_14 : ((void*)0),
                                      ((void*)0));

    if (VAR_18 == VAR_6)
    {
        FUNC_5(&VAR_11->Lock, &VAR_22);
        VAR_21 = FUNC_11(&VAR_11->ListHead);
        FUNC_0(VAR_21);
        if (FUNC_4(&VAR_11->ListHead))
            FUNC_6(&VAR_11->Event);
        FUNC_8(&VAR_11->Lock, VAR_22);

        VAR_20 = FUNC_1(VAR_21, VAR_3, VAR_4);
        VAR_19 = VAR_20->Message;
        FUNC_2(VAR_20);

        if (VAR_12)
            *VAR_12 = VAR_19;

        FUNC_7(&VAR_16);
        VAR_17 = VAR_16.QuadPart - VAR_15.QuadPart;
        VAR_17 /= 10000;

        return VAR_17;
    }
    else if (VAR_18 == VAR_7)
    {

        FUNC_10(VAR_5);


        FUNC_0(VAR_1);

        return 0;
    }

    return VAR_8;
}
