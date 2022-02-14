
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ status_t ;
typedef scalar_t__ phy_loop_t ;
typedef int ENET_Type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int,int ,int*) ;
 scalar_t__ FUNC_1 (int *,int,int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

status_t FUNC_2(ENET_Type *VAR_6, uint32_t VAR_7, phy_loop_t VAR_8, bool VAR_9)
{
    status_t VAR_10;
    uint32_t VAR_11 = 0;


    if (VAR_9)
    {
        if (VAR_8 == VAR_4)
        {

            VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_0, &VAR_11);
            if (VAR_10 == VAR_5)
            {
                return FUNC_1(VAR_6, VAR_7, VAR_0, (VAR_11 | VAR_1));
            }
        }
        else
        {

            VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_2, &VAR_11);
            if (VAR_10 == VAR_5)
            {
                return FUNC_1(VAR_6, VAR_7, VAR_2, (VAR_11 | VAR_3));
            }
        }
    }
    else
    {

        if (VAR_8 == VAR_4)
        {

            VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_0, &VAR_11);
            if (VAR_10 == VAR_5)
            {
                return FUNC_1(VAR_6, VAR_7, VAR_0, (VAR_11 & ~VAR_1));
            }
        }
        else
        {

            VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_2, &VAR_11);
            if (VAR_10 == VAR_5)
            {
                return FUNC_1(VAR_6, VAR_7, VAR_2, (VAR_11 & ~VAR_3));
            }
        }
    }
    return VAR_10;
}
