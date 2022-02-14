
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ idx; int body; int s; } ;
typedef TYPE_1__ PROPERTY_STRING ;
typedef scalar_t__ OSSL_PROPERTY_IDX ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,size_t const) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static PROPERTY_STRING *FUNC_4(const char *VAR_0,
                                            OSSL_PROPERTY_IDX *VAR_1)
{
    const size_t VAR_2 = FUNC_3(VAR_0);
    PROPERTY_STRING *VAR_3 = FUNC_1(sizeof(*VAR_3) + VAR_2);

    if (VAR_3 != ((void*)0)) {
        FUNC_2(VAR_3->body, VAR_0, VAR_2 + 1);
        VAR_3->s = VAR_3->body;
        VAR_3->idx = ++*VAR_1;
        if (VAR_3->idx == 0) {
            FUNC_0(VAR_3);
            return ((void*)0);
        }
    }
    return VAR_3;
}
