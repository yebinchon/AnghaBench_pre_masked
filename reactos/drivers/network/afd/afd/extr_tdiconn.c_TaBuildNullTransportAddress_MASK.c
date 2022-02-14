
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int * PTRANSPORT_ADDRESS ;


 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;

PTRANSPORT_ADDRESS FUNC_4(UINT VAR_3)
{
    UINT VAR_4;
    PTRANSPORT_ADDRESS VAR_5;

    VAR_4 = FUNC_2(VAR_3);
    if (!VAR_4)
        return ((void*)0);

    VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_2);

    if (VAR_5)
    {
        if (FUNC_3(VAR_5, VAR_3) != VAR_1)
        {
            FUNC_1(VAR_5, VAR_2);
            return ((void*)0);
        }
    }

    return VAR_5;
}
