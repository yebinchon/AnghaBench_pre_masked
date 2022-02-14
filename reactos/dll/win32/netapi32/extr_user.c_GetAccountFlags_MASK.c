
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int Mask; } ;
typedef int * PACL ;
typedef TYPE_1__* PACCESS_ALLOWED_ACE ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,TYPE_1__**) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static
ULONG
FUNC_2(ULONG VAR_23,
                PACL VAR_24)
{
    PACCESS_ALLOWED_ACE VAR_25 = ((void*)0);
    ULONG VAR_26 = VAR_8;
    NTSTATUS VAR_27;

    if (VAR_24 != ((void*)0))
    {
        VAR_27 = FUNC_0(VAR_24, &VAR_25);
        if (FUNC_1(VAR_27))
        {
            if (VAR_25 == ((void*)0))
            {
                VAR_26 |= VAR_6;
            }
            else if ((VAR_25->Mask & VAR_14) == 0)
            {
                VAR_26 |= VAR_6;
            }
        }
    }

    if (VAR_23 & VAR_13)
        VAR_26 |= VAR_0;

    if (VAR_23 & VAR_16)
        VAR_26 |= VAR_2;

    if (VAR_23 & VAR_19)
        VAR_26 |= VAR_7;

    if (VAR_23 & VAR_12)
        VAR_26 |= VAR_4;

    if (VAR_23 & VAR_15)
        VAR_26 |= VAR_1;
    if (VAR_23 & VAR_21)
        VAR_26 |= VAR_10;
    else if (VAR_23 & VAR_18)
        VAR_26 |= VAR_5;
    else if (VAR_23 & VAR_17)
        VAR_26 |= VAR_3;
    else if (VAR_23 & VAR_22)
        VAR_26 |= VAR_11;
    else if (VAR_23 & VAR_20)
        VAR_26 |= VAR_9;

    return VAR_26;
}
