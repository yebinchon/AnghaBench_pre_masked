
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
struct TYPE_7__ {int (* Read ) (int ,TYPE_1__*,int ,int,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
struct TYPE_8__ {int len; int data; int flag; } ;
typedef TYPE_2__ cmsICCData ;
typedef int cmsContext ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (struct _cms_typehandler_struct*) ;
 int FUNC_4 (int ,TYPE_1__*,int ,int,int) ;

__attribute__((used)) static
void *FUNC_5(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number* VAR_4, cmsUInt32Number VAR_5)
{
    cmsICCData* VAR_6;
    cmsUInt32Number VAR_7;
    FUNC_3(VAR_2);

    *VAR_4 = 0;

    if (VAR_5 < sizeof(cmsUInt32Number)) return ((void*)0);

    VAR_7 = VAR_5 - sizeof(cmsUInt32Number);
    if (VAR_7 > VAR_0) return ((void*)0);

    VAR_6 = (cmsICCData*) FUNC_1(VAR_1, sizeof(cmsICCData) + VAR_7 - 1);
    if (VAR_6 == ((void*)0)) return ((void*)0);

    VAR_6 ->len = VAR_7;
    if (!FUNC_2(VAR_1, VAR_3, &VAR_6->flag)) {
        FUNC_0(VAR_1, VAR_6);
        return ((void*)0);
    }

    if (VAR_3 -> Read(VAR_1, VAR_3, VAR_6 ->data, sizeof(cmsUInt8Number), VAR_7) != VAR_7) {

        FUNC_0(VAR_1, VAR_6);
        return ((void*)0);
    }

    *VAR_4 = 1;

    return (void*) VAR_6;
}
