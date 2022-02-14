
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPD3D9_DRIVERCAPS ;
typedef int D3DFORMAT ;




 int VAR_0 ;



 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static D3DFORMAT FUNC_1(LPD3D9_DRIVERCAPS VAR_1, D3DFORMAT VAR_2)
{
    switch (VAR_2)
    {
    case 132:
    case 130:
    case 128:
    case 129:
        if (FUNC_0(VAR_1, VAR_2 - 1, 0))
            return VAR_2 - 1;
        break;

    case 131:
        if (FUNC_0(VAR_1, VAR_2, 0))
            return VAR_2;
        else
            return VAR_0;

    default:

        break;
    }

    return VAR_2;
}
