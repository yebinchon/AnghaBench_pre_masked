
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef void cmsPipeline ;
typedef int cmsMAT3 ;
typedef int cmsIOHANDLER ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;


 int FUNC_0 (int ,int *,void*,int,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *,scalar_t__,int*) ;
 int FUNC_6 (int ,int *,int*) ;
 int FUNC_7 (int ,int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 (int ,void*,int ,int ) ;
 int FUNC_11 (int ,int,int,int,int*) ;
 int FUNC_12 (int ,int,int,int *,int *) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int,int,int) ;

__attribute__((used)) static
void *FUNC_15(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, cmsUInt32Number* VAR_5, cmsUInt32Number VAR_6)
{
    cmsUInt8Number VAR_7, VAR_8, VAR_9;
    cmsPipeline* VAR_10 = ((void*)0);
    cmsUInt32Number VAR_11;
    cmsFloat64Number VAR_12[3*3];
    cmsUInt16Number VAR_13, VAR_14;
    FUNC_13(VAR_3);

    *VAR_5 = 0;

    if (!FUNC_7(VAR_2, VAR_4, &VAR_7)) return ((void*)0);
    if (!FUNC_7(VAR_2, VAR_4, &VAR_8)) return ((void*)0);
    if (!FUNC_7(VAR_2, VAR_4, &VAR_9)) return ((void*)0);


    if (!FUNC_7(VAR_2, VAR_4, ((void*)0))) return ((void*)0);


    if (VAR_7 == 0 || VAR_7 > VAR_1) goto Error;
    if (VAR_8 == 0 || VAR_8 > VAR_1) goto Error;


    VAR_10 = FUNC_8(VAR_2, VAR_7, VAR_8);
    if (VAR_10 == ((void*)0)) goto Error;


    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[0])) goto Error;
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[1])) goto Error;
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[2])) goto Error;
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[3])) goto Error;
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[4])) goto Error;
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[5])) goto Error;
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[6])) goto Error;
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[7])) goto Error;
    if (!FUNC_4(VAR_2, VAR_4, &VAR_12[8])) goto Error;



    if ((VAR_7 == 3) && !FUNC_3(VAR_2, (cmsMAT3*) VAR_12)) {

        if (!FUNC_10(VAR_2, VAR_10, VAR_0, FUNC_12(VAR_2, 3, 3, VAR_12, ((void*)0))))
            goto Error;
    }

    if (!FUNC_6(VAR_2, VAR_4, &VAR_13)) goto Error;
    if (!FUNC_6(VAR_2, VAR_4, &VAR_14)) goto Error;

    if (VAR_13 > 0x7FFF || VAR_14 > 0x7FFF) goto Error;
    if (VAR_9 == 1) goto Error;


    if (!FUNC_0(VAR_2, VAR_4, VAR_10, VAR_7, VAR_13)) goto Error;


    VAR_11 = FUNC_14(VAR_8, VAR_9, VAR_7);
    if (VAR_11 == (cmsUInt32Number) -1) goto Error;
    if (VAR_11 > 0) {

        cmsUInt16Number *VAR_15;

        VAR_15 = (cmsUInt16Number*) FUNC_1(VAR_2, VAR_11, sizeof(cmsUInt16Number));
        if (VAR_15 == ((void*)0)) goto Error;

        if (!FUNC_5(VAR_2, VAR_4, VAR_11, VAR_15)) {
            FUNC_2(VAR_2, VAR_15);
            goto Error;
        }

        if (!FUNC_10(VAR_2, VAR_10, VAR_0, FUNC_11(VAR_2, VAR_9, VAR_7, VAR_8, VAR_15))) {
            FUNC_2(VAR_2, VAR_15);
            goto Error;
        }
        FUNC_2(VAR_2, VAR_15);
    }



    if (!FUNC_0(VAR_2, VAR_4, VAR_10, VAR_8, VAR_14)) goto Error;

    *VAR_5 = 1;
    return VAR_10;

Error:
    if (VAR_10 != ((void*)0)) FUNC_9(VAR_2, VAR_10);
    return ((void*)0);

    FUNC_13(VAR_6);
}
