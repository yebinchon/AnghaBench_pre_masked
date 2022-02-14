
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* key; unsigned int data_type; size_t data_size; scalar_t__ return_size; void* data; } ;
typedef TYPE_1__ OSSL_PARAM ;



__attribute__((used)) static OSSL_PARAM FUNC_0(const char *VAR_0, unsigned int VAR_1,
                                       void *VAR_2, size_t VAR_3)
{
    OSSL_PARAM VAR_4;

    VAR_4.key = VAR_0;
    VAR_4.data_type = VAR_1;
    VAR_4.data = VAR_2;
    VAR_4.data_size = VAR_3;
    VAR_4.return_size = 0;
    return VAR_4;
}
