
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;
struct TYPE_3__ {double X; double Y; double Z; } ;
typedef TYPE_1__ cmsCIEXYZ ;


 int FUNC_0 () ;
 int FUNC_1 (char*,double,double) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_1__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsInt32Number VAR_0, cmsHPROFILE VAR_1, cmsTagSignature VAR_2)
{
    cmsCIEXYZ VAR_3, *VAR_4;


    switch (VAR_0) {

        case 1:

            VAR_3.X = 1.0; VAR_3.Y = 1.1; VAR_3.Z = 1.2;
            return FUNC_3(FUNC_0(), VAR_1, VAR_2, &VAR_3);

        case 2:
            VAR_4 = (cmsCIEXYZ *) FUNC_2(FUNC_0(), VAR_1, VAR_2);
            if (VAR_4 == ((void*)0)) return 0;
            return FUNC_1("X", 1.0, VAR_4 ->X) &&
                   FUNC_1("Y", 1.1, VAR_4->Y) &&
                   FUNC_1("Z", 1.2, VAR_4 -> Z);

        default:
            return 0;
    }
}
