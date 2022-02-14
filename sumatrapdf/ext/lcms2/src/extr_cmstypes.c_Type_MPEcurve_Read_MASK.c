
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef void cmsStage ;
struct TYPE_6__ {scalar_t__ (* Tell ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int _cmsTagBase ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct _cms_typehandler_struct*,TYPE_1__*,scalar_t__,scalar_t__,int **,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int ,TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (int ,int *) ;
 void* FUNC_5 (int ,scalar_t__,int **) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;

__attribute__((used)) static
void *FUNC_8(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number* VAR_4, cmsUInt32Number VAR_5)
{
    cmsStage* VAR_6 = ((void*)0);
    cmsUInt16Number VAR_7, VAR_8;
    cmsUInt32Number VAR_9, VAR_10;
    cmsToneCurve** VAR_11;

    *VAR_4 = 0;


    VAR_10 = VAR_3 ->Tell(VAR_1, VAR_3) - sizeof(_cmsTagBase);

    if (!FUNC_3(VAR_1, VAR_3, &VAR_7)) return ((void*)0);
    if (!FUNC_3(VAR_1, VAR_3, &VAR_8)) return ((void*)0);

    if (VAR_7 != VAR_8) return ((void*)0);

    VAR_11 = (cmsToneCurve**) FUNC_1(VAR_1, VAR_7, sizeof(cmsToneCurve*));
    if (VAR_11 == ((void*)0)) return ((void*)0);

    if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_7, VAR_10, VAR_11, VAR_0)) {

        VAR_6 = FUNC_5(VAR_1, VAR_7, VAR_11);
    }
    else {
        VAR_6 = ((void*)0);
    }

    for (VAR_9=0; VAR_9 < VAR_7; VAR_9++) {
        if (VAR_11[VAR_9]) FUNC_4(VAR_1, VAR_11[VAR_9]);
    }

    FUNC_2(VAR_1, VAR_11);
    *VAR_4 = (VAR_6 != ((void*)0)) ? 1U : 0;
    return VAR_6;

    FUNC_6(VAR_5);
}
