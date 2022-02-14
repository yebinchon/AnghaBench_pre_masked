
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* (* loadkey ) (void*,void*,size_t) ;} ;
typedef TYPE_1__ EVP_KEYMGMT ;


 int FUNC_0 (TYPE_1__ const*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (void*,void*,size_t) ;

void *FUNC_3(const EVP_KEYMGMT *VAR_0,
                          void *VAR_1, size_t VAR_2)
{
    void *VAR_3 = FUNC_1(FUNC_0(VAR_0));

    return VAR_0->loadkey(VAR_3, VAR_1, VAR_2);
}
