
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int bt; } ;
struct TYPE_10__ {int forecol; } ;
struct TYPE_9__ {int startcolor; } ;
struct TYPE_8__ {int centercolor; } ;
struct TYPE_7__ {int color; } ;
typedef TYPE_1__ GpSolidFill ;
typedef TYPE_2__ GpPathGradient ;
typedef TYPE_3__ GpLineGradient ;
typedef TYPE_4__ GpHatch ;
typedef TYPE_5__ GpBrush ;
typedef int COLORREF ;
typedef int ARGB ;


 int FUNC_0 (int ) ;




 int FUNC_1 (char*,int) ;

__attribute__((used)) static COLORREF FUNC_2(const GpBrush *VAR_0)
{
    ARGB VAR_1;

    switch (VAR_0->bt)
    {
        case 128:
        {
            const GpSolidFill *VAR_2 = (const GpSolidFill *)VAR_0;
            VAR_1 = VAR_2->color;
            break;
        }
        case 131:
        {
            const GpHatch *VAR_3 = (const GpHatch *)VAR_0;
            VAR_1 = VAR_3->forecol;
            break;
        }
        case 130:
        {
            const GpLineGradient *VAR_4 = (const GpLineGradient *)VAR_0;
            VAR_1 = VAR_4->startcolor;
            break;
        }
        case 129:
        {
            const GpPathGradient *VAR_5 = (const GpPathGradient *)VAR_0;
            VAR_1 = VAR_5->centercolor;
            break;
        }
        default:
            FUNC_1("unhandled brush type %d\n", VAR_0->bt);
            VAR_1 = 0;
            break;
    }
    return FUNC_0(VAR_1);
}
