
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
typedef int cmsMLU ;
struct TYPE_8__ {size_t (* Tell ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_9__ {size_t* Sizes; size_t* Offsets; } ;
typedef TYPE_2__ _cmsDICelem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct _cms_typehandler_struct*,TYPE_1__*,void*,int) ;
 size_t FUNC_1 (int ,TYPE_1__*) ;
 size_t FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, _cmsDICelem* VAR_5, cmsUInt32Number VAR_6, const cmsMLU* VAR_7, cmsUInt32Number VAR_8)
{
    cmsUInt32Number VAR_9;



     if (VAR_7 == ((void*)0)) {
        VAR_5 ->Sizes[VAR_6] = 0;
        VAR_5 ->Offsets[VAR_6] = 0;
        return VAR_1;
    }

    VAR_9 = VAR_4 ->Tell(VAR_2, VAR_4);
    VAR_5 ->Offsets[VAR_6] = VAR_9 - VAR_8;

    if (!FUNC_0(VAR_2, VAR_3, VAR_4, (void*) VAR_7, 1)) return VAR_0;

    VAR_5 ->Sizes[VAR_6] = VAR_4 ->Tell(VAR_2, VAR_4) - VAR_9;
    return VAR_1;
}
