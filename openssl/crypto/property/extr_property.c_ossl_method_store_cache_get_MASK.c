
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cache; } ;
struct TYPE_6__ {char const* query; void* method; } ;
typedef TYPE_1__ QUERY ;
typedef int OSSL_METHOD_STORE ;
typedef TYPE_2__ ALGORITHM ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(OSSL_METHOD_STORE *VAR_0, int VAR_1,
                                const char *VAR_2, void **VAR_3)
{
    ALGORITHM *VAR_4;
    QUERY VAR_5, *VAR_6;

    if (VAR_1 <= 0 || VAR_0 == ((void*)0))
        return 0;

    FUNC_2(VAR_0);
    VAR_4 = FUNC_1(VAR_0, VAR_1);
    if (VAR_4 == ((void*)0)) {
        FUNC_3(VAR_0);
        return 0;
    }

    VAR_5.query = VAR_2 != ((void*)0) ? VAR_2 : "";
    VAR_6 = FUNC_0(VAR_4->cache, &VAR_5);
    if (VAR_6 == ((void*)0)) {
        FUNC_3(VAR_0);
        return 0;
    }
    *VAR_3 = VAR_6->method;
    FUNC_3(VAR_0);
    return 1;
}
