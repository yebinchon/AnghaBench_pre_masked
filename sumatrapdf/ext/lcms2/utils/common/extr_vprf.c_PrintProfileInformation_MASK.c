
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * cmsHPROFILE ;
typedef int cmsContext ;


 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int VAR_7 ;

void FUNC_4(cmsContext VAR_8, cmsHPROFILE VAR_9)
{
    if (VAR_9 == ((void*)0)) {
   FUNC_2(VAR_7, "*Wrong or corrupted profile*\n");
            return;
    }

    FUNC_1(VAR_8, VAR_9, VAR_2);
    FUNC_1(VAR_8, VAR_9, VAR_3);
    FUNC_1(VAR_8, VAR_9, VAR_4);
    FUNC_1(VAR_8, VAR_9, VAR_1);

    if (VAR_0 > 2) {

        FUNC_0(VAR_8, VAR_9, VAR_6, "Input colorant table");
        FUNC_0(VAR_8, VAR_9, VAR_5, "Input colorant out table");
    }

    FUNC_3("\n");
}
