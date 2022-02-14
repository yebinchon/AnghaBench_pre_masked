
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef void cmsSEQ ;
struct TYPE_6__ {int (* Tell ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int _cmsTagBase ;


 int FUNC_0 (int ,struct _cms_typehandler_struct*,TYPE_1__*,int,int,void*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int*) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static
void *FUNC_5(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number* VAR_4, cmsUInt32Number VAR_5)
{
    cmsSEQ* VAR_6;
    cmsUInt32Number VAR_7;
    cmsUInt32Number VAR_8;

    *VAR_4 = 0;


    VAR_8 = VAR_3 ->Tell(VAR_1, VAR_3) - sizeof(_cmsTagBase);


    if (!FUNC_1(VAR_1, VAR_3, &VAR_7)) return ((void*)0);
    VAR_5 -= sizeof(cmsUInt32Number);


    VAR_6 = FUNC_2(VAR_1, VAR_7);
    if (VAR_6 == ((void*)0)) return ((void*)0);



    if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_7, VAR_8, VAR_6, VAR_0)) {

        FUNC_3(VAR_1, VAR_6);
        return ((void*)0);
    }


    *VAR_4 = 1;
    return VAR_6;

}
