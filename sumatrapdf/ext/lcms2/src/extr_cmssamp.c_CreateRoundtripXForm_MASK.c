
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *,int *,int *,double*,int *,int ,int ,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
cmsHTRANSFORM FUNC_3(cmsContext VAR_5, cmsHPROFILE VAR_6, cmsUInt32Number VAR_7)
{
    cmsHPROFILE VAR_8 = FUNC_2(VAR_5, ((void*)0));
    cmsHTRANSFORM VAR_9;
    cmsBool VAR_10[4] = { VAR_0, VAR_0, VAR_0, VAR_0 };
    cmsFloat64Number VAR_11[4] = { 1.0, 1.0, 1.0, 1.0 };
    cmsHPROFILE VAR_12[4];
    cmsUInt32Number VAR_13[4];

    VAR_12[0] = VAR_8; VAR_12[1] = VAR_6; VAR_12[2] = VAR_6; VAR_12[3] = VAR_8;
    VAR_13[0] = VAR_1; VAR_13[1] = VAR_7; VAR_13[2] = VAR_1; VAR_13[3] = VAR_1;

    VAR_9 = FUNC_1(VAR_5, 4, VAR_12, VAR_10, VAR_13,
        VAR_11, ((void*)0), 0, VAR_2, VAR_2, VAR_3|VAR_4);

    FUNC_0(VAR_5, VAR_8);
    return VAR_9;
}
