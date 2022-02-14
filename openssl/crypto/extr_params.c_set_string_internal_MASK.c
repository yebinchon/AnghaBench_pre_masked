
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t return_size; unsigned int data_type; size_t data_size; int * data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int FUNC_0 (int *,void const*,size_t) ;

__attribute__((used)) static int FUNC_1(OSSL_PARAM *VAR_0, const void *VAR_1, size_t VAR_2,
                               unsigned int VAR_3)
{
    VAR_0->return_size = VAR_2;
    if (VAR_0->data == ((void*)0))
        return 1;
    if (VAR_0->data_type != VAR_3 || VAR_0->data_size < VAR_2)
        return 0;

    FUNC_0(VAR_0->data, VAR_1, VAR_2);
    return 1;
}
