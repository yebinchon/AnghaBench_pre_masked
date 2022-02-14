
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * n; } ;
typedef TYPE_1__ cmsVEC3 ;
typedef int cmsMAT3 ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsCIExyY ;
struct TYPE_8__ {int Z; int Y; int X; } ;
typedef TYPE_2__ cmsCIEXYZ ;
struct TYPE_9__ {int Z; int Y; int X; } ;


 double VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,int *) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int ,double*,int *) ;
 int FUNC_4 (int ,int *,TYPE_2__*) ;

__attribute__((used)) static
cmsFloat64Number FUNC_5(cmsContext VAR_4, const cmsMAT3* VAR_5)
{

    cmsVEC3 VAR_6, VAR_7;
    cmsCIEXYZ VAR_8;
    cmsCIExyY VAR_9;
    cmsFloat64Number VAR_10;
    cmsMAT3 VAR_11, VAR_12;

    VAR_11 = *VAR_5;
    if (!FUNC_1(VAR_4, &VAR_11, &VAR_12)) return VAR_0;

    VAR_7.n[VAR_1] = FUNC_2(VAR_4) -> X;
    VAR_7.n[VAR_2] = FUNC_2(VAR_4) -> Y;
    VAR_7.n[VAR_3] = FUNC_2(VAR_4) -> Z;

    FUNC_0(VAR_4, &VAR_6, &VAR_12, &VAR_7);

    VAR_8.X = VAR_6.n[VAR_1];
    VAR_8.Y = VAR_6.n[VAR_2];
    VAR_8.Z = VAR_6.n[VAR_3];

    FUNC_4(VAR_4, &VAR_9, &VAR_8);

    if (!FUNC_3(VAR_4, &VAR_10, &VAR_9))
        return -1.0;

    return VAR_10;
}
