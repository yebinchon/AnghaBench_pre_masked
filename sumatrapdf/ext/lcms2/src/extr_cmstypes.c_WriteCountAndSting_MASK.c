
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsMLU ;
struct TYPE_5__ {int (* Write ) (int ,TYPE_1__*,scalar_t__,char*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *,char*,char const*,char*,scalar_t__) ;
 int FUNC_4 (struct _cms_typehandler_struct*) ;
 int FUNC_5 (int ,TYPE_1__*,scalar_t__,char*) ;

__attribute__((used)) static
cmsBool FUNC_6(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, cmsMLU* VAR_5, const char* VAR_6)
{
 cmsUInt32Number VAR_7;
 char* VAR_8;
 FUNC_4(VAR_3);

    VAR_7 = FUNC_3(VAR_2, VAR_5, "PS", VAR_6, ((void*)0), 0);
    VAR_8 = (char*) FUNC_1(VAR_2, VAR_7);

    if (!FUNC_2(VAR_2, VAR_4, VAR_7)) return VAR_0;

    if (FUNC_3(VAR_2, VAR_5, "PS", VAR_6, VAR_8, VAR_7) == 0) return VAR_0;

    if (!VAR_4 ->Write(VAR_2, VAR_4, VAR_7, VAR_8)) return VAR_0;
    FUNC_0(VAR_2, VAR_8);

    return VAR_1;
}
