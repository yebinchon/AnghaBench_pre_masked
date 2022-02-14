
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int *,int ,double,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_11(void)
{
    cmsHPROFILE VAR_3, VAR_4, VAR_5, VAR_6;
    cmsHTRANSFORM VAR_7;
    cmsInt32Number VAR_8 = 1;

    VAR_3 = FUNC_4(FUNC_1(), ((void*)0));
    VAR_7 = FUNC_5(FUNC_1(), VAR_3, VAR_1, VAR_3, VAR_1, 0, 0);

    VAR_4 = FUNC_9(((void*)0), VAR_7, 3.4, 0);
    FUNC_8(FUNC_1(), VAR_4, "abstractv2.icc");
    FUNC_3(FUNC_1(), VAR_4);

    VAR_4 = FUNC_9(((void*)0), VAR_7, 4.3, 0);
    FUNC_8(FUNC_1(), VAR_4, "abstractv4.icc");
    FUNC_3(FUNC_1(), VAR_4);

    FUNC_6(FUNC_1(), VAR_7);
    FUNC_3(FUNC_1(), VAR_3);

    VAR_5 = FUNC_7(FUNC_1(), "abstractv4.icc", "r");

    VAR_7 = FUNC_5(FUNC_1(), VAR_5, VAR_2, VAR_5, VAR_2, VAR_0, 0);

    FUNC_2("V4");
    VAR_8 &= FUNC_0(VAR_7);

    FUNC_6(FUNC_1(), VAR_7);
    FUNC_3(FUNC_1(), VAR_5);
    if (!VAR_8) goto Error;


    FUNC_2("V2");
    VAR_6 = FUNC_7(FUNC_1(), "abstractv2.icc", "r");

    VAR_7 = FUNC_5(FUNC_1(), VAR_6, VAR_2, VAR_6, VAR_2, VAR_0, 0);
    VAR_8 &= FUNC_0(VAR_7);
    FUNC_6(FUNC_1(), VAR_7);
    FUNC_3(FUNC_1(), VAR_6);
    if (!VAR_8) goto Error;


    FUNC_2("V2 -> V4");
    VAR_6 = FUNC_7(FUNC_1(), "abstractv2.icc", "r");
    VAR_5 = FUNC_7(FUNC_1(), "abstractv4.icc", "r");

    VAR_7 = FUNC_5(FUNC_1(), VAR_5, VAR_2, VAR_6, VAR_2, VAR_0, 0);
    VAR_8 &= FUNC_0(VAR_7);
    FUNC_6(FUNC_1(), VAR_7);
    FUNC_3(FUNC_1(), VAR_6);
    FUNC_3(FUNC_1(), VAR_5);

    FUNC_2("V4 -> V2");
    VAR_6 = FUNC_7(FUNC_1(), "abstractv2.icc", "r");
    VAR_5 = FUNC_7(FUNC_1(), "abstractv4.icc", "r");

    VAR_7 = FUNC_5(FUNC_1(), VAR_6, VAR_2, VAR_5, VAR_2, VAR_0, 0);
    VAR_8 &= FUNC_0(VAR_7);
    FUNC_6(FUNC_1(), VAR_7);
    FUNC_3(FUNC_1(), VAR_6);
    FUNC_3(FUNC_1(), VAR_5);

Error:
    FUNC_10("abstractv2.icc");
    FUNC_10("abstractv4.icc");
    return VAR_8;

}
