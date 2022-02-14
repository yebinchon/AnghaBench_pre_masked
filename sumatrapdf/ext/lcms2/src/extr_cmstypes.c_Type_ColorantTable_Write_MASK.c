
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int root ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsNAMEDCOLORLIST ;
struct TYPE_6__ {int (* Write ) (int ,TYPE_1__*,int,char*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int,int *) ;
 int FUNC_1 (int ,TYPE_1__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,scalar_t__,char*,int *,int *,int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,TYPE_1__*,int,char*) ;

__attribute__((used)) static
cmsBool FUNC_7(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, void* VAR_6, cmsUInt32Number VAR_7)
{
    cmsNAMEDCOLORLIST* VAR_8 = (cmsNAMEDCOLORLIST*) VAR_6;
    cmsUInt32Number VAR_9, VAR_10;

    VAR_10 = FUNC_2(VAR_3, VAR_8);

    if (!FUNC_1(VAR_3, VAR_5, VAR_10)) return VAR_0;

    for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {

        char VAR_11[VAR_2];
        cmsUInt16Number VAR_12[3];

        FUNC_5(VAR_11, 0, sizeof(VAR_11));

        if (!FUNC_3(VAR_3, VAR_8, VAR_9, VAR_11, ((void*)0), ((void*)0), VAR_12, ((void*)0))) return 0;
        VAR_11[32] = 0;

        if (!VAR_5 ->Write(VAR_3, VAR_5, 32, VAR_11)) return VAR_0;
        if (!FUNC_0(VAR_3, VAR_5, 3, VAR_12)) return VAR_0;
    }

    return VAR_1;

    FUNC_4(VAR_7);
    FUNC_4(VAR_4);
}
