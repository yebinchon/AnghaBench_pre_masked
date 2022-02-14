
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsPipeline ;
typedef int cmsInt32Number ;
typedef float cmsFloat32Number ;


 int FUNC_0 () ;
 int FUNC_1 (int ,float*,float*,int *) ;
 scalar_t__ FUNC_2 (float) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsPipeline* VAR_0)
{
    cmsInt32Number VAR_1, VAR_2, VAR_3;
    cmsFloat32Number VAR_4[3], VAR_5[3];

    VAR_1=0;

    for (VAR_3=0; VAR_3 < 65535; VAR_3++) {

        cmsInt32Number VAR_6[3];

        VAR_4[0] = VAR_4[1] = VAR_4[2] = (cmsFloat32Number) VAR_3 / 65535.0F;
        FUNC_1(FUNC_0(), VAR_4, VAR_5, VAR_0);

        VAR_6[0] = (cmsInt32Number) FUNC_2(VAR_5[0]*65535.0 + 0.5);
        VAR_6[1] = (cmsInt32Number) FUNC_2(VAR_5[1]*65535.0 + 0.5);
        VAR_6[2] = (cmsInt32Number) FUNC_2(VAR_5[2]*65535.0 + 0.5);

        for (VAR_2=0; VAR_2 < 3; VAR_2++) {

            if (VAR_6[VAR_2] != VAR_3) {
                VAR_1++;
            }
        }

    }

    return (VAR_1 == 0);
}
