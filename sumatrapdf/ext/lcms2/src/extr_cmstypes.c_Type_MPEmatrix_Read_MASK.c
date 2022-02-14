
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef void cmsStage ;
typedef int cmsIOHANDLER ;
typedef int cmsFloat64Number ;
typedef int cmsFloat32Number ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_4 (int ,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static
void *FUNC_6(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number* VAR_4, cmsUInt32Number VAR_5)
{
    cmsStage* VAR_6;
    cmsUInt16Number VAR_7, VAR_8;
    cmsUInt32Number VAR_9, VAR_10;
    cmsFloat64Number* VAR_11;
    cmsFloat64Number* VAR_12;
    FUNC_5(VAR_2);

    if (!FUNC_3(VAR_1, VAR_3, &VAR_7)) return ((void*)0);
    if (!FUNC_3(VAR_1, VAR_3, &VAR_8)) return ((void*)0);




    if (VAR_7 >= VAR_0) return ((void*)0);
    if (VAR_8 >= VAR_0) return ((void*)0);

    VAR_9 = (cmsUInt32Number) VAR_7 * VAR_8;

    VAR_11 = (cmsFloat64Number*) FUNC_0(VAR_1, VAR_9, sizeof(cmsFloat64Number));
    if (VAR_11 == ((void*)0)) return ((void*)0);

    VAR_12 = (cmsFloat64Number*) FUNC_0(VAR_1, VAR_8, sizeof(cmsFloat64Number));
    if (VAR_12 == ((void*)0)) {

        FUNC_1(VAR_1, VAR_11);
        return ((void*)0);
    }

    for (VAR_10=0; VAR_10 < VAR_9; VAR_10++) {

        cmsFloat32Number VAR_13;

        if (!FUNC_2(VAR_1, VAR_3, &VAR_13)) {
            FUNC_1(VAR_1, VAR_11);
            FUNC_1(VAR_1, VAR_12);
            return ((void*)0);
        }
        VAR_11[VAR_10] = VAR_13;
    }


    for (VAR_10=0; VAR_10 < VAR_8; VAR_10++) {

        cmsFloat32Number VAR_14;

        if (!FUNC_2(VAR_1, VAR_3, &VAR_14)) {
            FUNC_1(VAR_1, VAR_11);
            FUNC_1(VAR_1, VAR_12);
            return ((void*)0);
        }
        VAR_12[VAR_10] = VAR_14;
    }


    VAR_6 = FUNC_4(VAR_1, VAR_8, VAR_7, VAR_11, VAR_12);
    FUNC_1(VAR_1, VAR_11);
    FUNC_1(VAR_1, VAR_12);

    *VAR_4 = 1;

    return VAR_6;

    FUNC_5(VAR_5);
}
