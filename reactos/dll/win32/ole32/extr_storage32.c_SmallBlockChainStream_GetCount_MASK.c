
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int SmallBlockChainStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__*) ;

__attribute__((used)) static ULONG FUNC_3(SmallBlockChainStream* VAR_1)
{
    ULONG VAR_2;
    ULONG VAR_3 = 0;

    VAR_2 = FUNC_1(VAR_1);

    while(VAR_2 != VAR_0)
    {
        VAR_3++;

        if(FUNC_0(FUNC_2(VAR_1,
                        VAR_2, &VAR_2)))
            return 0;
    }

    return VAR_3;
}
