
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
typedef int cmsIOHANDLER ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (struct _cms_typehandler_struct*) ;
 int FUNC_2 (double) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsFloat64Number* VAR_7 = (cmsFloat64Number*) VAR_5;
    cmsUInt32Number VAR_8;

    for (VAR_8=0; VAR_8 < VAR_6; VAR_8++) {

        cmsUInt32Number VAR_9 = (cmsUInt32Number) FUNC_2(VAR_7[VAR_8]*65536.0 + 0.5);

        if (!FUNC_0(VAR_2, VAR_4, VAR_9)) return VAR_0;
    }

    return VAR_1;

    FUNC_1(VAR_3);
}
