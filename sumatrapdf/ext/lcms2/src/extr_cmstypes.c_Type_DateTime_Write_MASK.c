
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tm {int dummy; } ;
struct _cms_typehandler_struct {int dummy; } ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
struct TYPE_4__ {int (* Write ) (int ,TYPE_1__*,int,int *) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsDateTimeNumber ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct tm*) ;
 int FUNC_1 (struct _cms_typehandler_struct*) ;
 int FUNC_2 (int ,TYPE_1__*,int,int *) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    struct tm * VAR_7 = (struct tm*) VAR_5;
    cmsDateTimeNumber VAR_8;

    FUNC_0(VAR_2, &VAR_8, VAR_7);
    if (!VAR_4 ->Write(VAR_2, VAR_4, sizeof(cmsDateTimeNumber), &VAR_8)) return VAR_0;

    return VAR_1;

    FUNC_1(VAR_6);
    FUNC_1(VAR_3);
}
