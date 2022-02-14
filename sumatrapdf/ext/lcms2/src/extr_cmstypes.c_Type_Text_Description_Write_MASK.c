
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef char wchar_t ;
struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsMLU ;
struct TYPE_10__ {int (* Write ) (int ,TYPE_1__*,int,char*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int Filler ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,TYPE_1__*,int ) ;
 int FUNC_7 (int ,TYPE_1__*,int,char*) ;
 int FUNC_8 (int ,int *,int ,int ,char*,int) ;
 int FUNC_9 (int ,int *,int ,int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int ,int) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int ,TYPE_1__*,int,char*) ;
 int FUNC_14 (int ,TYPE_1__*,int,char*) ;
 int FUNC_15 (int ,TYPE_1__*,int,char*) ;

__attribute__((used)) static
cmsBool FUNC_16(cmsContext VAR_4, struct _cms_typehandler_struct* VAR_5, cmsIOHANDLER* VAR_6, void* VAR_7, cmsUInt32Number VAR_8)
{
    cmsMLU* VAR_9 = (cmsMLU*) VAR_7;
    char *VAR_10 = ((void*)0);
    wchar_t *VAR_11 = ((void*)0);
    cmsUInt32Number VAR_12, VAR_13, VAR_14, VAR_15;
    cmsBool VAR_16 = VAR_0;
    char VAR_17[68];
    FUNC_10(VAR_5);


    FUNC_11(VAR_17, 0, sizeof(VAR_17));


    VAR_12 = FUNC_8(VAR_4, VAR_9, VAR_3, VAR_2, ((void*)0), 0);
    if (VAR_12 <= 0) {

        VAR_10 = (char*) FUNC_2(VAR_4, "", sizeof(char));
        VAR_11 = (wchar_t*) FUNC_2(VAR_4, L"", sizeof(wchar_t));
    }
    else {

        VAR_10 = (char*) FUNC_1(VAR_4, VAR_12, sizeof(char));
        if (VAR_10 == ((void*)0)) goto Error;

        VAR_11 = (wchar_t*) FUNC_1(VAR_4, VAR_12, sizeof(wchar_t));
        if (VAR_11 == ((void*)0)) goto Error;


        FUNC_8(VAR_4, VAR_9, VAR_3, VAR_2, VAR_10, VAR_12 * sizeof(char));
        FUNC_9(VAR_4, VAR_9, VAR_3, VAR_2, VAR_11, VAR_12 * sizeof(wchar_t));
    }


    VAR_13 = (cmsUInt32Number) FUNC_12(VAR_10) + 1;

    VAR_14 = (8+4+VAR_13+4+4+2*VAR_13+2+1+67);
    VAR_15 = FUNC_0(VAR_14);
    if (!FUNC_5(VAR_4, VAR_6, VAR_13)) goto Error;
    if (!VAR_6 ->Write(VAR_4, VAR_6, VAR_13, VAR_10)) goto Error;

    if (!FUNC_5(VAR_4, VAR_6, 0)) goto Error;

    if (!FUNC_5(VAR_4, VAR_6, VAR_13)) goto Error;

    if (!FUNC_7(VAR_4, VAR_6, VAR_13, VAR_11)) goto Error;


    if (!FUNC_4(VAR_4, VAR_6, 0)) goto Error;
    if (!FUNC_6(VAR_4, VAR_6, 0)) goto Error;

    if (!VAR_6 ->Write(VAR_4, VAR_6, 67, VAR_17)) goto Error;


    if(VAR_15 - VAR_14 > 0)
      if (!VAR_6 ->Write(VAR_4, VAR_6, VAR_15 - VAR_14, VAR_17)) goto Error;

    VAR_16 = VAR_1;

Error:
    if (VAR_10) FUNC_3(VAR_4, VAR_10);
    if (VAR_11) FUNC_3(VAR_4, VAR_11);

    return VAR_16;

    FUNC_10(VAR_8);
}
