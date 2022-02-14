
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * cmsContext ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,void*) ;

cmsContext FUNC_3(void* VAR_1)
{
    cmsContext VAR_2;

    VAR_2 = FUNC_2(&VAR_0, VAR_1);

    if (VAR_2 == ((void*)0))
        FUNC_1("Unable to create memory managed context");

    FUNC_0(VAR_2);
    return VAR_2;
}
