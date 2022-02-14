
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsNAMEDCOLORLIST ;
struct TYPE_8__ {int (* Read ) (int ,TYPE_1__*,char*,int,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int Colorant ;


 int FUNC_0 (int ,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_1 (int ,TYPE_1__*,scalar_t__*) ;
 int * FUNC_2 (int ,scalar_t__,scalar_t__,char*,char*) ;
 int FUNC_3 (int ,int *,char*,int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int ,char*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,TYPE_1__*,char*,int,int) ;
 int FUNC_9 (int ,TYPE_1__*,char*,int,int) ;
 int FUNC_10 (int ,TYPE_1__*,char*,int,int) ;

__attribute__((used)) static
void *FUNC_11(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, cmsUInt32Number* VAR_5, cmsUInt32Number VAR_6)
{

    cmsUInt32Number VAR_7;
    cmsUInt32Number VAR_8;
    cmsUInt32Number VAR_9;
    char VAR_10[32];
    char VAR_11[32];
    cmsNAMEDCOLORLIST* VAR_12;
    cmsUInt32Number VAR_13;
    FUNC_6(VAR_3);


    *VAR_5 = 0;
    if (!FUNC_1(VAR_2, VAR_4, &VAR_7)) return ((void*)0);
    if (!FUNC_1(VAR_2, VAR_4, &VAR_8)) return ((void*)0);
    if (!FUNC_1(VAR_2, VAR_4, &VAR_9)) return ((void*)0);

    if (VAR_4 -> Read(VAR_2, VAR_4,VAR_10, 32, 1) != 1) return ((void*)0);
    if (VAR_4 -> Read(VAR_2, VAR_4,VAR_11, 32, 1) != 1) return ((void*)0);

    VAR_10[31] = VAR_11[31] = 0;

    VAR_12 = FUNC_2(VAR_2, VAR_8, VAR_9, VAR_10, VAR_11);
    if (VAR_12 == ((void*)0)) {
        FUNC_5(VAR_2, VAR_0, "Too many named colors '%d'", VAR_8);
        return ((void*)0);
    }

    if (VAR_9 > VAR_1) {
        FUNC_5(VAR_2, VAR_0, "Too many device coordinates '%d'", VAR_9);
        goto Error;
    }
    for (VAR_13=0; VAR_13 < VAR_8; VAR_13++) {

        cmsUInt16Number VAR_14[3];
        cmsUInt16Number VAR_15[VAR_1];
        char VAR_16[33];

        FUNC_7(VAR_15, 0, sizeof(VAR_15));
        if (VAR_4 -> Read(VAR_2, VAR_4,VAR_16, 32, 1) != 1) goto Error;
        VAR_16[32] = 0;

        if (!FUNC_0(VAR_2, VAR_4, 3, VAR_14)) goto Error;
        if (!FUNC_0(VAR_2, VAR_4, VAR_9, VAR_15)) goto Error;

        if (!FUNC_3(VAR_2, VAR_12, VAR_16, VAR_14, VAR_15)) goto Error;
    }

    *VAR_5 = 1;
    return (void*) VAR_12 ;

Error:
    FUNC_4(VAR_2, VAR_12);
    return ((void*)0);

    FUNC_6(VAR_6);
}
