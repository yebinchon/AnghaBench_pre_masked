
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ status_t ;
typedef int ENET_Type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int ,int*) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_2 ;

status_t FUNC_2(ENET_Type *VAR_3, uint32_t VAR_4, bool *VAR_5)
{
    FUNC_1(VAR_5);

    status_t VAR_6 = VAR_2;
    uint32_t VAR_7;


    VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_0, &VAR_7);
    if (VAR_6 == VAR_2)
    {
        if (!(VAR_1 & VAR_7))
        {

            *VAR_5 = 0;
        }
        else
        {

            *VAR_5 = 1;
        }
    }
    return VAR_6;
}
