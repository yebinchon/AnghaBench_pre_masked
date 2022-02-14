
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsIOHANDLER ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
void *FUNC_4(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, cmsIOHANDLER* VAR_2, cmsUInt32Number* VAR_3, cmsUInt32Number VAR_4)
{
    cmsFloat64Number* VAR_5;
    cmsUInt32Number VAR_6, VAR_7;
    FUNC_3(VAR_1);

    *VAR_3 = 0;
    VAR_7 = VAR_4 / sizeof(cmsUInt32Number);
    VAR_5 = (cmsFloat64Number*) FUNC_0(VAR_0, VAR_7, sizeof(cmsFloat64Number));
    if (VAR_5 == ((void*)0)) return ((void*)0);

    for (VAR_6=0; VAR_6 < VAR_7; VAR_6++) {

        if (!FUNC_2(VAR_0, VAR_2, &VAR_5[VAR_6])) {

            FUNC_1(VAR_0, VAR_5);
            return ((void*)0);
        }
    }

    *VAR_3 = VAR_7;
    return (void*) VAR_5;
}
