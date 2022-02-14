
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsCIELab ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int*,int *) ;
 int FUNC_2 (int ,int *,int*) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(void)
{
    cmsInt32Number VAR_0, VAR_1, VAR_2;
    cmsUInt16Number VAR_3[3], VAR_4[3];
    cmsCIELab VAR_5;

    VAR_0=0;

    for (VAR_2=0; VAR_2 < 65535; VAR_2++) {

        VAR_3[0] = VAR_3[1] = VAR_3[2] = (cmsUInt16Number) VAR_2;

        FUNC_2(FUNC_0(), &VAR_5, VAR_3);
        FUNC_1(FUNC_0(), VAR_4, &VAR_5);

        for (VAR_1=0; VAR_1 < 3; VAR_1++) {

        if (VAR_4[VAR_1] != VAR_2) {
            VAR_0++;
        }
        }

    }

    return (VAR_0 == 0);
}
