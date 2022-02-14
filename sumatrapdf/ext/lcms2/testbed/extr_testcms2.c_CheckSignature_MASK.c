
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsInt32Number VAR_1, cmsHPROFILE VAR_2, cmsTagSignature VAR_3)
{
    cmsTagSignature *VAR_4, VAR_5;

    switch (VAR_1) {

        case 1:
            VAR_5 = (cmsTagSignature) VAR_0;
            return FUNC_2(FUNC_0(), VAR_2, VAR_3, &VAR_5);

        case 2:
            VAR_4 = (cmsTagSignature *) FUNC_1(FUNC_0(), VAR_2, VAR_3);
            if (VAR_4 == ((void*)0)) return 0;
            return *VAR_4 == VAR_0;

        default:
            return 0;
    }
}
