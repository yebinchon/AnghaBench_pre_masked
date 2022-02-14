
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsInt32Number VAR_0, cmsHPROFILE VAR_1)
{
    char VAR_2[7];

    switch (VAR_0) {

        case 1:
            return FUNC_2(FUNC_0(), VAR_1, (cmsTagSignature) 0x31323334, "data123", 7);

        case 2:
            if (!FUNC_1(FUNC_0(), VAR_1, (cmsTagSignature) 0x31323334, VAR_2, 7)) return 0;

            if (FUNC_3(VAR_2, "data123", 7) != 0) return 0;
            return 1;

        default:
            return 0;
    }
}
