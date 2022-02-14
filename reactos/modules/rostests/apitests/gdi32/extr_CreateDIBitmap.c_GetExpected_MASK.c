
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ biSize; } ;
struct TYPE_10__ {scalar_t__ biSize; TYPE_1__ bmiHeader; } ;
typedef TYPE_2__ VOID ;
typedef int UINT ;
typedef scalar_t__ HDC ;
typedef int DWORD ;
typedef int BOOL ;
typedef TYPE_2__ BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ const* VAR_6 ;
 int VAR_7 ;

BOOL
FUNC_0(
    DWORD *VAR_8,
    HDC VAR_9,
    const BITMAPINFOHEADER *VAR_10,
    DWORD VAR_11,
    const VOID *VAR_12,
    const BITMAPINFO *VAR_13,
    UINT VAR_14)
{
    if (VAR_14 > 2)
    {
        *VAR_8 = VAR_4;
        return VAR_5;
    }

    if (VAR_14 != VAR_3)
    {
        if (VAR_9 == (HDC)-1)
        {
            return VAR_5;
        }
    }

    if (VAR_11 & VAR_1)
    {
        if (!VAR_10)
        {
            if (!VAR_12 || (VAR_12 == VAR_6)) return VAR_5;
        }
        else
        {
            if (VAR_12)
            {
                if (VAR_12 == VAR_6) return VAR_5;
                if (!VAR_13 || (VAR_13 == VAR_6)) return VAR_5;
                if (VAR_13->bmiHeader.biSize == 0) return VAR_5;
                if (VAR_14 == 2) return VAR_5;
            }
        }
    }


    if (VAR_11 & VAR_0)
    {
        if (VAR_14 == 2) return VAR_5;
        if ((VAR_14 == VAR_2) && !VAR_9)
        {
            return VAR_5;
        }

        if (VAR_11 & VAR_1)
        {
            if (!VAR_12 || (VAR_12 == VAR_6)) return VAR_5;
        }

        if ((!VAR_13) || (VAR_13 == VAR_6) || (VAR_13->bmiHeader.biSize == 0))
        {
            return VAR_5;
        }
    }
    else
    {

        if ((VAR_10 == ((void*)0)) ||
            (VAR_10 == VAR_6) ||
            (VAR_10->biSize == 0))
        {
            return VAR_5;
        }

        if (VAR_9 == (HDC)-1)
        {
            *VAR_8 = VAR_4;
            return VAR_5;
        }


        if (VAR_13 == VAR_6) return VAR_5;
    }

    return VAR_7;
}
