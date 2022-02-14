
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int source ;
struct TYPE_12__ {int Info; int MinorNum; int MajorNum; } ;
struct TYPE_14__ {int ProductName; int ProductFamily; int Manufacturer; int SupportedGroups; int ProtocolMinor; int ProtocolMajor; TYPE_1__ Version; } ;
struct TYPE_13__ {scalar_t__ ConditionCode; } ;
typedef scalar_t__ TW_UINT16 ;
typedef TYPE_2__ TW_STATUS ;
typedef TYPE_3__ TW_IDENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,int ,int ,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_6(TW_IDENTITY *VAR_15)
{
    TW_UINT16 VAR_16;
    TW_IDENTITY VAR_17;
    TW_STATUS VAR_18;
    int VAR_19 = 0;

    FUNC_1(&VAR_17, 0, sizeof(VAR_17));
    VAR_16 = FUNC_3(VAR_15, ((void*)0), VAR_1, VAR_0, VAR_4, &VAR_17);
    FUNC_0(VAR_15, ((void*)0), &VAR_18);
    FUNC_2( (VAR_16 == VAR_13 && VAR_18.ConditionCode == VAR_9) ||
        (VAR_16 == VAR_12 && VAR_18.ConditionCode == VAR_8),
            "Get first invalid condition code, rc %d, cc %d\n", VAR_16, VAR_18.ConditionCode);

    while (VAR_16 == VAR_13)
    {
        VAR_19++;
        FUNC_5("[Scanner %d|Version %d.%d(%s)|Protocol %d.%d|SupportedGroups 0x%x|Manufacturer %s|Family %s|ProductName %s]\n",
            VAR_19,
            VAR_17.Version.MajorNum, VAR_17.Version.MinorNum, VAR_17.Version.Info,
            VAR_17.ProtocolMajor, VAR_17.ProtocolMinor, VAR_17.SupportedGroups,
            VAR_17.Manufacturer, VAR_17.ProductFamily, VAR_17.ProductName);
        FUNC_1(&VAR_17, 0, sizeof(VAR_17));
        VAR_16 = FUNC_3(VAR_15, ((void*)0), VAR_1, VAR_0, VAR_5, &VAR_17);
        FUNC_0(VAR_15, ((void*)0), &VAR_18);
        FUNC_2(VAR_16 == VAR_13 || VAR_16 == VAR_11, "Get next source failed, rc %d, cc %d\n", VAR_16, VAR_18.ConditionCode);
    }

    FUNC_1(&VAR_17, 0, sizeof(VAR_17));
    VAR_16 = FUNC_3(VAR_15, ((void*)0), VAR_1, VAR_0, VAR_3, &VAR_17);
    FUNC_0(VAR_15, ((void*)0), &VAR_18);
    FUNC_2( (VAR_16 == VAR_13 && VAR_18.ConditionCode == VAR_9) ||
        (VAR_16 == VAR_12 && VAR_18.ConditionCode == VAR_8),
            "Get default invalid condition code, rc %d, cc %d\n", VAR_16, VAR_18.ConditionCode);


    if (VAR_16 == VAR_13 && VAR_18.ConditionCode == VAR_9 && VAR_14)
    {
        VAR_16 = FUNC_3(VAR_15, ((void*)0), VAR_1, VAR_0, VAR_6, &VAR_17);
        FUNC_0(VAR_15, ((void*)0), &VAR_18);

        if (VAR_16 == VAR_13 && VAR_18.ConditionCode == VAR_9)
        {
            VAR_16 = FUNC_3(VAR_15, ((void*)0), VAR_1, VAR_0, VAR_2, &VAR_17);
            FUNC_0(VAR_15, ((void*)0), &VAR_18);
            FUNC_2(VAR_16 == VAR_13, "Close DS Failed, rc %d, cc %d\n", VAR_16, VAR_18.ConditionCode);
        }
    }

    if (VAR_14)
    {
        FUNC_5("Interactive, so trying userselect\n");
        FUNC_1(&VAR_17, 0, sizeof(VAR_17));
        VAR_16 = FUNC_3(VAR_15, ((void*)0), VAR_1, VAR_0, VAR_7, &VAR_17);
        FUNC_0(VAR_15, ((void*)0), &VAR_18);
        FUNC_2(VAR_16 == VAR_13 || VAR_16 == VAR_10, "Userselect failed, rc %d, cc %d\n", VAR_16, VAR_18.ConditionCode);

        if (VAR_16 == VAR_13 && VAR_18.ConditionCode == VAR_9)
        {
            VAR_16 = FUNC_3(VAR_15, ((void*)0), VAR_1, VAR_0, VAR_6, &VAR_17);
            FUNC_0(VAR_15, ((void*)0), &VAR_18);
            if (VAR_16 == VAR_13 && VAR_18.ConditionCode == VAR_9)
            {
                FUNC_4(VAR_15, &VAR_17);
                VAR_16 = FUNC_3(VAR_15, ((void*)0), VAR_1, VAR_0, VAR_2, &VAR_17);
                FUNC_0(VAR_15, ((void*)0), &VAR_18);
                FUNC_2(VAR_16 == VAR_13, "Close DS Failed, rc %d, cc %d\n", VAR_16, VAR_18.ConditionCode);
            }
        }
    }

}
