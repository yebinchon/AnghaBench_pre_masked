
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int status_t ;
typedef int ENET_Type ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

status_t FUNC_3(ENET_Type *VAR_5, uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
    uint32_t VAR_9;


    FUNC_0(VAR_5, VAR_0);


    FUNC_2(VAR_5, VAR_6, VAR_7, VAR_2, VAR_8);


    for (VAR_9 = VAR_1; VAR_9 > 0; VAR_9--)
    {
        if (FUNC_1(VAR_5) & VAR_0)
        {
            break;
        }
    }


    if (!VAR_9)
    {
        return VAR_3;
    }


    FUNC_0(VAR_5, VAR_0);

    return VAR_4;
}
