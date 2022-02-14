
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Data; } ;
typedef TYPE_1__ cmsStage ;
typedef int cmsFloat64Number ;
struct TYPE_5__ {int * Double; } ;
typedef TYPE_2__ _cmsStageMatrixData ;



__attribute__((used)) static
cmsFloat64Number* FUNC_0(const cmsStage* VAR_0)
{
    _cmsStageMatrixData* VAR_1 = (_cmsStageMatrixData*) VAR_0 ->Data;

    return VAR_1 -> Double;
}
