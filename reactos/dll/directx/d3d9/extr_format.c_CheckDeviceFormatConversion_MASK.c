
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ DevCaps2; } ;
struct TYPE_6__ {TYPE_1__ DriverCaps9; } ;
typedef TYPE_2__* LPD3D9_DRIVERCAPS ;
typedef int HRESULT ;
typedef scalar_t__ D3DFORMAT ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

HRESULT FUNC_3(LPD3D9_DRIVERCAPS VAR_5, D3DFORMAT VAR_6, D3DFORMAT VAR_7)
{
    D3DFORMAT VAR_8;
    D3DFORMAT VAR_9;

    VAR_8 = FUNC_2(VAR_6);
    VAR_9 = FUNC_2(VAR_7);

    if (VAR_8 == VAR_9)
    {
        return VAR_3;
    }

    if (VAR_4 == FUNC_0(VAR_6))
    {
        switch (VAR_6)
        {
        case 131:
        case 128:
        case 130:
        case 129:
        case 133:
        case 132:

            break;

        default:
            return VAR_0;
        }
    }
    else if (VAR_5->DriverCaps9.DevCaps2 == 0)
    {
        return VAR_3;
    }

    if (VAR_4 == FUNC_1(VAR_5, VAR_6, VAR_2) ||
        VAR_4 == FUNC_1(VAR_5, VAR_7, VAR_1))
    {
        return VAR_0;
    }

    return VAR_3;
}
