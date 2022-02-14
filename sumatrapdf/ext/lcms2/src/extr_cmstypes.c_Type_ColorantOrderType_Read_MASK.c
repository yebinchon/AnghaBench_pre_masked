
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
struct TYPE_5__ {int (* Read ) (int ,TYPE_1__*,int *,int,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,TYPE_1__*,int*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int ,TYPE_1__*,int *,int,int) ;

__attribute__((used)) static
void *FUNC_6(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number* VAR_4, cmsUInt32Number VAR_5)
{
    cmsUInt8Number* VAR_6;
    cmsUInt32Number VAR_7;
    FUNC_3(VAR_2);

    *VAR_4 = 0;
    if (!FUNC_2(VAR_1, VAR_3, &VAR_7)) return ((void*)0);
    if (VAR_7 > VAR_0) return ((void*)0);

    VAR_6 = (cmsUInt8Number*) FUNC_0(VAR_1, VAR_0, sizeof(cmsUInt8Number));
    if (VAR_6 == ((void*)0)) return ((void*)0);


    FUNC_4(VAR_6, 0xFF, VAR_0 * sizeof(cmsUInt8Number));

    if (VAR_3 ->Read(VAR_1, VAR_3, VAR_6, sizeof(cmsUInt8Number), VAR_7) != VAR_7) {

        FUNC_1(VAR_1, (void*) VAR_6);
        return ((void*)0);
    }

    *VAR_4 = 1;
    return (void*) VAR_6;

    FUNC_3(VAR_5);
}
