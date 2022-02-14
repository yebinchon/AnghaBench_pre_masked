
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsMLU ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct _cms_typehandler_struct*,int *,int *,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{

    cmsMLU* VAR_7 = (cmsMLU*) VAR_5;

    if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, "nm")) goto Error;
    if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, "#0")) goto Error;
    if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, "#1")) goto Error;
    if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, "#2")) goto Error;
    if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, "#3")) goto Error;

    return VAR_1;

Error:
    return VAR_0;

    FUNC_1(VAR_6);
}
