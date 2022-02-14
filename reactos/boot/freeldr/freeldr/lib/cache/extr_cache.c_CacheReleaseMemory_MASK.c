
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {int BlockSize; int BytesPerSector; } ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,scalar_t__) ;

BOOLEAN FUNC_2(ULONG VAR_3)
{
    ULONG VAR_4;

    FUNC_1("CacheReleaseMemory() MinimumAmountToRelease = %d\n", VAR_3);


    if (VAR_1 == VAR_2)
    {
        return VAR_2;
    }


    for (VAR_4=0; VAR_4<VAR_3; )
    {


        if (!FUNC_0(&VAR_0))
        {
            break;
        }


        VAR_4 += VAR_0.BlockSize * VAR_0.BytesPerSector;
    }


    return (VAR_4 >= VAR_3);
}
