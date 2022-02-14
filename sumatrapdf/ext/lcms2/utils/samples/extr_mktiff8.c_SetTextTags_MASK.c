
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsMLU ;
typedef int cmsHPROFILE ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsHPROFILE VAR_4)
{
    cmsMLU *VAR_5, *VAR_6;
    cmsBool VAR_7 = VAR_0;

    VAR_5 = FUNC_0(0, 1);
    VAR_6 = FUNC_0(0, 1);

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) goto Error;

    if (!FUNC_2(VAR_5, "en", "US", "Little cms Tiff8 CIELab")) goto Error;
    if (!FUNC_2(VAR_6, "en", "US", "Copyright (c) Marti Maria, 2010. All rights reserved.")) goto Error;

    if (!FUNC_3(VAR_4, VAR_3, VAR_5)) goto Error;
    if (!FUNC_3(VAR_4, VAR_2, VAR_6)) goto Error;

    VAR_7 = VAR_1;

Error:

    if (VAR_5)
        FUNC_1(VAR_5);
    if (VAR_6)
        FUNC_1(VAR_6);
    return VAR_7;
}
