
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef void cmsPipeline ;
typedef int cmsMAT3 ;
struct TYPE_7__ {int (* Read ) (int ,TYPE_1__*,int*,scalar_t__,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,void*,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,TYPE_1__*,int *) ;
 int FUNC_7 (int ,TYPE_1__*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 (int ,void*,int ,int ) ;
 int FUNC_11 (int ,int,int,int,int*) ;
 int FUNC_12 (int ,int,int,int *,int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ,TYPE_1__*,int*,scalar_t__,int) ;
 scalar_t__ FUNC_15 (int,int,int) ;

__attribute__((used)) static
void *FUNC_16(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, cmsUInt32Number* VAR_6, cmsUInt32Number VAR_7)
{
    cmsUInt8Number VAR_8, VAR_9, VAR_10;
    cmsUInt8Number* VAR_11 = ((void*)0);
    cmsPipeline* VAR_12 = ((void*)0);
    cmsUInt32Number VAR_13, VAR_14;
    cmsFloat64Number VAR_15[3*3];
    FUNC_13(VAR_4);

    *VAR_6 = 0;

    if (!FUNC_7(VAR_3, VAR_5, &VAR_8)) goto Error;
    if (!FUNC_7(VAR_3, VAR_5, &VAR_9)) goto Error;
    if (!FUNC_7(VAR_3, VAR_5, &VAR_10)) goto Error;

     if (VAR_10 == 1) goto Error;


    if (!FUNC_7(VAR_3, VAR_5, ((void*)0))) goto Error;


    if (VAR_8 == 0 || VAR_8 > VAR_2) goto Error;
    if (VAR_9 == 0 || VAR_9 > VAR_2) goto Error;


    VAR_12 = FUNC_8(VAR_3, VAR_8, VAR_9);
    if (VAR_12 == ((void*)0)) goto Error;


    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[0])) goto Error;
    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[1])) goto Error;
    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[2])) goto Error;
    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[3])) goto Error;
    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[4])) goto Error;
    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[5])) goto Error;
    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[6])) goto Error;
    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[7])) goto Error;
    if (!FUNC_6(VAR_3, VAR_5, &VAR_15[8])) goto Error;



    if ((VAR_8 == 3) && !FUNC_4(VAR_3, (cmsMAT3*) VAR_15)) {

        if (!FUNC_10(VAR_3, VAR_12, VAR_0, FUNC_12(VAR_3, 3, 3, VAR_15, ((void*)0))))
            goto Error;
    }


    if (!FUNC_1(VAR_3, VAR_5, VAR_12, VAR_8)) goto Error;


    VAR_13 = FUNC_15(VAR_9, VAR_10, VAR_8);
    if (VAR_13 == (cmsUInt32Number) -1) goto Error;
    if (VAR_13 > 0) {

        cmsUInt16Number *VAR_16, *VAR_17;

        VAR_16 = VAR_17 = (cmsUInt16Number*) FUNC_2(VAR_3, VAR_13, sizeof(cmsUInt16Number));
        if (VAR_17 == ((void*)0)) goto Error;

        VAR_11 = (cmsUInt8Number*) FUNC_5(VAR_3, VAR_13);
        if (VAR_11 == ((void*)0)) {
            FUNC_3(VAR_3, VAR_17);
            goto Error;
        }

        if (VAR_5 ->Read(VAR_3, VAR_5, VAR_11, VAR_13, 1) != 1) {
            FUNC_3(VAR_3, VAR_17);
            FUNC_3(VAR_3, VAR_11);
            goto Error;
        }

        for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {

            *VAR_16++ = FUNC_0(VAR_11[VAR_14]);
        }
        FUNC_3(VAR_3, VAR_11);
        VAR_11 = ((void*)0);

        if (!FUNC_10(VAR_3, VAR_12, VAR_1, FUNC_11(VAR_3, VAR_10, VAR_8, VAR_9, VAR_17))) {
            FUNC_3(VAR_3, VAR_17);
            goto Error;
        }
        FUNC_3(VAR_3, VAR_17);
    }



    if (!FUNC_1(VAR_3, VAR_5, VAR_12, VAR_9)) goto Error;

    *VAR_6 = 1;
    return VAR_12;

Error:
    if (VAR_12 != ((void*)0)) FUNC_9(VAR_3, VAR_12);
    return ((void*)0);

    FUNC_13(VAR_7);
}
