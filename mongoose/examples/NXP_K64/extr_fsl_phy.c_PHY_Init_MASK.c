
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ status_t ;
typedef int ENET_Type ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t,int) ;
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
 size_t VAR_10 ;
 scalar_t__ FUNC_3 (int *,size_t,int ,size_t*) ;
 size_t VAR_11 ;
 scalar_t__ FUNC_4 (int *,size_t,int ,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;

status_t FUNC_5(ENET_Type *VAR_15, uint32_t VAR_16, uint32_t VAR_17)
{
    uint32_t VAR_18;
    uint32_t VAR_19 = VAR_11;
    status_t VAR_20 = VAR_13;
    uint32_t VAR_21 = FUNC_1(VAR_15);


    FUNC_0(VAR_14[VAR_21]);
    FUNC_2(VAR_15, VAR_17, 0);


    VAR_20 = FUNC_4(VAR_15, VAR_16, VAR_5, VAR_8);
    if (VAR_20 == VAR_13)
    {

        VAR_20 = FUNC_4(VAR_15, VAR_16, VAR_4,
                           (VAR_0 | VAR_1 |
                            VAR_2 | VAR_3 | 0x1U));
        if (VAR_20 == VAR_13)
        {
            VAR_20 = FUNC_4(VAR_15, VAR_16, VAR_5,
                               (VAR_7 | VAR_9));
            if (VAR_20 == VAR_13)
            {

                while (VAR_19 --)
                {
                    VAR_20 = FUNC_3(VAR_15, VAR_16, VAR_6, &VAR_18);
                    if ( VAR_20 == VAR_13)
                    {
                        if ((VAR_18 & VAR_10) != 0)
                        {
                            break;
                        }
                    }

                    if (!VAR_19)
                    {
                        return VAR_12;
                    }
                }
            }
        }
    }

    return VAR_20;
}
