
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bt; } ;
struct TYPE_6__ {int forecol; int backcol; } ;
struct TYPE_5__ {int color; } ;
typedef TYPE_1__ GpSolidFill ;
typedef TYPE_2__ GpHatch ;
typedef TYPE_3__ GpBrush ;
typedef int BOOL ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(GpBrush *VAR_2, BOOL VAR_3)
{
    switch (VAR_2->bt)
    {
    case 129:
    {
        if (VAR_3)
            return VAR_1;
        else
        {

            return (((GpSolidFill*)VAR_2)->color & 0xff000000) == 0xff000000;
        }
    }
    case 131:
    {
        GpHatch *VAR_4 = (GpHatch*)VAR_2;
        return ((VAR_4->forecol & 0xff000000) == 0xff000000) &&
               ((VAR_4->backcol & 0xff000000) == 0xff000000);
    }
    case 130:
    case 128:

    default:
        return VAR_0;
    }
}
