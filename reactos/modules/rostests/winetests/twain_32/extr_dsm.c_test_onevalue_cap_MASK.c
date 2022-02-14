
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cap ;
struct TYPE_8__ {int Cap; int hContainer; void* ConType; } ;
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*,int,int ,int ,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (int ,int *,int*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (int *,int *,int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(TW_IDENTITY *VAR_17, TW_IDENTITY *VAR_18, TW_UINT16 VAR_19, TW_UINT16 VAR_20, TW_INT32 VAR_21)
{
    TW_UINT16 VAR_22;
    TW_UINT16 VAR_23;
    TW_STATUS VAR_24;
    TW_CAPABILITY VAR_25;
    TW_UINT32 VAR_26 = 0;
    TW_UINT32 VAR_27;
    TW_UINT32 VAR_28 = 0;
    TW_INT32 VAR_29;

    FUNC_5(&VAR_25, 0, sizeof(VAR_25));
    VAR_25.Cap = VAR_19;
    VAR_25.ConType = VAR_9;

    VAR_22 = FUNC_7(VAR_17, VAR_18, VAR_1, VAR_0, VAR_5, &VAR_25);
    FUNC_3(VAR_17, VAR_18, &VAR_24);
    FUNC_6(VAR_22 == VAR_16 && VAR_24.ConditionCode == VAR_8,
            "Error [rc %d|cc %d] doing MSG_QUERYSUPPORT for type 0x%x\n", VAR_22, VAR_24.ConditionCode, VAR_19);
    if (VAR_22 != VAR_16)
        return;
    FUNC_6(FUNC_4(VAR_25.hContainer, (TW_UINT32 *) &VAR_29, ((void*)0)), "Returned cap.hContainer invalid for QuerySupport on type 0x%x\n", VAR_19);
    FUNC_6((VAR_29 & VAR_21) == VAR_21,
            "Error:  minimum support 0x%x for type 0x%x, got 0x%x\n", VAR_21,
            VAR_19, VAR_29);


    if (VAR_29 & VAR_12)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_19;
        VAR_25.ConType = VAR_9;

        VAR_22 = FUNC_7(VAR_17, VAR_18, VAR_1, VAR_0, VAR_3, &VAR_25);
        FUNC_3(VAR_17, VAR_18, &VAR_24);
        FUNC_6(VAR_22 == VAR_16 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_GETCURRENT for type 0x%x\n", VAR_22, VAR_24.ConditionCode, VAR_19);
        if (VAR_22 == VAR_16)
        {
            FUNC_6(FUNC_4(VAR_25.hContainer, &VAR_26, &VAR_23), "Returned cap.hContainer invalid for GETCURRENT on type 0x%x\n", VAR_19);
            FUNC_6(VAR_23 == VAR_20, "Returned GETCURRENT type 0x%x for cap 0x%x is not expected 0x%x\n", VAR_23, VAR_19, VAR_20);
            FUNC_0(VAR_25.hContainer);
        }
    }

    if (VAR_29 & VAR_13)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_19;
        VAR_25.ConType = VAR_9;

        VAR_22 = FUNC_7(VAR_17, VAR_18, VAR_1, VAR_0, VAR_4, &VAR_25);
        FUNC_3(VAR_17, VAR_18, &VAR_24);
        FUNC_6(VAR_22 == VAR_16 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_GETDEFAULT for type 0x%x\n", VAR_22, VAR_24.ConditionCode, VAR_19);
        if (VAR_22 == VAR_16)
        {
            FUNC_6(FUNC_4(VAR_25.hContainer, &VAR_28, &VAR_23), "Returned cap.hContainer invalid for GETDEFAULT on type 0x%x\n", VAR_19);
            FUNC_6(VAR_23 == VAR_20, "Returned GETDEFAULT type 0x%x for cap 0x%x is not expected 0x%x\n", VAR_23, VAR_19, VAR_20);
            FUNC_0(VAR_25.hContainer);
        }
    }

    VAR_27 = VAR_26;
    if (VAR_29 & VAR_11)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_19;
        VAR_25.ConType = VAR_9;

        VAR_22 = FUNC_7(VAR_17, VAR_18, VAR_1, VAR_0, VAR_2, &VAR_25);
        FUNC_3(VAR_17, VAR_18, &VAR_24);
        FUNC_6(VAR_22 == VAR_16 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_GET for type 0x%x\n", VAR_22, VAR_24.ConditionCode, VAR_19);
        FUNC_2(&VAR_25, VAR_29, VAR_26, VAR_28, &VAR_27);
        if (VAR_22 == VAR_16)
            FUNC_0(VAR_25.hContainer);
    }

    if (VAR_29 & VAR_15)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_19;
        VAR_25.ConType = VAR_10;
        VAR_25.hContainer = FUNC_1(VAR_27, VAR_20);

        VAR_22 = FUNC_7(VAR_17, VAR_18, VAR_1, VAR_0, VAR_7, &VAR_25);
        FUNC_3(VAR_17, VAR_18, &VAR_24);
        FUNC_6(VAR_22 == VAR_16 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_SET for type 0x%x\n", VAR_22, VAR_24.ConditionCode, VAR_19);
        FUNC_0(VAR_25.hContainer);
    }

    if (VAR_29 & VAR_14)
    {
        FUNC_5(&VAR_25, 0, sizeof(VAR_25));
        VAR_25.Cap = VAR_19;
        VAR_25.ConType = VAR_9;

        VAR_22 = FUNC_7(VAR_17, VAR_18, VAR_1, VAR_0, VAR_6, &VAR_25);
        FUNC_3(VAR_17, VAR_18, &VAR_24);
        FUNC_6(VAR_22 == VAR_16 && VAR_24.ConditionCode == VAR_8,
                "Error [rc %d|cc %d] doing MSG_RESET for type 0x%x\n", VAR_22, VAR_24.ConditionCode, VAR_19);
        if (VAR_22 == VAR_16)
            FUNC_0(VAR_25.hContainer);
    }
}
