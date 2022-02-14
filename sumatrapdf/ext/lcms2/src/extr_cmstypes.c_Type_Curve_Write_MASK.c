
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_4__ {int nSegments; int nEntries; int Table16; TYPE_1__* Segments; } ;
typedef TYPE_2__ cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_3__ {int Type; int * Params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
cmsBool FUNC_5(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsToneCurve* VAR_7 = (cmsToneCurve*) VAR_5;

    if (VAR_7 ->nSegments == 1 && VAR_7 ->Segments[0].Type == 1) {


            cmsUInt16Number VAR_8 = FUNC_0(VAR_2, VAR_7 ->Segments[0].Params[0]);

            if (!FUNC_3(VAR_2, VAR_4, 1)) return VAR_0;
            if (!FUNC_2(VAR_2, VAR_4, VAR_8)) return VAR_0;
            return VAR_1;

    }

    if (!FUNC_3(VAR_2, VAR_4, VAR_7 ->nEntries)) return VAR_0;
    return FUNC_1(VAR_2, VAR_4, VAR_7 ->nEntries, VAR_7 ->Table16);

    FUNC_4(VAR_6);
    FUNC_4(VAR_3);
}
