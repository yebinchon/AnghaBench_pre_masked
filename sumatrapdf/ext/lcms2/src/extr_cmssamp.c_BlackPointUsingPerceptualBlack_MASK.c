
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
struct TYPE_8__ {double X; double Y; double Z; } ;
typedef TYPE_1__ cmsCIEXYZ ;
struct TYPE_9__ {int L; int a; int b; } ;
typedef TYPE_2__ cmsCIELab ;
typedef int cmsBool ;


 int * FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int *,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static
cmsBool FUNC_5(cmsContext VAR_4, cmsCIEXYZ* VAR_5, cmsHPROFILE VAR_6)
{
    cmsHTRANSFORM VAR_7;
    cmsCIELab VAR_8, VAR_9;
    cmsCIEXYZ VAR_10;


    if (!FUNC_3(VAR_4, VAR_6, VAR_1, VAR_2)) {

        VAR_5 -> X = VAR_5 ->Y = VAR_5 -> Z = 0.0;
        return VAR_3;
    }

    VAR_7 = FUNC_0(VAR_4, VAR_6, VAR_1);
    if (VAR_7 == ((void*)0)) {
        VAR_5 -> X = VAR_5 ->Y = VAR_5 -> Z = 0.0;
        return VAR_0;
    }

    VAR_8.L = VAR_8.a = VAR_8.b = 0;
    FUNC_2(VAR_4, VAR_7, &VAR_8, &VAR_9, 1);


    if (VAR_9.L > 50) VAR_9.L = 50;
    VAR_9.a = VAR_9.b = 0;

    FUNC_1(VAR_4, VAR_7);


    FUNC_4(VAR_4, ((void*)0), &VAR_10, &VAR_9);

    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_10;

    return VAR_3;
}
