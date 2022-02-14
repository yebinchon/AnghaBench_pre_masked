
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef int UCHAR ;
struct TYPE_4__ {int Extra; void* VertCounter; void* HorzCounter; int Flags; } ;
typedef TYPE_1__* PMOUSE_PACKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
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
 int FUNC_1 () ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static VOID FUNC_5(PMOUSE_PACKET VAR_23)
{

    FUNC_3(VAR_23, sizeof(*VAR_23));


    FUNC_4(VAR_19, VAR_6);

    VAR_23->Flags |= VAR_9;


    if (VAR_5 < 0)
    {
        VAR_23->Flags |= VAR_15;
        VAR_5 = -VAR_5;
    }

    if (VAR_22 < 0)
    {
        VAR_23->Flags |= VAR_17;
        VAR_22 = -VAR_22;
    }


    if (VAR_5 > VAR_11)
    {
        VAR_5 = VAR_11;
        VAR_23->Flags |= VAR_14;
    }


    if (VAR_22 > VAR_11)
    {
        VAR_22 = VAR_11;
        VAR_23->Flags |= VAR_16;
    }


    if (VAR_0 & VAR_1) VAR_23->Flags |= VAR_10;
    if (VAR_0 & VAR_2) VAR_23->Flags |= VAR_12;
    if (VAR_0 & VAR_20) VAR_23->Flags |= VAR_13;

    if (VAR_18 == 4)
    {
        if (VAR_0 & VAR_3) VAR_23->Extra |= VAR_7;
        if (VAR_0 & VAR_4) VAR_23->Extra |= VAR_8;
    }

    if (VAR_18 >= 3)
    {

        VAR_23->Extra |= ((UCHAR)VAR_21 & 0x0F);
    }


    VAR_23->HorzCounter = FUNC_0(VAR_5);
    VAR_23->VertCounter = FUNC_0(VAR_22);


    FUNC_1();


    FUNC_2(VAR_19);
}
