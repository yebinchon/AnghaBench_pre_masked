
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * n; } ;
typedef TYPE_2__ cmsVEC3 ;
typedef int cmsUInt32Number ;
typedef int cmsToneCurve ;
typedef int cmsPipeline ;
struct TYPE_9__ {TYPE_1__* v; } ;
typedef TYPE_3__ cmsMAT3 ;
typedef int cmsContext ;
typedef scalar_t__ cmsBool ;
struct TYPE_10__ {void** Off; void*** Mat; int Shaper2B; int Shaper2G; int Shaper2R; int Shaper1B; int Shaper1G; int Shaper1R; } ;
struct TYPE_7__ {int * n; } ;
typedef TYPE_4__ MatShaper8Data ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int *,int ,void*,int ,int ) ;

__attribute__((used)) static
cmsBool FUNC_7(cmsContext VAR_5, cmsPipeline* VAR_6, cmsToneCurve* VAR_7[3], cmsMAT3* VAR_8, cmsVEC3* VAR_9, cmsToneCurve* VAR_10[3], cmsUInt32Number* VAR_11)
{
    MatShaper8Data* VAR_12;
    int VAR_13, VAR_14;
    cmsBool VAR_15 = FUNC_4(*VAR_11);


    VAR_12 = (MatShaper8Data*) FUNC_5(VAR_5, sizeof(MatShaper8Data));
    if (VAR_12 == ((void*)0)) return VAR_1;


    FUNC_1(VAR_5, VAR_12 ->Shaper1R, VAR_7[0]);
    FUNC_1(VAR_5, VAR_12 ->Shaper1G, VAR_7[1]);
    FUNC_1(VAR_5, VAR_12 ->Shaper1B, VAR_7[2]);

    FUNC_2(VAR_5, VAR_12 ->Shaper2R, VAR_10[0], VAR_15);
    FUNC_2(VAR_5, VAR_12 ->Shaper2G, VAR_10[1], VAR_15);
    FUNC_2(VAR_5, VAR_12 ->Shaper2B, VAR_10[2], VAR_15);


    for (VAR_13=0; VAR_13 < 3; VAR_13++) {
        for (VAR_14=0; VAR_14 < 3; VAR_14++) {
            VAR_12 ->Mat[VAR_13][VAR_14] = FUNC_0(VAR_8->v[VAR_13].n[VAR_14]);
        }
    }

    for (VAR_13=0; VAR_13 < 3; VAR_13++) {

        if (VAR_9 == ((void*)0)) {
            VAR_12 ->Off[VAR_13] = 0;
        }
        else {
            VAR_12 ->Off[VAR_13] = FUNC_0(VAR_9->n[VAR_13]);
        }
    }


    if (VAR_15)
        *VAR_11 |= FUNC_3(1);


    FUNC_6(VAR_5, VAR_6, VAR_3, (void*) VAR_12, VAR_2, VAR_0);
    return VAR_4;
}
