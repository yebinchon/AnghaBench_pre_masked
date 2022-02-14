
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPD3D9_DRIVERCAPS ;
typedef int HRESULT ;
typedef scalar_t__ D3DFORMAT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;

HRESULT FUNC_1(LPD3D9_DRIVERCAPS VAR_14, D3DFORMAT VAR_15, D3DFORMAT VAR_16, BOOL VAR_17)
{
    if (VAR_13 == FUNC_0(VAR_14, VAR_15, VAR_8 | VAR_6))
    {
        return VAR_0;
    }

    if (VAR_15 != VAR_16)
    {
        D3DFORMAT VAR_18 = VAR_15;

        if (VAR_15 == VAR_4)
        {
            VAR_15 = VAR_2;
        }
        else if (VAR_15 == VAR_3)
        {
            VAR_15 = VAR_1;
        }

        if (VAR_18 == VAR_16)
        {
            if (VAR_13 == FUNC_0(VAR_14, VAR_18, VAR_11))
            {
                return VAR_0;
            }

            return VAR_12;
        }
        else if (VAR_13 == VAR_17)
        {
            return VAR_0;
        }

        if (VAR_13 == FUNC_0(VAR_14, VAR_16, VAR_9) ||
            VAR_13 == FUNC_0(VAR_14, VAR_16, VAR_7) ||
            VAR_13 == FUNC_0(VAR_14, VAR_16, VAR_5))
        {
            return VAR_0;
        }
    }
    else
    {
        if (VAR_13 == FUNC_0(VAR_14, VAR_15, VAR_10))
        {
            return VAR_0;
        }
    }

    return VAR_12;
}
