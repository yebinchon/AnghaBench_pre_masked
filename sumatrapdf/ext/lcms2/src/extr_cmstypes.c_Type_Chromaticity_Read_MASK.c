
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
struct TYPE_7__ {double Y; int y; int x; } ;
struct TYPE_6__ {double Y; int y; int x; } ;
struct TYPE_5__ {double Y; int y; int x; } ;
struct TYPE_8__ {TYPE_3__ Blue; TYPE_2__ Green; TYPE_1__ Red; } ;
typedef TYPE_4__ cmsCIExyYTRIPLE ;


 int FUNC_0 (int ,void*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static
void *FUNC_5(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, cmsIOHANDLER* VAR_2, cmsUInt32Number* VAR_3, cmsUInt32Number VAR_4)
{
    cmsCIExyYTRIPLE* VAR_5;
    cmsUInt16Number VAR_6, VAR_7;
    FUNC_4(VAR_1);

    *VAR_3 = 0;
    VAR_5 = (cmsCIExyYTRIPLE*) FUNC_1(VAR_0, sizeof(cmsCIExyYTRIPLE));
    if (VAR_5 == ((void*)0)) return ((void*)0);

    if (!FUNC_3(VAR_0, VAR_2, &VAR_6)) goto Error;


    if (VAR_6 == 0 && VAR_4 == 32) {

        if (!FUNC_3(VAR_0, VAR_2, ((void*)0))) goto Error;
        if (!FUNC_3(VAR_0, VAR_2, &VAR_6)) goto Error;
    }

    if (VAR_6 != 3) goto Error;

    if (!FUNC_3(VAR_0, VAR_2, &VAR_7)) goto Error;

    if (!FUNC_2(VAR_0, VAR_2, &VAR_5 ->Red.x)) goto Error;
    if (!FUNC_2(VAR_0, VAR_2, &VAR_5 ->Red.y)) goto Error;

    VAR_5 ->Red.Y = 1.0;

    if (!FUNC_2(VAR_0, VAR_2, &VAR_5 ->Green.x)) goto Error;
    if (!FUNC_2(VAR_0, VAR_2, &VAR_5 ->Green.y)) goto Error;

    VAR_5 ->Green.Y = 1.0;

    if (!FUNC_2(VAR_0, VAR_2, &VAR_5 ->Blue.x)) goto Error;
    if (!FUNC_2(VAR_0, VAR_2, &VAR_5 ->Blue.y)) goto Error;

    VAR_5 ->Blue.Y = 1.0;

    *VAR_3 = 1;
    return (void*) VAR_5;

Error:
    FUNC_0(VAR_0, (void*) VAR_5);
    return ((void*)0);

    FUNC_4(VAR_4);
}
