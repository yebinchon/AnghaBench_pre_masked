
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Desc; void* Ucr; void* Bg; } ;
typedef TYPE_1__ cmsUcrBg ;
typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,double) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_10(cmsInt32Number VAR_2, cmsHPROFILE VAR_3, cmsTagSignature VAR_4)
{
    cmsUcrBg *VAR_5, VAR_6;
    cmsInt32Number VAR_7;
    char VAR_8[256];

    switch (VAR_2) {

        case 1:
            VAR_6.Ucr = FUNC_1(FUNC_0(), 2.4);
            VAR_6.Bg = FUNC_1(FUNC_0(), -2.2);
            VAR_6.Desc = FUNC_3(FUNC_0(), 1);
            FUNC_6(FUNC_0(), VAR_6.Desc, VAR_1, VAR_0, "test UCR/BG");
            VAR_7 = FUNC_8(FUNC_0(), VAR_3, VAR_4, &VAR_6);
            FUNC_4(FUNC_0(), VAR_6.Desc);
            FUNC_2(FUNC_0(), VAR_6.Bg);
            FUNC_2(FUNC_0(), VAR_6.Ucr);
            return VAR_7;


        case 2:
            VAR_5 = (cmsUcrBg *) FUNC_7(FUNC_0(), VAR_3, VAR_4);
            if (VAR_5 == ((void*)0)) return 0;

            FUNC_5(FUNC_0(), VAR_5 ->Desc, VAR_1, VAR_0, VAR_8, 256);
            if (FUNC_9(VAR_8, "test UCR/BG") != 0) return 0;
            return 1;

        default:
            return 0;
    }
}
