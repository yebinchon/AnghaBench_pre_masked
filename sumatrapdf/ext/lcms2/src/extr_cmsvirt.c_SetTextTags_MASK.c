
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int cmsMLU ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,char*,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_4, cmsHPROFILE VAR_5, const wchar_t* VAR_6)
{
    cmsMLU *VAR_7, *VAR_8;
    cmsBool VAR_9 = VAR_0;

    VAR_7 = FUNC_0(VAR_4, 1);
    VAR_8 = FUNC_0(VAR_4, 1);

    if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) goto Error;

    if (!FUNC_2(VAR_4, VAR_7, "en", "US", VAR_6)) goto Error;
    if (!FUNC_2(VAR_4, VAR_8, "en", "US", L"No copyright, use freely")) goto Error;

    if (!FUNC_3(VAR_4, VAR_5, VAR_3, VAR_7)) goto Error;
    if (!FUNC_3(VAR_4, VAR_5, VAR_2, VAR_8)) goto Error;

    VAR_9 = VAR_1;

Error:

    if (VAR_7)
        FUNC_1(VAR_4, VAR_7);
    if (VAR_8)
        FUNC_1(VAR_4, VAR_8);
    return VAR_9;
}
