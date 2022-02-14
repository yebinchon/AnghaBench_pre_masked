
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
typedef void cmsPipeline ;
struct TYPE_10__ {scalar_t__ (* Tell ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int _cmsTagBase ;


 int FUNC_0 (int ,struct _cms_typehandler_struct*,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,struct _cms_typehandler_struct*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,struct _cms_typehandler_struct*,TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,scalar_t__*) ;
 int FUNC_5 (int ,TYPE_1__*,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,void*,int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;

__attribute__((used)) static
void* FUNC_11(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, cmsUInt32Number* VAR_5, cmsUInt32Number VAR_6)
{
    cmsUInt32Number VAR_7;
    cmsUInt8Number VAR_8;
    cmsUInt8Number VAR_9;
    cmsUInt32Number VAR_10;
    cmsUInt32Number VAR_11;
    cmsUInt32Number VAR_12;
    cmsUInt32Number VAR_13;
    cmsUInt32Number VAR_14;
    cmsPipeline* VAR_15 = ((void*)0);


    VAR_7 = VAR_4 ->Tell(VAR_2, VAR_4) - sizeof(_cmsTagBase);

    if (!FUNC_5(VAR_2, VAR_4, &VAR_8)) return ((void*)0);
    if (!FUNC_5(VAR_2, VAR_4, &VAR_9)) return ((void*)0);

    if (!FUNC_3(VAR_2, VAR_4, ((void*)0))) return ((void*)0);

    if (!FUNC_4(VAR_2, VAR_4, &VAR_10)) return ((void*)0);
    if (!FUNC_4(VAR_2, VAR_4, &VAR_11)) return ((void*)0);
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12)) return ((void*)0);
    if (!FUNC_4(VAR_2, VAR_4, &VAR_13)) return ((void*)0);
    if (!FUNC_4(VAR_2, VAR_4, &VAR_14)) return ((void*)0);

    if (VAR_8 == 0 || VAR_8 >= VAR_1) return ((void*)0);
    if (VAR_9 == 0 || VAR_9 >= VAR_1) return ((void*)0);


    VAR_15 = FUNC_6(VAR_2, VAR_8, VAR_9);
    if (VAR_15 == ((void*)0)) return ((void*)0);

    if (VAR_14!= 0) {
        if (!FUNC_8(VAR_2, VAR_15, VAR_0, FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7 + VAR_14, VAR_8)))
            goto Error;
    }

    if (VAR_13 != 0) {
        if (!FUNC_8(VAR_2, VAR_15, VAR_0, FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7 + VAR_13, VAR_8, VAR_9)))
            goto Error;
    }

    if (VAR_12 != 0) {
        if (!FUNC_8(VAR_2, VAR_15, VAR_0, FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7 + VAR_12, VAR_9)))
            goto Error;
    }

    if (VAR_11 != 0) {
        if (!FUNC_8(VAR_2, VAR_15, VAR_0, FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7 + VAR_11)))
            goto Error;
    }

    if (VAR_10 != 0) {
        if (!FUNC_8(VAR_2, VAR_15, VAR_0, FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7 + VAR_10, VAR_9)))
            goto Error;
    }

    *VAR_5 = 1;
    return VAR_15;
Error:
    FUNC_7(VAR_2, VAR_15);
    return ((void*)0);

    FUNC_9(VAR_6);
}
