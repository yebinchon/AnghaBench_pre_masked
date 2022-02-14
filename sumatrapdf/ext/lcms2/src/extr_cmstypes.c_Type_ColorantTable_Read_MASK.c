
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef void cmsNAMEDCOLORLIST ;
struct TYPE_6__ {int (* Read ) (int ,TYPE_1__*,char*,int,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;


 int FUNC_0 (int ,TYPE_1__*,int,int *) ;
 int FUNC_1 (int ,TYPE_1__*,scalar_t__*) ;
 void* FUNC_2 (int ,scalar_t__,int ,char*,char*) ;
 int FUNC_3 (int ,void*,char*,int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int ,char*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,TYPE_1__*,char*,int,int) ;

__attribute__((used)) static
void *FUNC_8(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, cmsUInt32Number* VAR_5, cmsUInt32Number VAR_6)
{
    cmsUInt32Number VAR_7, VAR_8;
    cmsNAMEDCOLORLIST* VAR_9;
    char VAR_10[34];
    cmsUInt16Number VAR_11[3];
    FUNC_6(VAR_3);


    if (!FUNC_1(VAR_2, VAR_4, &VAR_8)) return ((void*)0);

    if (VAR_8 > VAR_1) {
        FUNC_5(VAR_2, VAR_0, "Too many colorants '%d'", VAR_8);
        return ((void*)0);
    }

    VAR_9 = FUNC_2(VAR_2, VAR_8, 0, "", "");
    for (VAR_7=0; VAR_7 < VAR_8; VAR_7++) {

        if (VAR_4 ->Read(VAR_2, VAR_4,VAR_10, 32, 1) != 1) goto Error;
        VAR_10[32] = 0;

        if (!FUNC_0(VAR_2, VAR_4, 3, VAR_11)) goto Error;

        if (!FUNC_3(VAR_2, VAR_9, VAR_10, VAR_11, ((void*)0))) goto Error;

    }

    *VAR_5 = 1;
    return VAR_9;

Error:
    *VAR_5 = 0;
    FUNC_4(VAR_2, VAR_9);
    return ((void*)0);

    FUNC_6(VAR_6);
}
