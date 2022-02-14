
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
struct TYPE_3__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_1__ cmsFloat64Number ;
typedef int cmsCIEXYZTRIPLE ;
typedef int cmsBool ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int *,int ,int *,int ,int ,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,TYPE_1__**,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
cmsBool FUNC_6(cmsHPROFILE VAR_6,
                                cmsCIEXYZTRIPLE *VAR_7,
                                cmsUInt32Number VAR_8)
{
    cmsHPROFILE VAR_9;
    cmsHTRANSFORM VAR_10;
    cmsFloat64Number VAR_11[3][3] = {{1., 0., 0.},
    {0., 1., 0.},
    {0., 0., 1.}};

    VAR_9 = FUNC_3(FUNC_0());
    if (VAR_9 == ((void*)0)) return VAR_0;

    VAR_10 = FUNC_2(FUNC_0(), VAR_6, VAR_2, VAR_9, VAR_3,
        VAR_8, VAR_4 | VAR_5);
    FUNC_1(FUNC_0(), VAR_9);
    if (VAR_10 == ((void*)0)) return VAR_0;

    FUNC_5(FUNC_0(), VAR_10, VAR_11, VAR_7, 3);
    FUNC_4(FUNC_0(), VAR_10);
    return VAR_1;
}
