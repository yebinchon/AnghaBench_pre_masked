
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsStage ;
struct TYPE_5__ {int (* Seek ) (int ,TYPE_1__*,int ) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int * FUNC_1 (int ,int,int,int *,int *) ;
 int FUNC_2 (struct _cms_typehandler_struct*) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static
cmsStage* FUNC_4(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, cmsIOHANDLER* VAR_2, cmsUInt32Number VAR_3)
{
    cmsFloat64Number VAR_4[3*3];
    cmsFloat64Number VAR_5[3];
    cmsStage* VAR_6;
    FUNC_2(VAR_1);


    if (!VAR_2 -> Seek(VAR_0, VAR_2, VAR_3)) return ((void*)0);


    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[0])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[1])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[2])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[3])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[4])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[5])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[6])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[7])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_4[8])) return ((void*)0);

    if (!FUNC_0(VAR_0, VAR_2, &VAR_5[0])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_5[1])) return ((void*)0);
    if (!FUNC_0(VAR_0, VAR_2, &VAR_5[2])) return ((void*)0);

    VAR_6 = FUNC_1(VAR_0, 3, 3, VAR_4, VAR_5);

     return VAR_6;
}
