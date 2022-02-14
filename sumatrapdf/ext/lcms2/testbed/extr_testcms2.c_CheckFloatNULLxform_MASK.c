
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int cmsFloat32Number ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int,double) ;
 int VAR_1 ;
 int * FUNC_3 (int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int*,int*,int) ;
 int VAR_2 ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    int VAR_3;
    cmsFloat32Number VAR_4[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cmsFloat32Number VAR_5[10];

    cmsHTRANSFORM VAR_6 = FUNC_3(FUNC_0(), ((void*)0), VAR_1, ((void*)0), VAR_1, VAR_0, VAR_2);

    if (VAR_6 == ((void*)0)) {
        FUNC_1("Unable to create float null transform");
        return 0;
    }

    FUNC_5(FUNC_0(), VAR_6, VAR_4, VAR_5, 10);

    FUNC_4(FUNC_0(), VAR_6);
    for (VAR_3=0; VAR_3 < 10; VAR_3++) {

        if (!FUNC_2("float nullxform", VAR_4[VAR_3], VAR_5[VAR_3], 0.001)) {

            return 0;
        }
    }

    return 1;
}
