
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
struct TYPE_5__ {int (* Write ) (int ,TYPE_1__*,size_t,int*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,size_t) ;
 size_t VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,TYPE_1__*,size_t,int*) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, void* VAR_6, cmsUInt32Number VAR_7)
{
    cmsUInt8Number* VAR_8 = (cmsUInt8Number*) VAR_6;
    cmsUInt32Number VAR_9, VAR_10, VAR_11;


    for (VAR_11=VAR_9=0; VAR_9 < VAR_2; VAR_9++) {
        if (VAR_8[VAR_9] != 0xFF) VAR_11++;
    }

    if (!FUNC_0(VAR_3, VAR_5, VAR_11)) return VAR_0;

    VAR_10 = VAR_11 * sizeof(cmsUInt8Number);
    if (!VAR_5 -> Write(VAR_3, VAR_5, VAR_10, VAR_8)) return VAR_0;

    return VAR_1;

    FUNC_1(VAR_7);
    FUNC_1(VAR_4);
}
