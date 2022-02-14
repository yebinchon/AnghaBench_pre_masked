
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cap ;
struct TYPE_8__ {int hContainer; void* ConType; void* Cap; } ;
struct TYPE_7__ {int ConditionCode; } ;
typedef int TW_UINT32 ;
typedef int TW_UINT16 ;
typedef TYPE_1__ TW_STATUS ;
typedef int TW_INT32 ;
typedef int TW_IDENTITY ;
typedef TYPE_2__ TW_CAPABILITY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*,int,int ,int ,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (int ,int *,int*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,int *,int ,int ,int ,TYPE_2__*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9(TW_IDENTITY *VAR_20, TW_IDENTITY *VAR_21, TW_INT32 VAR_22)
{
    TW_UINT16 VAR_23;
    TW_STATUS VAR_24;
    TW_CAPABILITY VAR_25;
    TW_UINT32 VAR_26;
    TW_UINT16 VAR_27;
    TW_INT32 VAR_28;
    TW_UINT32 VAR_29 = VAR_18;
    TW_UINT32 VAR_30 = VAR_18;
    TW_UINT32 VAR_31 = VAR_18;


    FUNC_5(&VAR_25, 0, sizeof(VAR_25));
    VAR_25.Cap = VAR_2;
    VAR_25.ConType = VAR_10;

    VAR_23 = FUNC_7(VAR_20, VAR_21, VAR_1, VAR_0, VAR_6, &VAR_25);
    FUNC_3(VAR_20, VAR_21, &VAR_24);
    FUNC_6(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_9,
            "Error [rc %d|cc %d] doing MSG_QUERYSUPPORT for ICAP_SUPPORTEDSIZES\n", VAR_23, VAR_24.ConditionCode);
    if (VAR_23 != VAR_17)
        return;
    FUNC_6(FUNC_4(VAR_25.hContainer, (TW_UINT32 *) &VAR_28, ((void*)0)), "Returned cap.hContainer invalid for QuerySupport on ICAP_SUPPORTEDSIZES\n");
    FUNC_6((VAR_28 & VAR_22) == VAR_22,
            "Error:  minimum support 0x%x for ICAP_SUPPORTEDSIZES, got 0x%x\n", VAR_22, VAR_28);

    if (VAR_28 & VAR_13)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_2;
        VAR_25.ConType = VAR_10;

        VAR_23 = FUNC_7(VAR_20, VAR_21, VAR_1, VAR_0, VAR_4, &VAR_25);
        FUNC_3(VAR_20, VAR_21, &VAR_24);
        FUNC_6(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_9,
                "Error [rc %d|cc %d] doing MSG_GETCURRENT for ICAP_SUPPORTEDSIZES\n", VAR_23, VAR_24.ConditionCode);
        if (VAR_23 == VAR_17)
        {
            FUNC_4(VAR_25.hContainer, &VAR_26, &VAR_27);
            FUNC_6(VAR_27 == VAR_19, "GETCURRENT for ICAP_SUPPORTEDSIZES is not type UINT16, is type %d\n", VAR_27);
            FUNC_8("Current size is %d\n", VAR_26);
            FUNC_0(VAR_25.hContainer);
            VAR_29 = VAR_26;
        }
    }

    if (VAR_28 & VAR_14)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_2;
        VAR_25.ConType = VAR_10;

        VAR_23 = FUNC_7(VAR_20, VAR_21, VAR_1, VAR_0, VAR_5, &VAR_25);
        FUNC_3(VAR_20, VAR_21, &VAR_24);
        FUNC_6(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_9,
                "Error [rc %d|cc %d] doing MSG_GETDEFAULT for ICAP_SUPPORTEDSIZES\n", VAR_23, VAR_24.ConditionCode);
        if (VAR_23 == VAR_17)
        {
            FUNC_4(VAR_25.hContainer, &VAR_26, &VAR_27);
            FUNC_6(VAR_27 == VAR_19, "GETDEFAULT for PHYSICALXXX is not type TWTY_UINT16, is type %d\n", VAR_27);
            FUNC_8("Default size is %d\n", VAR_26);
            FUNC_0(VAR_25.hContainer);
            VAR_30 = VAR_26;
        }
    }

    if (VAR_28 & VAR_12)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_2;
        VAR_25.ConType = VAR_10;

        VAR_23 = FUNC_7(VAR_20, VAR_21, VAR_1, VAR_0, VAR_3, &VAR_25);
        FUNC_3(VAR_20, VAR_21, &VAR_24);
        FUNC_6(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_9,
                "Error [rc %d|cc %d] doing MSG_GET for ICAP_SUPPORTEDSIZES\n", VAR_23, VAR_24.ConditionCode);
        FUNC_2(&VAR_25, VAR_28, VAR_29, VAR_30, &VAR_31);
    }

    if (VAR_28 & VAR_16)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_2;
        VAR_25.ConType = VAR_11;
        VAR_25.hContainer = FUNC_1(VAR_31, VAR_19);

        VAR_23 = FUNC_7(VAR_20, VAR_21, VAR_1, VAR_0, VAR_8, &VAR_25);
        FUNC_3(VAR_20, VAR_21, &VAR_24);
        FUNC_6(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_9,
                "Error [rc %d|cc %d] doing MSG_SET for ICAP_SUPPORTEDSIZES\n", VAR_23, VAR_24.ConditionCode);
        FUNC_0(VAR_25.hContainer);

    }

    if (VAR_28 & VAR_15)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_2;
        VAR_25.ConType = VAR_10;

        VAR_23 = FUNC_7(VAR_20, VAR_21, VAR_1, VAR_0, VAR_7, &VAR_25);
        FUNC_3(VAR_20, VAR_21, &VAR_24);
        FUNC_6(VAR_23 == VAR_17 && VAR_24.ConditionCode == VAR_9,
                "Error [rc %d|cc %d] doing MSG_RESET for ICAP_SUPPORTEDSIZES\n", VAR_23, VAR_24.ConditionCode);
        if (VAR_23 == VAR_17)
            FUNC_0(VAR_25.hContainer);
    }
}
