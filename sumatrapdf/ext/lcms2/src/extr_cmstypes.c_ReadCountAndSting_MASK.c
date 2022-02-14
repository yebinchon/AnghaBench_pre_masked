
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsMLU ;
struct TYPE_5__ {int (* Read ) (int ,TYPE_1__*,char*,int,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_1__*,int*) ;
 int FUNC_3 (int ,int *,char*,char const*,char*) ;
 int FUNC_4 (struct _cms_typehandler_struct*) ;
 int FUNC_5 (int ,TYPE_1__*,char*,int,int) ;

__attribute__((used)) static
cmsBool FUNC_6(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, cmsMLU* VAR_6, cmsUInt32Number* VAR_7, const char* VAR_8)
{
    cmsUInt32Number VAR_9;
    char* VAR_10;
    FUNC_4(VAR_4);

    if (*VAR_7 < sizeof(cmsUInt32Number)) return VAR_0;

    if (!FUNC_2(VAR_3, VAR_5, &VAR_9)) return VAR_0;

    if (VAR_9 > VAR_2 - sizeof(cmsUInt32Number)) return VAR_0;
    if (*VAR_7 < VAR_9 + sizeof(cmsUInt32Number)) return VAR_0;

    VAR_10 = (char*) FUNC_1(VAR_3, VAR_9+1);
    if (VAR_10 == ((void*)0)) return VAR_0;

    if (VAR_5 ->Read(VAR_3, VAR_5,VAR_10, sizeof(cmsUInt8Number), VAR_9) != VAR_9) {
        FUNC_0(VAR_3, VAR_10);
        return VAR_0;
    }

    VAR_10[VAR_9] = 0;

    FUNC_3(VAR_3, VAR_6, "PS", VAR_8, VAR_10);
    FUNC_0(VAR_3, VAR_10);

    *VAR_7 -= (VAR_9 + sizeof(cmsUInt32Number));
    return VAR_1;
}
