
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number VAR_4, const wchar_t* VAR_5)
{
    cmsUInt32Number VAR_6;

    FUNC_0(VAR_3 != ((void*)0));
    FUNC_0(!(VAR_5 == ((void*)0) && VAR_4 > 0));

    for (VAR_6=0; VAR_6 < VAR_4; VAR_6++) {
        if (!FUNC_1(VAR_2, VAR_3, (cmsUInt16Number) VAR_5[VAR_6])) return VAR_0;
    }

    return VAR_1;
}
