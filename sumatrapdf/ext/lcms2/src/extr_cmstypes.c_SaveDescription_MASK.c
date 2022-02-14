
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int ICCVersion; } ;
typedef int cmsMLU ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,struct _cms_typehandler_struct*,int *,int *,int) ;
 int FUNC_1 (int ,struct _cms_typehandler_struct*,int *,int *,int) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, cmsMLU* VAR_6)
{
    if (VAR_4 ->ICCVersion < 0x4000000) {

        if (!FUNC_2(VAR_3, VAR_5, VAR_2)) return VAR_0;
        return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, 1);
    }
    else {
        if (!FUNC_2(VAR_3, VAR_5, VAR_1)) return VAR_0;
        return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, 1);
    }
}
