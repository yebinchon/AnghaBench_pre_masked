
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cmsContext_struct {struct _cmsContext_struct* Next; } ;
typedef scalar_t__ cmsContext ;


 struct _cmsContext_struct* VAR_0 ;
 struct _cmsContext_struct VAR_1 ;

struct _cmsContext_struct* FUNC_0(cmsContext VAR_2)
{
    struct _cmsContext_struct* VAR_3 = (struct _cmsContext_struct*) VAR_2;
    struct _cmsContext_struct* VAR_4;



    if (VAR_3 == ((void*)0))
        return &VAR_1;


    for (VAR_4 = VAR_0;
         VAR_4 != ((void*)0);
         VAR_4 = VAR_4 ->Next) {


            if (VAR_3 == VAR_4)
                return VAR_4;
    }

    return &VAR_1;
}
