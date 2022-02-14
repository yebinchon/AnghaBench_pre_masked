
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
struct TYPE_3__ {size_t n; TYPE_2__* seq; } ;
typedef TYPE_1__ cmsSEQ ;
struct TYPE_4__ {size_t deviceMfg; size_t deviceModel; size_t technology; int Model; int Manufacturer; int attributes; } ;
typedef TYPE_2__ cmsPSEQDESC ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,struct _cms_typehandler_struct*,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsSEQ* VAR_7 = (cmsSEQ*) VAR_5;
    cmsUInt32Number VAR_8;

    if (!FUNC_1(VAR_2, VAR_4, VAR_7->n)) return VAR_0;

    for (VAR_8=0; VAR_8 < VAR_7 ->n; VAR_8++) {

        cmsPSEQDESC* VAR_9 = &VAR_7 -> seq[VAR_8];

        if (!FUNC_1(VAR_2, VAR_4, VAR_9 ->deviceMfg)) return VAR_0;
        if (!FUNC_1(VAR_2, VAR_4, VAR_9 ->deviceModel)) return VAR_0;
        if (!FUNC_2(VAR_2, VAR_4, &VAR_9 ->attributes)) return VAR_0;
        if (!FUNC_1(VAR_2, VAR_4, VAR_9 ->technology)) return VAR_0;

        if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_9 ->Manufacturer)) return VAR_0;
        if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_9 ->Model)) return VAR_0;
    }

     return VAR_1;

     FUNC_3(VAR_6);
}
