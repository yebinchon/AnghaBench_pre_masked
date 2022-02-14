
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int cmsVEC3 ;
struct TYPE_11__ {int alpha; int theta; double r; } ;
typedef TYPE_2__ cmsSpherical ;
typedef int cmsLine ;
struct TYPE_12__ {TYPE_2__ p; } ;
typedef TYPE_3__ cmsGDBPoint ;
struct TYPE_13__ {TYPE_1__** Gamut; } ;
typedef TYPE_4__ cmsGDB ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_10__ {scalar_t__ Type; TYPE_2__ p; } ;


 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (TYPE_4__*,int,int,TYPE_3__**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int ,int *,double,int ,int ) ;

__attribute__((used)) static
cmsBool FUNC_6(cmsContext VAR_5, cmsGDB* VAR_6, int VAR_7, int VAR_8)
{
    cmsSpherical VAR_9;
    cmsVEC3 VAR_10;
    cmsVEC3 VAR_11;
    cmsLine VAR_12;
    int VAR_13;
    cmsGDBPoint* VAR_14[VAR_2 + 1];
    cmsSpherical VAR_15, VAR_16;
    cmsLine VAR_17;
    int VAR_18, VAR_19;


    if (VAR_6 ->Gamut[VAR_8][VAR_7].Type != VAR_0) return VAR_4;


    VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_14);



    VAR_9.alpha = (cmsFloat64Number) ((VAR_7 + 0.5) * 360.0) / (VAR_3);
    VAR_9.theta = (cmsFloat64Number) ((VAR_8 + 0.5) * 180.0) / (VAR_3);
    VAR_9.r = 50.0;


    FUNC_3(&VAR_10, &VAR_9);


    FUNC_5(VAR_5, &VAR_11, 50.0, 0, 0);
    FUNC_2(VAR_5, &VAR_12, &VAR_10, &VAR_11);


    VAR_15.r = 0.0;
    VAR_15.alpha = 0;
    VAR_15.theta = 0;

    for (VAR_18=0; VAR_18 < VAR_13; VAR_18++) {

        for(VAR_19 = VAR_18+1; VAR_19 < VAR_13; VAR_19++) {

            cmsVEC3 VAR_20, VAR_21, VAR_22;


            FUNC_3(&VAR_21, &VAR_14[VAR_18]->p);
            FUNC_3(&VAR_22, &VAR_14[VAR_19]->p);

            FUNC_2(VAR_5, &VAR_17, &VAR_21, &VAR_22);


            FUNC_0(VAR_5, &VAR_20, &VAR_12, &VAR_17);


            FUNC_4(&VAR_16, &VAR_20);


            if ( VAR_16.r > VAR_15.r &&
                 VAR_16.theta >= (VAR_8*180.0/VAR_3) &&
                 VAR_16.theta <= ((VAR_8+1)*180.0/VAR_3) &&
                 VAR_16.alpha >= (VAR_7*360.0/VAR_3) &&
                 VAR_16.alpha <= ((VAR_7+1)*360.0/VAR_3)) {

                VAR_15 = VAR_16;
            }
        }
    }

    VAR_6 ->Gamut[VAR_8][VAR_7].p = VAR_15;
    VAR_6 ->Gamut[VAR_8][VAR_7].Type = VAR_1;

    return VAR_4;

}
