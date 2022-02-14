
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int * cmsHPROFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_7 (int ,int ,int,int,int *) ;
 int FUNC_8 (int *,int *,int ,int *,int ) ;
 int FUNC_9 (int *,int *,int ,int *) ;

__attribute__((used)) static
cmsHPROFILE FUNC_10(void)
{
    cmsHPROFILE VAR_6;
    cmsPipeline* VAR_7;
    cmsStage* VAR_8;

    VAR_7 = FUNC_1(0, 3, 3);
    if (VAR_7 == ((void*)0)) return ((void*)0);

    VAR_8 = FUNC_7(0, VAR_0, 3, 3, ((void*)0));
    if (VAR_8 == ((void*)0)) return ((void*)0);

    FUNC_3(((void*)0), VAR_7, VAR_2, VAR_8);
    FUNC_8(((void*)0), VAR_8, VAR_1, ((void*)0), 0);

    VAR_6 = FUNC_0(0);
    if (VAR_6 == ((void*)0)) {
        FUNC_2(((void*)0), VAR_7);
        return ((void*)0);
    }

    FUNC_9(((void*)0), VAR_6, VAR_3, VAR_7);
    FUNC_4(((void*)0), VAR_6, VAR_5);
    FUNC_6(((void*)0), VAR_6, VAR_5);
    FUNC_5(((void*)0), VAR_6, VAR_4);
    FUNC_2(((void*)0), VAR_7);

    return VAR_6;
}
