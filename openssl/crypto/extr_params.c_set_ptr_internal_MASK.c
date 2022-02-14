
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t return_size; unsigned int data_type; int * data; } ;
typedef TYPE_1__ OSSL_PARAM ;



__attribute__((used)) static int FUNC_0(OSSL_PARAM *VAR_0, const void *VAR_1,
                            unsigned int VAR_2, size_t VAR_3)
{
    VAR_0->return_size = VAR_3;
    if (VAR_0->data_type != VAR_2)
        return 0;
    if (VAR_0->data != ((void*)0))
        *(const void **)VAR_0->data = VAR_1;
    return 1;
}
