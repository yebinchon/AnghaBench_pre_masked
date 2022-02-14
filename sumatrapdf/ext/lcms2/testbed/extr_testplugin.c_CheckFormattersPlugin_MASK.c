
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsContext ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int*,int*,int) ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;

cmsInt32Number FUNC_7(void)
{
    cmsContext VAR_5 = FUNC_1(((void*)0));
    cmsContext VAR_6;
    cmsHTRANSFORM VAR_7;
    cmsUInt16Number VAR_8[]= { 0xffffU, 0x1234U, 0x0000U, 0x33ddU };
    cmsUInt16Number VAR_9[4];
    int VAR_10;

    FUNC_6(VAR_5, &VAR_0);

    VAR_6 = FUNC_0(VAR_5, ((void*)0));

    FUNC_6(VAR_6, &VAR_1);

    VAR_7 = FUNC_2(VAR_6, ((void*)0), VAR_3, ((void*)0), VAR_3, VAR_2, VAR_4);

    FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, 4);

    FUNC_4(VAR_6, VAR_7);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);

    for (VAR_10=0; VAR_10 < 4; VAR_10++)
        if (VAR_8[VAR_10] != VAR_9[VAR_10]) return 0;

    return 1;
}
