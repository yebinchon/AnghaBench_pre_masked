
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int szMessage ;
typedef int WPARAM ;
struct TYPE_8__ {TYPE_2__* DischargePolicy; } ;
struct TYPE_9__ {TYPE_3__ user; } ;
struct TYPE_6__ {int EventCode; scalar_t__ Action; } ;
struct TYPE_7__ {TYPE_1__ PowerPolicy; int * BatteryLevel; scalar_t__ Enable; } ;
typedef int TCHAR ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (int *,int *,int *,...) ;
 TYPE_4__ VAR_30 ;
 int VAR_31 ;
 int FUNC_9 (int *,int,int) ;

__attribute__((used)) static BOOLEAN
FUNC_10(HWND VAR_32)
{
    TCHAR VAR_33[VAR_23];
    TCHAR VAR_34[VAR_23];
    TCHAR VAR_35[VAR_23];
    TCHAR VAR_36[VAR_23];
    TCHAR VAR_37[VAR_23];
    TCHAR VAR_38[VAR_23];
    TCHAR VAR_39[VAR_23];

    if (!FUNC_4(&VAR_30))
    {
        return VAR_4;
    }

    if (VAR_30.user.DischargePolicy[VAR_3].Enable)
    {
        FUNC_0(VAR_32, VAR_5,
            VAR_30.user.DischargePolicy[VAR_3].Enable ? VAR_0 : VAR_1);

        if (FUNC_2(VAR_31, VAR_18, VAR_37, VAR_23))
        {
            FUNC_8(VAR_38, VAR_37, VAR_30.user.DischargePolicy[VAR_3].BatteryLevel);
            FUNC_6(VAR_32, VAR_15, VAR_38);
        }

        FUNC_5(VAR_32, VAR_9,
            VAR_27,
            (WPARAM)VAR_29,
            (LPARAM)FUNC_3(0, 100));
        FUNC_5(VAR_32, VAR_9,
            VAR_28,
            (WPARAM)VAR_29,
            (LPARAM)20);
        FUNC_5(VAR_32, VAR_9,
            VAR_26,
            (WPARAM)VAR_29,
            (LPARAM)VAR_30.user.DischargePolicy[VAR_3].BatteryLevel);

        if (FUNC_2(VAR_31, VAR_30.user.DischargePolicy[VAR_3].PowerPolicy.Action+VAR_19, VAR_33, VAR_23))
        {
            FUNC_6(VAR_32, VAR_7, VAR_33);
        }

        FUNC_9(VAR_36, 0x0, sizeof(VAR_36));
        FUNC_2(VAR_31, VAR_17, VAR_36, VAR_23);

        if (FUNC_1(VAR_30.user.DischargePolicy[VAR_3].PowerPolicy.EventCode) & VAR_25)
        {
            if (FUNC_1(VAR_30.user.DischargePolicy[VAR_3].PowerPolicy.EventCode) & VAR_24)
            {
                if (FUNC_2(VAR_31, VAR_21, VAR_35, VAR_23) && FUNC_2(VAR_31, VAR_22, VAR_34, VAR_23))
                {
                    FUNC_8(VAR_36,FUNC_7("%s, %s"),VAR_35,VAR_34);
                }
            }
            else
            {
                if (FUNC_2(VAR_31, VAR_22, VAR_34, VAR_23))
                {
                    FUNC_8(VAR_36,FUNC_7("%s"),VAR_34);
                }
            }
        }
        else
        {
            if (FUNC_1(VAR_30.user.DischargePolicy[VAR_3].PowerPolicy.EventCode) & VAR_24)
            {
                if (FUNC_2(VAR_31, VAR_21, VAR_35, VAR_23))
                {
                    FUNC_8(VAR_36,FUNC_7("%s"),VAR_35);
                }
            }
        }

        FUNC_6(VAR_32, VAR_11, VAR_36);

        if (FUNC_2(VAR_31, VAR_20, VAR_39, VAR_23))
        {
            FUNC_6(VAR_32, VAR_13, VAR_39);
        }
    }

    if (VAR_30.user.DischargePolicy[VAR_2].Enable)
    {
        FUNC_0(VAR_32, VAR_6,
            VAR_30.user.DischargePolicy[VAR_2].Enable ? VAR_0 : VAR_1);

        if (FUNC_2(VAR_31, VAR_18, VAR_37, VAR_23))
        {
            FUNC_8(VAR_38, VAR_37, VAR_30.user.DischargePolicy[VAR_2].BatteryLevel);
            FUNC_6(VAR_32, VAR_16, VAR_38);
        }

        FUNC_5(VAR_32, VAR_10,
            VAR_27,
            (WPARAM)VAR_29,
            (LPARAM)FUNC_3(0, 100));
        FUNC_5(VAR_32, VAR_10,
            VAR_26,
            (WPARAM)VAR_29,
            (LPARAM)VAR_30.user.DischargePolicy[VAR_2].BatteryLevel);

        if (FUNC_2(VAR_31, VAR_30.user.DischargePolicy[VAR_2].PowerPolicy.Action+VAR_19, VAR_33, VAR_23))
        {
            FUNC_6(VAR_32, VAR_8, VAR_33);
        }

        FUNC_9(VAR_36, 0x0, sizeof(VAR_36));
        FUNC_2(VAR_31, VAR_17, VAR_36, VAR_23);

        if (FUNC_1(VAR_30.user.DischargePolicy[VAR_2].PowerPolicy.EventCode) & VAR_25)
        {
            if (FUNC_1(VAR_30.user.DischargePolicy[VAR_2].PowerPolicy.EventCode) & VAR_24)
            {
                if (FUNC_2(VAR_31, VAR_22, VAR_34, VAR_23) && FUNC_2(VAR_31, VAR_21, VAR_35, VAR_23))
                {
                    FUNC_8(VAR_36,FUNC_7("%s, %s"),VAR_35,VAR_34);
                }
            }
            else
            {
                if (FUNC_2(VAR_31, VAR_22, VAR_34, VAR_23))
                {
                    FUNC_8(VAR_36,FUNC_7("%s"),VAR_34);
                }
            }
        }
        else
        {
            if (FUNC_1(VAR_30.user.DischargePolicy[VAR_2].PowerPolicy.EventCode) & VAR_24)
            {
                if (FUNC_2(VAR_31, VAR_21, VAR_35, VAR_23))
                {
                    FUNC_8(VAR_36,FUNC_7("%s"),VAR_35);
                }
            }
        }

        FUNC_6(VAR_32, VAR_12, VAR_36);

        if (FUNC_2(VAR_31, VAR_20, VAR_39, VAR_23))
        {
            FUNC_6(VAR_32, VAR_14, VAR_39);
        }
    }

    return VAR_29;
}
