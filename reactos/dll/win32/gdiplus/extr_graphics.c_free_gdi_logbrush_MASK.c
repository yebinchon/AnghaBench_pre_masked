
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_3__ {int lbStyle; int lbHatch; } ;
typedef TYPE_1__ LOGBRUSH ;
typedef int HGDIOBJ ;
typedef int GpStatus ;



 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static GpStatus FUNC_1(LOGBRUSH *VAR_1)
{
    switch (VAR_1->lbStyle)
    {
        case 128:
            FUNC_0((HGDIOBJ)(ULONG_PTR)VAR_1->lbHatch);
            break;
    }
    return VAR_0;
}
