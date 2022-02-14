
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {size_t idLength; int* ids; } ;
typedef int BYTE ;
typedef TYPE_1__ AsnObjectIdentifier ;
typedef int AsnInteger32 ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (TYPE_1__*,TYPE_1__*,size_t) ;

__attribute__((used)) static AsnInteger32 FUNC_1(AsnObjectIdentifier *VAR_2,
    AsnObjectIdentifier *VAR_3, BYTE VAR_4, UINT *VAR_5, UINT *VAR_6)
{
    AsnInteger32 VAR_7 = VAR_0;

    switch (VAR_4)
    {
    case 128:
        if (FUNC_0(VAR_2, VAR_3, VAR_3->idLength) < 0)
        {
            *VAR_5 = 1;
            *VAR_6 = 1;
        }
        else if (!FUNC_0(VAR_2, VAR_3, VAR_3->idLength))
        {
            if (VAR_2->idLength == VAR_3->idLength ||
                VAR_2->idLength == VAR_3->idLength + 1)
            {



                *VAR_6 = 1;
                if (VAR_2->idLength == VAR_3->idLength + 1)
                    *VAR_5 = VAR_2->ids[VAR_3->idLength];
                else
                    *VAR_5 = 1;
            }
            else
            {
                *VAR_5 = VAR_2->ids[VAR_3->idLength];
                *VAR_6 = VAR_2->ids[VAR_3->idLength + 1] + 1;
            }
        }
        else
            VAR_7 = VAR_1;
        break;
    default:
        if (!FUNC_0(VAR_2, VAR_3, VAR_3->idLength))
        {
            if (VAR_2->idLength == VAR_3->idLength ||
                VAR_2->idLength == VAR_3->idLength + 1)
            {



                VAR_7 = VAR_1;
            }
            else
            {
                *VAR_5 = VAR_2->ids[VAR_3->idLength];
                *VAR_6 = VAR_2->ids[VAR_3->idLength + 1];
            }
        }
        else
            VAR_7 = VAR_1;
    }
    return VAR_7;
}
