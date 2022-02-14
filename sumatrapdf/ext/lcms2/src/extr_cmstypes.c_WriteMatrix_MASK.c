
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
struct TYPE_4__ {scalar_t__ Data; } ;
typedef TYPE_1__ cmsStage ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {int * Offset; int * Double; } ;
typedef TYPE_2__ _cmsStageMatrixData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, cmsStage* VAR_5)
{
    _cmsStageMatrixData* VAR_6 = (_cmsStageMatrixData*) VAR_5 -> Data;


    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[0])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[1])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[2])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[3])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[4])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[5])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[6])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[7])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Double[8])) return VAR_0;

    if (VAR_6 ->Offset != ((void*)0)) {

    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Offset[0])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Offset[1])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_6 -> Offset[2])) return VAR_0;
    }
    else {
        if (!FUNC_0(VAR_2, VAR_4, 0)) return VAR_0;
        if (!FUNC_0(VAR_2, VAR_4, 0)) return VAR_0;
        if (!FUNC_0(VAR_2, VAR_4, 0)) return VAR_0;

    }


    return VAR_1;

    FUNC_1(VAR_3);
}
