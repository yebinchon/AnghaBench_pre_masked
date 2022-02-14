
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
typedef int cmsMLU ;
struct TYPE_7__ {int (* Seek ) (int ,TYPE_1__*,scalar_t__) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_8__ {scalar_t__* Offsets; int * Sizes; } ;
typedef TYPE_2__ _cmsDICelem ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct _cms_typehandler_struct*,TYPE_1__*,size_t*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, _cmsDICelem* VAR_5, cmsUInt32Number VAR_6, cmsMLU** VAR_7)
{
    cmsUInt32Number VAR_8 = 0;


    if (VAR_5 -> Offsets[VAR_6] == 0 || VAR_5 ->Sizes[VAR_6] == 0) {

        *VAR_7 = ((void*)0);
        return VAR_1;
    }

    if (!VAR_4 -> Seek(VAR_2, VAR_4, VAR_5 -> Offsets[VAR_6])) return VAR_0;

    *VAR_7 = (cmsMLU*) FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_8, VAR_5 ->Sizes[VAR_6]);
    return *VAR_7 != ((void*)0);
}
