
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsFloat32Number ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(void)
{
    int VAR_0, VAR_1;


    for (VAR_0=0; VAR_0 < 0xffff; VAR_0++) {

        cmsFloat32Number VAR_2 = FUNC_2((cmsUInt16Number) VAR_0);

        if (!FUNC_3(VAR_2)) {

            VAR_1 = FUNC_1(VAR_2);

            if (VAR_0 != VAR_1) {
                FUNC_0("%d != %d in Half float support!\n", VAR_0, VAR_1);
                return 0;
            }
        }
    }

    return 1;
}
