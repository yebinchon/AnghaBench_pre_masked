
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsToneCurve ;
typedef int cmsStage ;
struct TYPE_6__ {int (* Seek ) (int ,TYPE_1__*,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;


 int * VAR_0 ;
 int * FUNC_0 (int ,struct _cms_typehandler_struct*,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int * FUNC_3 (int ,int,int **) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;

__attribute__((used)) static
cmsStage* FUNC_5(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, cmsUInt32Number VAR_5, cmsUInt32Number VAR_6)
{
    cmsToneCurve* VAR_7[VAR_1];
    cmsUInt32Number VAR_8;
    cmsStage* VAR_9 = ((void*)0);

    if (VAR_6 > VAR_1) return VAR_0;

    if (!VAR_4 -> Seek(VAR_2, VAR_4, VAR_5)) return VAR_0;

    for (VAR_8=0; VAR_8 < VAR_6; VAR_8++)
        VAR_7[VAR_8] = ((void*)0);

    for (VAR_8=0; VAR_8 < VAR_6; VAR_8++) {

        VAR_7[VAR_8] = FUNC_0(VAR_2, VAR_3, VAR_4);
        if (VAR_7[VAR_8] == ((void*)0)) goto Error;
        if (!FUNC_1(VAR_2, VAR_4)) goto Error;

    }

    VAR_9 = FUNC_3(VAR_2, VAR_6, VAR_7);

Error:
    for (VAR_8=0; VAR_8 < VAR_6; VAR_8++)
        FUNC_2(VAR_2, VAR_7[VAR_8]);

    return VAR_9;
}
