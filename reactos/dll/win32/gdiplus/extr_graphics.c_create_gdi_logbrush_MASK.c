
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_9__ {int bt; } ;
struct TYPE_8__ {int color; } ;
struct TYPE_7__ {int lbHatch; int lbColor; void* lbStyle; } ;
typedef TYPE_1__ LOGBRUSH ;
typedef int HBITMAP ;
typedef int GpStatus ;
typedef TYPE_2__ GpSolidFill ;
typedef int GpHatch ;
typedef TYPE_3__ GpBrush ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;


 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_3__ const*) ;

__attribute__((used)) static GpStatus FUNC_4(const GpBrush *VAR_4, LOGBRUSH *VAR_5)
{
    switch (VAR_4->bt)
    {
        case 128:
        {
            const GpSolidFill *VAR_6 = (const GpSolidFill *)VAR_4;
            VAR_5->lbStyle = VAR_1;
            VAR_5->lbColor = FUNC_0(VAR_6->color);
            VAR_5->lbHatch = 0;
            return VAR_2;
        }

        case 129:
        {
            const GpHatch *VAR_7 = (const GpHatch *)VAR_4;
            HBITMAP VAR_8;

            VAR_8 = FUNC_2(VAR_7);
            if (!VAR_8) return VAR_3;

            VAR_5->lbStyle = VAR_0;
            VAR_5->lbColor = 0;
            VAR_5->lbHatch = (ULONG_PTR)VAR_8;
            return VAR_2;
        }

        default:
            FUNC_1("unhandled brush type %d\n", VAR_4->bt);
            VAR_5->lbStyle = VAR_1;
            VAR_5->lbColor = FUNC_3(VAR_4);
            VAR_5->lbHatch = 0;
            return VAR_2;
    }
}
