
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
struct TYPE_6__ {int y; int x; } ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_8__ {TYPE_2__ Blue; TYPE_1__ Green; TYPE_3__ Red; } ;
typedef TYPE_4__ cmsCIExyYTRIPLE ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsCIExyYTRIPLE* VAR_7 = (cmsCIExyYTRIPLE*) VAR_5;

    if (!FUNC_1(VAR_2, VAR_4, 3)) return VAR_0;
    if (!FUNC_1(VAR_2, VAR_4, 0)) return VAR_0;

    if (!FUNC_0(VAR_2, VAR_7 -> Red.x, VAR_7 -> Red.y, VAR_4)) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_7 -> Green.x, VAR_7 -> Green.y, VAR_4)) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_7 -> Blue.x, VAR_7 -> Blue.y, VAR_4)) return VAR_0;

    return VAR_1;

    FUNC_2(VAR_6);
    FUNC_2(VAR_3);
}
