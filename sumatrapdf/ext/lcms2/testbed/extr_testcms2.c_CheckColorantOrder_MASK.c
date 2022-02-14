
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsInt32Number VAR_1, cmsHPROFILE VAR_2, cmsTagSignature VAR_3)
{
    cmsUInt8Number *VAR_4, VAR_5[VAR_0];
    cmsInt32Number VAR_6;

    switch (VAR_1) {

        case 1:
            for (VAR_6=0; VAR_6 < VAR_0; VAR_6++) VAR_5[VAR_6] = (cmsUInt8Number) (VAR_0 - VAR_6 - 1);
            return FUNC_2(FUNC_0(), VAR_2, VAR_3, VAR_5);


        case 2:
            VAR_4 = (cmsUInt8Number *) FUNC_1(FUNC_0(), VAR_2, VAR_3);
            if (VAR_4 == ((void*)0)) return 0;

            for (VAR_6=0; VAR_6 < VAR_0; VAR_6++) {
                if (VAR_4[VAR_6] != ( VAR_0 - VAR_6 - 1 )) return 0;
            }
            return 1;

        default:
            return 0;
    }
}
