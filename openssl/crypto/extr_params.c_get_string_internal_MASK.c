
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int data_type; size_t data_size; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

__attribute__((used)) static int FUNC_2(const OSSL_PARAM *VAR_0, void **VAR_1, size_t VAR_2,
                               size_t *VAR_3, unsigned int VAR_4)
{
    size_t VAR_5;

    if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0) || VAR_0->data_type != VAR_4)
        return 0;

    VAR_5 = VAR_0->data_size;

    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_5;

    if (*VAR_1 == ((void*)0)) {
        char *const VAR_6 = FUNC_0(VAR_5);

        if (VAR_6 == ((void*)0))
            return 0;
        *VAR_1 = VAR_6;
        FUNC_1(VAR_6, VAR_0->data, VAR_5);
        return 1;
    }
    if (VAR_2 < VAR_5)
        return 0;
    FUNC_1(*VAR_1, VAR_0->data, VAR_5);
    return 1;
}
