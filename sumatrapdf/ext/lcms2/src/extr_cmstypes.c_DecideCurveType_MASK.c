
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nSegments; TYPE_1__* Segments; } ;
typedef TYPE_2__ cmsToneCurve ;
typedef int cmsTagTypeSignature ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_3__ {int Type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static
cmsTagTypeSignature FUNC_1(cmsContext VAR_2, cmsFloat64Number VAR_3, const void *VAR_4)
{
    cmsToneCurve* VAR_5 = (cmsToneCurve*) VAR_4;
    FUNC_0(VAR_2);

    if (VAR_3 < 4.0) return VAR_0;
    if (VAR_5 ->nSegments != 1) return VAR_0;
    if (VAR_5 ->Segments[0].Type < 0) return VAR_0;
    if (VAR_5 ->Segments[0].Type > 5) return VAR_0;

    return VAR_1;
}
