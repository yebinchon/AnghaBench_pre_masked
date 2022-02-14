
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* cmsUInt16Number ;
struct TYPE_4__ {void** Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef scalar_t__ cmsInt32Number ;
typedef scalar_t__ cmsBool ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__,int *) ;

__attribute__((used)) static
cmsToneCurve* FUNC_3(cmsInt32Number VAR_0, cmsBool VAR_1)
{
    cmsInt32Number VAR_2;
    cmsToneCurve* VAR_3 = FUNC_2(FUNC_0(), VAR_0, ((void*)0));

    for (VAR_2=0; VAR_2 < VAR_0; VAR_2++) {

        cmsInt32Number VAR_4 = FUNC_1(VAR_2, VAR_0);

        if (VAR_1)
            VAR_3->Table16[VAR_2] = (cmsUInt16Number) VAR_4;
        else
            VAR_3->Table16[VAR_2] = (cmsUInt16Number) (0xFFFF - VAR_4);
    }

    return VAR_3;
}
