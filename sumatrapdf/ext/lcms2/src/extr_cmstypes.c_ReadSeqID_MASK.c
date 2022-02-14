
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
struct TYPE_9__ {TYPE_3__* seq; } ;
typedef TYPE_2__ cmsSEQ ;
struct TYPE_8__ {int ID8; } ;
struct TYPE_10__ {int Description; TYPE_1__ ProfileID; } ;
typedef TYPE_3__ cmsPSEQDESC ;
struct TYPE_11__ {int (* Read ) (int ,TYPE_4__*,int ,int,int) ;} ;
typedef TYPE_4__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,struct _cms_typehandler_struct*,TYPE_4__*,int *,size_t) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_4__*,int ,int,int) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3,
                                             cmsIOHANDLER* VAR_4,
                                             void* VAR_5,
                                             cmsUInt32Number VAR_6,
                                             cmsUInt32Number VAR_7)
{
    cmsSEQ* VAR_8 = (cmsSEQ*) VAR_5;
    cmsPSEQDESC* VAR_9 = &VAR_8 ->seq[VAR_6];

    if (VAR_4 -> Read(VAR_2, VAR_4,VAR_9 ->ProfileID.ID8, 16, 1) != 1) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_9 ->Description, VAR_7)) return VAR_0;

    return VAR_1;
}
