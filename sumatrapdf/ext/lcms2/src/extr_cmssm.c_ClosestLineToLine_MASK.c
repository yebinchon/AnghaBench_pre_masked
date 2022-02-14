
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsVEC3 ;
struct TYPE_5__ {int u; int a; } ;
typedef TYPE_1__ cmsLine ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;


 int FUNC_0 (int *,TYPE_1__ const*,double) ;
 double VAR_0 ;
 int VAR_1 ;
 double FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int *) ;
 double FUNC_3 (double) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_2, cmsVEC3* VAR_3, const cmsLine* VAR_4, const cmsLine* VAR_5)
{
    cmsFloat64Number VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    cmsFloat64Number VAR_12, VAR_13, VAR_14;

    cmsFloat64Number VAR_15, VAR_16;
    cmsVEC3 VAR_17;

    FUNC_2(VAR_2, &VAR_17, &VAR_4 ->a, &VAR_5 ->a);

    VAR_6 = FUNC_1(VAR_2, &VAR_4 ->u, &VAR_4 ->u);
    VAR_7 = FUNC_1(VAR_2, &VAR_4 ->u, &VAR_5 ->u);
    VAR_8 = FUNC_1(VAR_2, &VAR_5 ->u, &VAR_5 ->u);
    VAR_9 = FUNC_1(VAR_2, &VAR_4 ->u, &VAR_17);
    VAR_10 = FUNC_1(VAR_2, &VAR_5 ->u, &VAR_17);

    VAR_11 = VAR_6*VAR_8 - VAR_7 * VAR_7;
    VAR_14 = VAR_16 = VAR_11;

    if (VAR_11 < VAR_0) {

        VAR_13 = 0.0;
        VAR_14 = 1.0;
        VAR_15 = VAR_10;
        VAR_16 = VAR_8;
    }
    else {

        VAR_13 = (VAR_7*VAR_10 - VAR_8*VAR_9);
        VAR_15 = (VAR_6*VAR_10 - VAR_7*VAR_9);

        if (VAR_13 < 0.0) {

            VAR_13 = 0.0;
            VAR_15 = VAR_10;
            VAR_16 = VAR_8;
        }
        else if (VAR_13 > VAR_14) {
            VAR_13 = VAR_14;
            VAR_15 = VAR_10 + VAR_7;
            VAR_16 = VAR_8;
        }
    }

    if (VAR_15 < 0.0) {

        VAR_15 = 0.0;

        if (-VAR_9 < 0.0)
            VAR_13 = 0.0;
        else if (-VAR_9 > VAR_6)
            VAR_13 = VAR_14;
        else {
            VAR_13 = -VAR_9;
            VAR_14 = VAR_6;
        }
    }
    else if (VAR_15 > VAR_16) {

        VAR_15 = VAR_16;


        if ((-VAR_9 + VAR_7) < 0.0)
            VAR_13 = 0;
        else if ((-VAR_9 + VAR_7) > VAR_6)
            VAR_13 = VAR_14;
        else {
            VAR_13 = (-VAR_9 + VAR_7);
            VAR_14 = VAR_6;
        }
    }

    VAR_12 = (FUNC_3(VAR_13) < VAR_0 ? 0.0 : VAR_13 / VAR_14);


    FUNC_0(VAR_3, VAR_4, VAR_12);
    return VAR_1;
}
