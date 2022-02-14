
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ status_t ;
typedef int phy_speed_t ;
typedef int phy_duplex_t ;
typedef int ENET_Type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int,int ,int*) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

status_t FUNC_2(ENET_Type *VAR_10, uint32_t VAR_11, phy_speed_t *VAR_12, phy_duplex_t *VAR_13)
{
    FUNC_1(VAR_13);

    status_t VAR_14 = VAR_9;
    uint32_t VAR_15, VAR_16;


    VAR_14 = FUNC_0(VAR_10, VAR_11, VAR_0, &VAR_16);
    if (VAR_14 == VAR_9)
    {
        VAR_15 = VAR_16 & VAR_4;
        if ((VAR_3 == VAR_15) || (VAR_1 == VAR_15))
        {

            *VAR_13 = VAR_5;
        }
        else
        {

            *VAR_13 = VAR_6;
        }

        VAR_15 = VAR_16 & VAR_4;
        if ((VAR_2 == VAR_15) || (VAR_1 == VAR_15))
        {

            *VAR_12 = VAR_7;
        }
        else
        {
            *VAR_12 = VAR_8;
        }
    }

    return VAR_14;
}
