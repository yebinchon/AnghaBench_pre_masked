
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int data_type; size_t data_size; scalar_t__ data; } ;
typedef TYPE_1__ OSSL_PARAM ;



__attribute__((used)) static int FUNC_0(const OSSL_PARAM *VAR_0, const void **VAR_1,
                            size_t *VAR_2, unsigned int VAR_3)
{
    if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0) || VAR_0->data_type != VAR_3)
        return 0;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0->data_size;
    *VAR_1 = *(const void **)VAR_0->data;
    return 1;
}
