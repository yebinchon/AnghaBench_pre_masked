
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* s; int idx; } ;
typedef int PROP_TABLE ;
typedef TYPE_1__ PROPERTY_STRING ;
typedef int OSSL_PROPERTY_IDX ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static OSSL_PROPERTY_IDX FUNC_5(PROP_TABLE *VAR_0,
                                              OSSL_PROPERTY_IDX *VAR_1,
                                              const char *VAR_2)
{
    PROPERTY_STRING VAR_3, *VAR_4, *VAR_5;

    VAR_3.s = VAR_2;
    VAR_4 = FUNC_2(VAR_0, &VAR_3);
    if (VAR_4 == ((void*)0) && VAR_1 != ((void*)0))
        if ((VAR_5 = FUNC_3(VAR_2, VAR_1)) != ((void*)0)) {
            FUNC_1(VAR_0, VAR_5);
            if (FUNC_0(VAR_0)) {
                FUNC_4(VAR_5);
                return 0;
            }
            VAR_4 = VAR_5;
        }
    return VAR_4 != ((void*)0) ? VAR_4->idx : 0;
}
