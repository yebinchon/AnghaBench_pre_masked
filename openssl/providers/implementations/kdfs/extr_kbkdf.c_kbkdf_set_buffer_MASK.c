
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data_size; int * data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (TYPE_1__ const*,void**,int ,size_t*) ;

__attribute__((used)) static int FUNC_2(unsigned char **VAR_0, size_t *VAR_1,
                            const OSSL_PARAM *VAR_2)
{
    if (VAR_2->data == ((void*)0) || VAR_2->data_size == 0)
        return 1;

    FUNC_0(*VAR_0, *VAR_1);
    *VAR_0 = ((void*)0);
    return FUNC_1(VAR_2, (void **)VAR_0, 0, VAR_1);
}
