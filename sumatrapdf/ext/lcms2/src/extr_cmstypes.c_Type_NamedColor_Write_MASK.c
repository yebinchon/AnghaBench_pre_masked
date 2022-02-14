
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_11__ {scalar_t__ ColorantCount; scalar_t__ Suffix; scalar_t__ Prefix; } ;
typedef TYPE_1__ cmsNAMEDCOLORLIST ;
struct TYPE_12__ {int (* Write ) (int ,TYPE_2__*,int,char*) ;} ;
typedef TYPE_2__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int,int *) ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,scalar_t__,char*,int *,int *,int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (int ,TYPE_2__*,int,char*) ;
 int FUNC_7 (int ,TYPE_2__*,int,char*) ;
 int FUNC_8 (int ,TYPE_2__*,int,char*) ;

__attribute__((used)) static
cmsBool FUNC_9(cmsContext VAR_4, struct _cms_typehandler_struct* VAR_5, cmsIOHANDLER* VAR_6, void* VAR_7, cmsUInt32Number VAR_8)
{
    cmsNAMEDCOLORLIST* VAR_9 = (cmsNAMEDCOLORLIST*) VAR_7;
    char VAR_10[33];
    char VAR_11[33];
    cmsUInt32Number VAR_12, VAR_13;

    VAR_13 = FUNC_2(VAR_4, VAR_9);

    if (!FUNC_1(VAR_4, VAR_6, 0)) return VAR_0;
    if (!FUNC_1(VAR_4, VAR_6, VAR_13)) return VAR_0;
    if (!FUNC_1(VAR_4, VAR_6, VAR_9 ->ColorantCount)) return VAR_0;

    FUNC_5(VAR_10, (const char*) VAR_9->Prefix, 32);
    FUNC_5(VAR_11, (const char*) VAR_9->Suffix, 32);

    VAR_11[32] = VAR_10[32] = 0;

    if (!VAR_6 ->Write(VAR_4, VAR_6, 32, VAR_10)) return VAR_0;
    if (!VAR_6 ->Write(VAR_4, VAR_6, 32, VAR_11)) return VAR_0;

    for (VAR_12=0; VAR_12 < VAR_13; VAR_12++) {

       cmsUInt16Number VAR_14[3];
       cmsUInt16Number VAR_15[VAR_2];
       char VAR_16[VAR_3];

        if (!FUNC_3(VAR_4, VAR_9, VAR_12, VAR_16, ((void*)0), ((void*)0), VAR_14, VAR_15)) return 0;
        VAR_16[32] = 0;
        if (!VAR_6 ->Write(VAR_4, VAR_6, 32 , VAR_16)) return VAR_0;
        if (!FUNC_0(VAR_4, VAR_6, 3, VAR_14)) return VAR_0;
        if (!FUNC_0(VAR_4, VAR_6, VAR_9 ->ColorantCount, VAR_15)) return VAR_0;
    }

    return VAR_1;

    FUNC_4(VAR_8);
    FUNC_4(VAR_5);
}
