
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsToneCurve ;
typedef int cmsPipeline ;
struct TYPE_5__ {TYPE_1__* v; } ;
typedef TYPE_2__ cmsMAT3 ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_4__ {int * n; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int,int,int *,int *) ;
 int FUNC_8 (int ,int,int **) ;

__attribute__((used)) static
cmsPipeline* FUNC_9(cmsContext VAR_6, cmsHPROFILE VAR_7)
{
    cmsPipeline* VAR_8;
    cmsMAT3 VAR_9;
    cmsToneCurve *VAR_10[3];
    int VAR_11, VAR_12;

    if (!FUNC_0(VAR_6, &VAR_9, VAR_7)) return ((void*)0);





    for (VAR_11=0; VAR_11 < 3; VAR_11++)
        for (VAR_12=0; VAR_12 < 3; VAR_12++)
            VAR_9.v[VAR_11].n[VAR_12] *= VAR_0;


    VAR_10[0] = (cmsToneCurve *) FUNC_6(VAR_6, VAR_7, VAR_5);
    VAR_10[1] = (cmsToneCurve *) FUNC_6(VAR_6, VAR_7, VAR_3);
    VAR_10[2] = (cmsToneCurve *) FUNC_6(VAR_6, VAR_7, VAR_2);

    if (!VAR_10[0] || !VAR_10[1] || !VAR_10[2])
        return ((void*)0);

    VAR_8 = FUNC_3(VAR_6, 3, 3);
    if (VAR_8 != ((void*)0)) {

        if (!FUNC_5(VAR_6, VAR_8, VAR_1, FUNC_8(VAR_6, 3, VAR_10)) ||
            !FUNC_5(VAR_6, VAR_8, VAR_1, FUNC_7(VAR_6, 3, 3, (cmsFloat64Number*) &VAR_9, ((void*)0))))
            goto Error;




        if (FUNC_2(VAR_6, VAR_7) == VAR_4) {

            if (!FUNC_5(VAR_6, VAR_8, VAR_1, FUNC_1(VAR_6)))
                goto Error;
        }

    }

    return VAR_8;

Error:
    FUNC_4(VAR_6, VAR_8);
    return ((void*)0);
}
