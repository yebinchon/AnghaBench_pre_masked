
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;


 int FUNC_0 (int ,int,int,int,double,double,double,double) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(void)
{
    cmsHPROFILE VAR_5, VAR_6, VAR_7;
    cmsHTRANSFORM VAR_8, VAR_9;
    cmsInt32Number VAR_10;


    VAR_5 = FUNC_6(FUNC_1());
    VAR_6 = FUNC_5(FUNC_1());
    VAR_7 = FUNC_3(FUNC_1(), ((void*)0));

    VAR_8 = FUNC_4(FUNC_1(), VAR_5, VAR_3, VAR_6, VAR_4,
                                VAR_0, 0);

    VAR_9 = FUNC_4(FUNC_1(), VAR_5, VAR_3, VAR_7, VAR_2,
                                VAR_0, 0);
    FUNC_2(FUNC_1(), VAR_5);
    FUNC_2(FUNC_1(), VAR_6);
    FUNC_2(FUNC_1(), VAR_7);

    VAR_1 = 0;


    VAR_10 = FUNC_0(VAR_8, 1, 1, 1, 0.0002927, 0.0003035, 0.000250, 0.0001);
    VAR_10 &= FUNC_0(VAR_8, 127, 127, 127, 0.2046329, 0.212230, 0.175069, 0.0001);
    VAR_10 &= FUNC_0(VAR_8, 12, 13, 15, 0.0038364, 0.0039928, 0.003853, 0.0001);
    VAR_10 &= FUNC_0(VAR_8, 128, 0, 0, 0.0941240, 0.0480256, 0.003005, 0.0001);
    VAR_10 &= FUNC_0(VAR_8, 190, 25, 210, 0.3204592, 0.1605926, 0.468213, 0.0001);


    VAR_10 &= FUNC_0(VAR_9, 1, 1, 1, 0.2741748, 0, 0, 0.01);
    VAR_10 &= FUNC_0(VAR_9, 127, 127, 127, 53.192776, 0, 0, 0.01);
    VAR_10 &= FUNC_0(VAR_9, 190, 25, 210, 47.052136, 74.565610, -56.883274, 0.01);
    VAR_10 &= FUNC_0(VAR_9, 128, 0, 0, 26.164701, 48.478171, 39.4384713, 0.01);

    FUNC_7(FUNC_1(), VAR_8);
    FUNC_7(FUNC_1(), VAR_9);
    return VAR_10;
}
