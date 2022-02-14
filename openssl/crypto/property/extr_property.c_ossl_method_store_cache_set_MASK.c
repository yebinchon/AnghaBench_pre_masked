
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int cache; } ;
struct TYPE_16__ {int need_flush; scalar_t__ nelem; } ;
struct TYPE_15__ {char const* query; char const* body; void* method; } ;
typedef TYPE_1__ QUERY ;
typedef TYPE_2__ OSSL_METHOD_STORE ;
typedef TYPE_3__ ALGORITHM ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 size_t FUNC_10 (char const*) ;

int FUNC_11(OSSL_METHOD_STORE *VAR_1, int VAR_2,
                                const char *VAR_3, void *VAR_4)
{
    QUERY VAR_5, *VAR_6, *VAR_7 = ((void*)0);
    ALGORITHM *VAR_8;
    size_t VAR_9;

    if (VAR_2 <= 0 || VAR_1 == ((void*)0))
        return 0;
    if (VAR_3 == ((void*)0))
        return 1;

    FUNC_9(VAR_1);
    if (VAR_1->need_flush)
        FUNC_6(VAR_1);
    VAR_8 = FUNC_7(VAR_1, VAR_2);
    if (VAR_8 == ((void*)0)) {
        FUNC_8(VAR_1);
        return 0;
    }

    if (VAR_4 == ((void*)0)) {
        VAR_5.query = VAR_3;
        if (FUNC_2(VAR_8->cache, &VAR_5) != ((void*)0))
            VAR_1->nelem--;
        FUNC_8(VAR_1);
        return 1;
    }
    VAR_7 = FUNC_1(sizeof(*VAR_7) + (VAR_9 = FUNC_10(VAR_3)));
    if (VAR_7 != ((void*)0)) {
        VAR_7->query = VAR_7->body;
        VAR_7->method = VAR_4;
        FUNC_5((char *)VAR_7->query, VAR_3, VAR_9 + 1);
        if ((VAR_6 = FUNC_4(VAR_8->cache, VAR_7)) != ((void*)0)) {
            FUNC_0(VAR_6);
            FUNC_8(VAR_1);
            return 1;
        }
        if (!FUNC_3(VAR_8->cache)) {
            if (++VAR_1->nelem >= VAR_0)
                VAR_1->need_flush = 1;
            FUNC_8(VAR_1);
            return 1;
        }
    }
    FUNC_8(VAR_1);
    FUNC_0(VAR_7);
    return 0;
}
