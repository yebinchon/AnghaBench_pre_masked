
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Count; TYPE_1__* Points; } ;
struct TYPE_7__ {TYPE_2__ pathdata; } ;
struct TYPE_5__ {scalar_t__ X; scalar_t__ Y; } ;
typedef scalar_t__ REAL ;
typedef TYPE_3__ GpPath ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 short FUNC_0 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(const GpPath *VAR_2)
{
    int VAR_3;

    if (!VAR_2->pathdata.Count) return VAR_0;

    for (VAR_3 = 0; VAR_3 < VAR_2->pathdata.Count; VAR_3++)
    {
        short VAR_4, VAR_5;
        VAR_4 = FUNC_0(VAR_2->pathdata.Points[VAR_3].X);
        VAR_5 = FUNC_0(VAR_2->pathdata.Points[VAR_3].Y);
        if (VAR_2->pathdata.Points[VAR_3].X != (REAL)VAR_4 || VAR_2->pathdata.Points[VAR_3].Y != (REAL)VAR_5)
            return VAR_0;
    }
    return VAR_1;
}
