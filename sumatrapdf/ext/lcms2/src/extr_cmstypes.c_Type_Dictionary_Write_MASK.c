
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
struct TYPE_20__ {int (* Tell ) (int ,TYPE_1__*) ;int (* Seek ) (int ,TYPE_1__*,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int * cmsHANDLE ;
struct TYPE_21__ {int * DisplayValue; int * DisplayName; int Value; int Name; } ;
typedef TYPE_2__ cmsDICTentry ;
typedef int cmsContext ;
typedef scalar_t__ cmsBool ;
typedef int _cmsTagBase ;
struct TYPE_22__ {int DisplayValue; int DisplayName; int Value; int Name; } ;
typedef TYPE_3__ _cmsDICarray ;


 int FUNC_0 (int ,TYPE_3__*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_3__*,int,int) ;
 int FUNC_3 (int ,struct _cms_typehandler_struct*,TYPE_1__*,int *,int,int *,int) ;
 int FUNC_4 (int ,TYPE_1__*,int *,int,int ,int) ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 TYPE_2__* FUNC_6 (int ,int *) ;
 TYPE_2__* FUNC_7 (int ,TYPE_2__ const*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,TYPE_1__*,int) ;
 int FUNC_13 (int ,TYPE_1__*,int) ;

__attribute__((used)) static
cmsBool FUNC_14(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsHANDLE VAR_7 = (cmsHANDLE) VAR_5;
    const cmsDICTentry* VAR_8;
    cmsBool VAR_9, VAR_10;
    cmsUInt32Number VAR_11, VAR_12, VAR_13;
    cmsUInt32Number VAR_14, VAR_15, VAR_16;
   _cmsDICarray VAR_17;

    if (VAR_7 == ((void*)0)) return VAR_0;

    VAR_16 = VAR_4 ->Tell(VAR_2, VAR_4) - sizeof(_cmsTagBase);


    VAR_12 = 0; VAR_9 = VAR_0; VAR_10 = VAR_0;
    for (VAR_8 = FUNC_6(VAR_2, VAR_7); VAR_8 != ((void*)0); VAR_8 = FUNC_7(VAR_2, VAR_8)) {

        if (VAR_8 ->DisplayName != ((void*)0)) VAR_9 = VAR_1;
        if (VAR_8 ->DisplayValue != ((void*)0)) VAR_10 = VAR_1;
        VAR_12++;
    }

    VAR_13 = 16;
    if (VAR_9) VAR_13 += 8;
    if (VAR_10) VAR_13 += 8;

    if (!FUNC_5(VAR_2, VAR_4, VAR_12)) return VAR_0;
    if (!FUNC_5(VAR_2, VAR_4, VAR_13)) return VAR_0;


    VAR_14 = VAR_4 ->Tell(VAR_2, VAR_4);


    if (!FUNC_0(VAR_2, &VAR_17, VAR_12, VAR_13)) goto Error;


    if (!FUNC_2(VAR_2, VAR_4, &VAR_17, VAR_12, VAR_13)) goto Error;


    VAR_8 = FUNC_6(VAR_2, VAR_7);
    for (VAR_11=0; VAR_11 < VAR_12; VAR_11++) {

        if (!FUNC_4(VAR_2, VAR_4, &VAR_17.Name, VAR_11, VAR_8 ->Name, VAR_16)) goto Error;
        if (!FUNC_4(VAR_2, VAR_4, &VAR_17.Value, VAR_11, VAR_8 ->Value, VAR_16)) goto Error;

        if (VAR_8 ->DisplayName != ((void*)0)) {
            if (!FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_17.DisplayName, VAR_11, VAR_8 ->DisplayName, VAR_16)) goto Error;
        }

        if (VAR_8 ->DisplayValue != ((void*)0)) {
            if (!FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_17.DisplayValue, VAR_11, VAR_8 ->DisplayValue, VAR_16)) goto Error;
        }

       VAR_8 = FUNC_7(VAR_2, VAR_8);
    }


    VAR_15 = VAR_4 ->Tell(VAR_2, VAR_4);
    if (!VAR_4 ->Seek(VAR_2, VAR_4, VAR_14)) goto Error;

    if (!FUNC_2(VAR_2, VAR_4, &VAR_17, VAR_12, VAR_13)) goto Error;

    if (!VAR_4 ->Seek(VAR_2, VAR_4, VAR_15)) goto Error;

    FUNC_1(VAR_2, &VAR_17);
    return VAR_1;

Error:
    FUNC_1(VAR_2, &VAR_17);
    return VAR_0;

    FUNC_8(VAR_6);
}
