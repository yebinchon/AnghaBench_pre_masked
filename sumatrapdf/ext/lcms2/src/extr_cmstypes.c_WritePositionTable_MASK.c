
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
struct TYPE_12__ {size_t (* Tell ) (int ,TYPE_1__*) ;int (* Seek ) (int ,TYPE_1__*,size_t) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int (* PositionTableEntryFn ) (int ,struct _cms_typehandler_struct*,TYPE_1__*,void*,size_t,size_t) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,size_t,int) ;
 int FUNC_1 (int ,size_t*) ;
 int FUNC_2 (int ,TYPE_1__*,size_t) ;
 size_t FUNC_3 (int ,TYPE_1__*) ;
 size_t FUNC_4 (int ,TYPE_1__*) ;
 size_t FUNC_5 (int ,TYPE_1__*) ;
 size_t FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,TYPE_1__*,size_t) ;
 int FUNC_8 (int ,TYPE_1__*,size_t) ;

__attribute__((used)) static
cmsBool FUNC_9(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3,
                               cmsIOHANDLER* VAR_4,
                               cmsUInt32Number VAR_5,
                               cmsUInt32Number VAR_6,
                               cmsUInt32Number VAR_7,
                               void *VAR_8,
                               PositionTableEntryFn VAR_9)
{
    cmsUInt32Number VAR_10;
    cmsUInt32Number VAR_11, VAR_12, VAR_13;
    cmsUInt32Number *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);


    VAR_14 = (cmsUInt32Number *) FUNC_0(VAR_2, VAR_6, sizeof(cmsUInt32Number));
    if (VAR_14 == ((void*)0)) goto Error;

    VAR_15 = (cmsUInt32Number *) FUNC_0(VAR_2, VAR_6, sizeof(cmsUInt32Number));
    if (VAR_15 == ((void*)0)) goto Error;


    VAR_11 = VAR_4 ->Tell(VAR_2, VAR_4);


    for (VAR_10=0; VAR_10 < VAR_6; VAR_10++) {

        if (!FUNC_2(VAR_2, VAR_4, 0)) goto Error;
        if (!FUNC_2(VAR_2, VAR_4, 0)) goto Error;
    }


    for (VAR_10=0; VAR_10 < VAR_6; VAR_10++) {

        VAR_13 = VAR_4 ->Tell(VAR_2, VAR_4);
        VAR_14[VAR_10] = VAR_13 - VAR_7;


        if (!VAR_9(VAR_2, VAR_3, VAR_4, VAR_8, VAR_10, VAR_5)) goto Error;


        VAR_15[VAR_10] = VAR_4 ->Tell(VAR_2, VAR_4) - VAR_13;
    }


    VAR_12 = VAR_4 ->Tell(VAR_2, VAR_4);
    if (!VAR_4 ->Seek(VAR_2, VAR_4, VAR_11)) goto Error;

    for (VAR_10=0; VAR_10 < VAR_6; VAR_10++) {
        if (!FUNC_2(VAR_2, VAR_4, VAR_14[VAR_10])) goto Error;
        if (!FUNC_2(VAR_2, VAR_4, VAR_15[VAR_10])) goto Error;
    }

    if (!VAR_4 ->Seek(VAR_2, VAR_4, VAR_12)) goto Error;

    if (VAR_14 != ((void*)0)) FUNC_1(VAR_2, VAR_14);
    if (VAR_15 != ((void*)0)) FUNC_1(VAR_2, VAR_15);
    return VAR_1;

Error:
    if (VAR_14 != ((void*)0)) FUNC_1(VAR_2, VAR_14);
    if (VAR_15 != ((void*)0)) FUNC_1(VAR_2, VAR_15);
    return VAR_0;
}
