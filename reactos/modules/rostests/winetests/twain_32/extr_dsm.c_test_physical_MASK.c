
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cap ;
struct TYPE_7__ {int hContainer; void* ConType; void* Cap; } ;
struct TYPE_6__ {scalar_t__ ConditionCode; } ;
typedef int TW_UINT32 ;
typedef void* TW_UINT16 ;
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
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int ,int *,void**) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int,char*,void*,...) ;
 void* FUNC_5 (int *,int *,int ,int ,int ,TYPE_2__*) ;
 int FUNC_6 (char*,void*,int ) ;

__attribute__((used)) static void FUNC_7(TW_IDENTITY *VAR_13, TW_IDENTITY *VAR_14, TW_UINT16 VAR_15, TW_INT32 VAR_16)
{
    TW_UINT16 VAR_17;
    TW_STATUS VAR_18;
    TW_CAPABILITY VAR_19;
    TW_UINT32 VAR_20;
    TW_UINT16 VAR_21;
    TW_INT32 VAR_22;

    FUNC_3(&VAR_19, 0, sizeof(VAR_19));
    VAR_19.Cap = VAR_15;
    VAR_19.ConType = VAR_7;

    VAR_17 = FUNC_5(VAR_13, VAR_14, VAR_1, VAR_0, VAR_5, &VAR_19);
    FUNC_1(VAR_13, VAR_14, &VAR_18);
    FUNC_4(VAR_17 == VAR_11 && VAR_18.ConditionCode == VAR_6,
            "Error [rc %d|cc %d] doing MSG_QUERYSUPPORT for type 0x%x\n", VAR_17, VAR_18.ConditionCode, VAR_15);
    if (VAR_17 != VAR_11)
        return;
    FUNC_4(FUNC_2(VAR_19.hContainer, (TW_UINT32 *) &VAR_22, ((void*)0)), "Returned cap.hContainer invalid for QuerySupport on type 0x%x\n", VAR_15);
    FUNC_4((VAR_22 & VAR_16) == VAR_16,
            "Error:  minimum support 0x%x for type 0x%x, got 0x%x\n", VAR_16,
            VAR_15, VAR_22);


    if (VAR_22 & VAR_9)
    {
        FUNC_3(&VAR_19, 0, sizeof(VAR_19));
        VAR_19.Cap = VAR_15;
        VAR_19.ConType = VAR_7;

        VAR_17 = FUNC_5(VAR_13, VAR_14, VAR_1, VAR_0, VAR_3, &VAR_19);
        FUNC_1(VAR_13, VAR_14, &VAR_18);
        FUNC_4(VAR_17 == VAR_11 && VAR_18.ConditionCode == VAR_6,
                "Error [rc %d|cc %d] doing MSG_GETCURRENT for type 0x%x\n", VAR_17, VAR_18.ConditionCode, VAR_15);
        if (VAR_17 == VAR_11)
        {
            FUNC_2(VAR_19.hContainer, &VAR_20, &VAR_21);
            FUNC_4(VAR_21 == VAR_12, "GETCURRENT for PHYSICALXXX is not type FIX32, is type %d\n", VAR_21);
            FUNC_0(VAR_19.hContainer);
        }
    }

    if (VAR_22 & VAR_10)
    {
        FUNC_3(&VAR_19, 0, sizeof(VAR_19));
        VAR_19.Cap = VAR_15;
        VAR_19.ConType = VAR_7;

        VAR_17 = FUNC_5(VAR_13, VAR_14, VAR_1, VAR_0, VAR_4, &VAR_19);
        FUNC_1(VAR_13, VAR_14, &VAR_18);
        FUNC_4(VAR_17 == VAR_11 && VAR_18.ConditionCode == VAR_6,
                "Error [rc %d|cc %d] doing MSG_GETDEFAULT for type 0x%x\n", VAR_17, VAR_18.ConditionCode, VAR_15);
        if (VAR_17 == VAR_11)
        {
            FUNC_2(VAR_19.hContainer, &VAR_20, &VAR_21);
            FUNC_4(VAR_21 == VAR_12, "GETDEFAULT for PHYSICALXXX is not type FIX32, is type %d\n", VAR_21);
            FUNC_0(VAR_19.hContainer);
        }
    }

    if (VAR_22 & VAR_8)
    {
        FUNC_3(&VAR_19, 0, sizeof(VAR_19));
        VAR_19.Cap = VAR_15;
        VAR_19.ConType = VAR_7;

        VAR_17 = FUNC_5(VAR_13, VAR_14, VAR_1, VAR_0, VAR_2, &VAR_19);
        FUNC_1(VAR_13, VAR_14, &VAR_18);
        FUNC_4(VAR_17 == VAR_11 && VAR_18.ConditionCode == VAR_6,
                "Error [rc %d|cc %d] doing MSG_GET for type 0x%x\n", VAR_17, VAR_18.ConditionCode, VAR_15);
        if (VAR_17 == VAR_11)
        {
            FUNC_2(VAR_19.hContainer, &VAR_20, &VAR_21);
            FUNC_4(VAR_21 == VAR_12, "GET for PHYSICALXXX is not type FIX32, is type %d\n", VAR_21);
            FUNC_6("GET for Physical type 0x%x returns 0x%x\n", VAR_15, VAR_20);
            FUNC_0(VAR_19.hContainer);
        }
    }

}
