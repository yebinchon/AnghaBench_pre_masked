
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
typedef size_t cmsUInt32Number ;
struct TYPE_8__ {size_t (* Tell ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_9__ {size_t* Offsets; size_t* Sizes; } ;
typedef TYPE_2__ _cmsDICelem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,size_t,int const*) ;
 size_t FUNC_1 (int const*) ;
 size_t FUNC_2 (int ,TYPE_1__*) ;
 size_t FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_2, cmsIOHANDLER* VAR_3, _cmsDICelem* VAR_4, cmsUInt32Number VAR_5, const wchar_t * VAR_6, cmsUInt32Number VAR_7)
{
    cmsUInt32Number VAR_8 = VAR_3 ->Tell(VAR_2, VAR_3);
    cmsUInt32Number VAR_9;

    VAR_4 ->Offsets[VAR_5] = VAR_8 - VAR_7;

    if (VAR_6 == ((void*)0)) {
        VAR_4 ->Sizes[VAR_5] = 0;
        VAR_4 ->Offsets[VAR_5] = 0;
        return VAR_1;
    }

    VAR_9 = FUNC_1(VAR_6);
    if (!FUNC_0(VAR_2, VAR_3, VAR_9, VAR_6)) return VAR_0;

    VAR_4 ->Sizes[VAR_5] = VAR_3 ->Tell(VAR_2, VAR_3) - VAR_8;
    return VAR_1;
}
