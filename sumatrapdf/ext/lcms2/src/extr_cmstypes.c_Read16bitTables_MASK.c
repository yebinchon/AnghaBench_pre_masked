
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_6__ {int Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int cmsPipeline ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int Tables ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__**,int ,int) ;

__attribute__((used)) static
cmsBool FUNC_6(cmsContext VAR_4, cmsIOHANDLER* VAR_5, cmsPipeline* VAR_6,
                                    cmsUInt32Number VAR_7, cmsUInt32Number VAR_8)
{
    cmsUInt32Number VAR_9;
    cmsToneCurve* VAR_10[VAR_3];


    if (VAR_8 <= 0) return VAR_1;


    if (VAR_8 < 2) return VAR_0;
    if (VAR_7 > VAR_3) return VAR_0;


    FUNC_5(VAR_10, 0, sizeof(VAR_10));

    for (VAR_9=0; VAR_9 < VAR_7; VAR_9++) {

        VAR_10[VAR_9] = FUNC_1(VAR_4, VAR_8, ((void*)0));
        if (VAR_10[VAR_9] == ((void*)0)) goto Error;

        if (!FUNC_0(VAR_4, VAR_5, VAR_8, VAR_10[VAR_9]->Table16)) goto Error;
    }



    if (!FUNC_3(VAR_4, VAR_6, VAR_2, FUNC_4(VAR_4, VAR_7, VAR_10)))
        goto Error;

    for (VAR_9=0; VAR_9 < VAR_7; VAR_9++)
        FUNC_2(VAR_4, VAR_10[VAR_9]);

    return VAR_1;

Error:
    for (VAR_9=0; VAR_9 < VAR_7; VAR_9++) {
        if (VAR_10[VAR_9]) FUNC_2(VAR_4, VAR_10[VAR_9]);
    }

    return VAR_0;
}
