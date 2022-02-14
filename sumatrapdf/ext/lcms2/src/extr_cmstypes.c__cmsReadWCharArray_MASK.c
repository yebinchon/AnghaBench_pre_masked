
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef size_t cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,scalar_t__*) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number VAR_4, wchar_t* VAR_5)
{
    cmsUInt32Number VAR_6;
    cmsUInt16Number VAR_7;

    FUNC_0(VAR_3 != ((void*)0));

    for (VAR_6=0; VAR_6 < VAR_4; VAR_6++) {

        if (VAR_5 != ((void*)0)) {

            if (!FUNC_1(VAR_2, VAR_3, &VAR_7)) return VAR_0;
            VAR_5[VAR_6] = (wchar_t) VAR_7;
        }
        else {
            if (!FUNC_1(VAR_2, VAR_3, ((void*)0))) return VAR_0;
        }

    }
    return VAR_1;
}
