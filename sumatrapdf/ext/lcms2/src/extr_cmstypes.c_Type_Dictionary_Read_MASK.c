
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsMLU ;
struct TYPE_12__ {int (* Tell ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int * cmsHANDLE ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int _cmsTagBase ;
struct TYPE_13__ {int DisplayValue; int DisplayName; int Value; int Name; } ;
typedef TYPE_2__ _cmsDICarray ;


 int FUNC_0 (int ,TYPE_2__*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_2__*,int,int,int) ;
 int FUNC_3 (int ,struct _cms_typehandler_struct*,TYPE_1__*,int *,int,int **) ;
 int FUNC_4 (int ,TYPE_1__*,int *,int,int **) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,TYPE_1__*,int*) ;
 int FUNC_7 (int ,int *,int *,int *,int *,int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int ,char*,...) ;
 int FUNC_12 (int ,TYPE_1__*) ;

__attribute__((used)) static
void *FUNC_13(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, cmsUInt32Number* VAR_6, cmsUInt32Number VAR_7)
{
   cmsHANDLE VAR_8;
   cmsUInt32Number VAR_9, VAR_10, VAR_11;
   cmsUInt32Number VAR_12;
   _cmsDICarray VAR_13;
   wchar_t *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
   cmsMLU *VAR_16 = ((void*)0), *VAR_17=((void*)0);
   cmsBool VAR_18;

    *VAR_6 = 0;


    VAR_12 = VAR_5 ->Tell(VAR_3, VAR_5) - sizeof(_cmsTagBase);


    if (!FUNC_6(VAR_3, VAR_5, &VAR_10)) return ((void*)0);
    VAR_7 -= sizeof(cmsUInt32Number);


    if (!FUNC_6(VAR_3, VAR_5, &VAR_11)) return ((void*)0);
    VAR_7 -= sizeof(cmsUInt32Number);


    if (VAR_11 != 16 && VAR_11 != 24 && VAR_11 != 32) {
         FUNC_11(VAR_3, VAR_2, "Unknown record length in dictionary '%d'", VAR_11);
         return ((void*)0);
    }


    VAR_8 = FUNC_8(VAR_3);
    if (VAR_8 == ((void*)0)) return ((void*)0);


    if (!FUNC_0(VAR_3, &VAR_13, VAR_10, VAR_11)) goto Error;


    if (!FUNC_2(VAR_3, VAR_5, &VAR_13, VAR_10, VAR_11, VAR_12)) goto Error;


    for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {

        if (!FUNC_4(VAR_3, VAR_5, &VAR_13.Name, VAR_9, &VAR_14)) goto Error;
        if (!FUNC_4(VAR_3, VAR_5, &VAR_13.Value, VAR_9, &VAR_15)) goto Error;

        if (VAR_11 > 16) {
            if (!FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_13.DisplayName, VAR_9, &VAR_16)) goto Error;
        }

        if (VAR_11 > 24) {
            if (!FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_13.DisplayValue, VAR_9, &VAR_17)) goto Error;
        }

        if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0)) {

            FUNC_11(VAR_3, VAR_1, "Bad dictionary Name/Value");
            VAR_18 = VAR_0;
        }
        else {

            VAR_18 = FUNC_7(VAR_3, VAR_8, VAR_14, VAR_15, VAR_16, VAR_17);
        }

        if (VAR_14 != ((void*)0)) FUNC_5(VAR_3, VAR_14);
        if (VAR_15 != ((void*)0)) FUNC_5(VAR_3, VAR_15);
        if (VAR_16 != ((void*)0)) FUNC_10(VAR_3, VAR_16);
        if (VAR_17 != ((void*)0)) FUNC_10(VAR_3, VAR_17);

        if (!VAR_18) goto Error;
    }

   FUNC_1(VAR_3, &VAR_13);
   *VAR_6 = 1;
   return (void*) VAR_8;

Error:
   FUNC_1(VAR_3, &VAR_13);
   FUNC_9(VAR_3, VAR_8);
   return ((void*)0);
}
