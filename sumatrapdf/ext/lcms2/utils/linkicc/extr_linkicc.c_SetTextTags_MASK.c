
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsMLU ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,char*,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_6, cmsHPROFILE VAR_7)
{
    cmsMLU *VAR_8, *VAR_9;
    cmsBool VAR_10 = VAR_2;

    VAR_8 = FUNC_0(VAR_6, 1);
    VAR_9 = FUNC_0(VAR_6, 1);

    if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) goto Error;

    if (!FUNC_2(VAR_6, VAR_8, "en", "US", VAR_1)) goto Error;
    if (!FUNC_2(VAR_6, VAR_9, "en", "US", VAR_0)) goto Error;

    if (!FUNC_3(VAR_6, VAR_7, VAR_5, VAR_8)) goto Error;
    if (!FUNC_3(VAR_6, VAR_7, VAR_4, VAR_9)) goto Error;

    VAR_10 = VAR_3;

Error:

    if (VAR_8)
        FUNC_1(VAR_6, VAR_8);
    if (VAR_9)
        FUNC_1(VAR_6, VAR_9);
    return VAR_10;
}
