
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int orig_value ;
typedef int default_value ;
typedef int cap ;
struct TYPE_13__ {int Cap; int hContainer; void* ConType; } ;
struct TYPE_12__ {int member_1; int member_0; } ;
struct TYPE_11__ {scalar_t__ MinValue; scalar_t__ MaxValue; scalar_t__ StepSize; scalar_t__ CurrentValue; int DefaultValue; int ItemType; } ;
struct TYPE_10__ {scalar_t__ ConditionCode; } ;
typedef scalar_t__ TW_UINT32 ;
typedef int TW_UINT16 ;
typedef TYPE_1__ TW_STATUS ;
typedef TYPE_2__ TW_RANGE ;
typedef int TW_INT32 ;
typedef int TW_IDENTITY ;
typedef TYPE_3__ TW_FIX32 ;
typedef TYPE_4__ TW_CAPABILITY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int ,scalar_t__*,int*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__*,int) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 int FUNC_8 (int,char*,int,...) ;
 int FUNC_9 (int *,int *,int ,int ,int ,TYPE_4__*) ;
 int FUNC_10 (char*,int,int ,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(TW_IDENTITY *VAR_19, TW_IDENTITY *VAR_20, TW_UINT16 VAR_21, TW_INT32 VAR_22)
{
    TW_UINT16 VAR_23;
    TW_STATUS VAR_24;
    TW_CAPABILITY VAR_25;
    TW_UINT32 VAR_26;
    TW_UINT16 VAR_27;
    TW_INT32 VAR_28;
    TW_FIX32 VAR_29 = { 0, 0 };
    TW_UINT32 VAR_30 = 0;
    TW_FIX32 VAR_31 = { 0, 0 };

    FUNC_7(&VAR_25, 0, sizeof(VAR_25));
    VAR_25.Cap = VAR_21;
    VAR_25.ConType = VAR_9;

    VAR_23 = FUNC_9(VAR_19, VAR_20, VAR_1, VAR_0, VAR_5, &VAR_25);
    FUNC_4(VAR_19, VAR_20, &VAR_24);
    FUNC_8(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_8,
            "Error [rc %d|cc %d] doing MSG_QUERYSUPPORT for type 0x%x\n", VAR_23, VAR_24.ConditionCode, VAR_21);
    if (VAR_23 != VAR_17)
        return;
    FUNC_8(FUNC_5(VAR_25.hContainer, (TW_UINT32 *) &VAR_28, ((void*)0)), "Returned cap.hContainer invalid for QuerySupport on type 0x%x\n", VAR_21);
    FUNC_8((VAR_28 & VAR_22) == VAR_22,
            "Error:  minimum support 0x%x for type 0x%x, got 0x%x\n", VAR_22,
            VAR_21, VAR_28);


    if (VAR_28 & VAR_13)
    {
        FUNC_7(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_21;
        VAR_25.ConType = VAR_9;

        VAR_23 = FUNC_9(VAR_19, VAR_20, VAR_1, VAR_0, VAR_3, &VAR_25);
        FUNC_4(VAR_19, VAR_20, &VAR_24);
        FUNC_8(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_GETCURRENT for type 0x%x\n", VAR_23, VAR_24.ConditionCode, VAR_21);
        if (VAR_23 == VAR_17)
        {
            FUNC_5(VAR_25.hContainer, &VAR_26, &VAR_27);
            FUNC_8(VAR_27 == VAR_18, "GETCURRENT for RESOLUTION is not type FIX32, is type %d\n", VAR_27);
            FUNC_6(&VAR_29, &VAR_26, sizeof(VAR_29));
            FUNC_0(VAR_25.hContainer);
        }
    }

    if (VAR_28 & VAR_14)
    {
        FUNC_7(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_21;
        VAR_25.ConType = VAR_9;

        VAR_23 = FUNC_9(VAR_19, VAR_20, VAR_1, VAR_0, VAR_4, &VAR_25);
        FUNC_4(VAR_19, VAR_20, &VAR_24);
        FUNC_8(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_GETDEFAULT for type 0x%x\n", VAR_23, VAR_24.ConditionCode, VAR_21);
        if (VAR_23 == VAR_17)
        {
            FUNC_5(VAR_25.hContainer, &VAR_26, &VAR_27);
            FUNC_8(VAR_27 == VAR_18, "GETDEFAULT for RESOLUTION is not type FIX32, is type %d\n", VAR_27);
            FUNC_6(&VAR_31, &VAR_26, sizeof(VAR_31));
            FUNC_0(VAR_25.hContainer);
        }
    }

    if (VAR_28 & VAR_12)
    {
        FUNC_7(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_21;
        VAR_25.ConType = VAR_9;

        VAR_23 = FUNC_9(VAR_19, VAR_20, VAR_1, VAR_0, VAR_2, &VAR_25);
        FUNC_4(VAR_19, VAR_20, &VAR_24);
        FUNC_8(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_GET for type 0x%x\n", VAR_23, VAR_24.ConditionCode, VAR_21);
        if (VAR_23 == VAR_17)
        {
            TW_RANGE *VAR_32;
            FUNC_8(VAR_25.ConType == VAR_11, "MSG_GET for ICAP_[XY]RESOLUTION did not return TWON_RANGE, but %d\n", VAR_25.ConType);
            VAR_32 = FUNC_1(VAR_25.hContainer);
            FUNC_10("MSG_GET of 0x%x returned [ItemType %d|MinValue %d|MaxValue %d|StepSize %d|DefaultValue %d|CurrentValue %d]:\n",
                    VAR_25.Cap, VAR_32->ItemType, VAR_32->MinValue, VAR_32->MaxValue, VAR_32->StepSize,
                    VAR_32->DefaultValue, VAR_32->CurrentValue);
            for (VAR_30 = VAR_32->MinValue; VAR_30 < VAR_32->MaxValue; VAR_30 += VAR_32->StepSize)
                if (VAR_30 != VAR_32->CurrentValue)
                    break;
            FUNC_2(VAR_25.hContainer);
            FUNC_0(VAR_25.hContainer);
        }
    }

    if (VAR_28 & VAR_16)
    {
        FUNC_7(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_21;
        VAR_25.ConType = VAR_10;
        VAR_25.hContainer = FUNC_3(VAR_30, VAR_18);

        VAR_23 = FUNC_9(VAR_19, VAR_20, VAR_1, VAR_0, VAR_7, &VAR_25);
        FUNC_4(VAR_19, VAR_20, &VAR_24);
        FUNC_8(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_SET for type 0x%x\n", VAR_23, VAR_24.ConditionCode, VAR_21);
        FUNC_0(VAR_25.hContainer);

    }

    if (VAR_28 & VAR_15)
    {
        FUNC_7(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_21;
        VAR_25.ConType = VAR_9;

        VAR_23 = FUNC_9(VAR_19, VAR_20, VAR_1, VAR_0, VAR_6, &VAR_25);
        FUNC_4(VAR_19, VAR_20, &VAR_24);
        FUNC_8(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_RESET for type 0x%x\n", VAR_23, VAR_24.ConditionCode, VAR_21);
        if (VAR_23 == VAR_17)
            FUNC_0(VAR_25.hContainer);
    }
}
