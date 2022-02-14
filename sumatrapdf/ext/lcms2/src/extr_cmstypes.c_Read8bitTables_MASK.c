
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
struct TYPE_9__ {scalar_t__* Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int cmsPipeline ;
struct TYPE_10__ {int (* Read ) (int ,TYPE_2__*,int *,int,int) ;} ;
typedef TYPE_2__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int Tables ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (int ,int,TYPE_1__**) ;
 int FUNC_7 (TYPE_1__**,int ,int) ;
 int FUNC_8 (int ,TYPE_2__*,int *,int,int) ;

__attribute__((used)) static
cmsBool FUNC_9(cmsContext VAR_4, cmsIOHANDLER* VAR_5, cmsPipeline* VAR_6, cmsUInt32Number VAR_7)
{
    cmsUInt8Number* VAR_8 = ((void*)0);
    cmsUInt32Number VAR_9, VAR_10;
    cmsToneCurve* VAR_11[VAR_3];

    if (VAR_7 > VAR_3) return VAR_0;
    if (VAR_7 <= 0) return VAR_0;

    FUNC_7(VAR_11, 0, sizeof(VAR_11));

    VAR_8 = (cmsUInt8Number*) FUNC_2(VAR_4, 256);
    if (VAR_8 == ((void*)0)) return VAR_0;

    for (VAR_9=0; VAR_9 < VAR_7; VAR_9++) {
        VAR_11[VAR_9] = FUNC_3(VAR_4, 256, ((void*)0));
        if (VAR_11[VAR_9] == ((void*)0)) goto Error;
    }

    for (VAR_9=0; VAR_9 < VAR_7; VAR_9++) {

        if (VAR_5 ->Read(VAR_4, VAR_5, VAR_8, 256, 1) != 1) goto Error;

        for (VAR_10=0; VAR_10 < 256; VAR_10++)
            VAR_11[VAR_9]->Table16[VAR_10] = (cmsUInt16Number) FUNC_0(VAR_8[VAR_10]);
    }

    FUNC_1(VAR_4, VAR_8);
    VAR_8 = ((void*)0);

    if (!FUNC_5(VAR_4, VAR_6, VAR_2, FUNC_6(VAR_4, VAR_7, VAR_11)))
        goto Error;

    for (VAR_9=0; VAR_9 < VAR_7; VAR_9++)
        FUNC_4(VAR_4, VAR_11[VAR_9]);

    return VAR_1;

Error:
    for (VAR_9=0; VAR_9 < VAR_7; VAR_9++) {
        if (VAR_11[VAR_9]) FUNC_4(VAR_4, VAR_11[VAR_9]);
    }

    if (VAR_8) FUNC_1(VAR_4, VAR_8);
    return VAR_0;
}
