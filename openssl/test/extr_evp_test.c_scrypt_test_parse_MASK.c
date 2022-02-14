
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int maxmem; int r; int p; int N; } ;
typedef TYPE_1__ PBE_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(EVP_TEST *VAR_0,
                             const char *VAR_1, const char *VAR_2)
{
    PBE_DATA *VAR_3 = VAR_0->data;

    if (FUNC_1(VAR_1, "N") == 0)
        return FUNC_0(VAR_2, &VAR_3->N);
    if (FUNC_1(VAR_1, "p") == 0)
        return FUNC_0(VAR_2, &VAR_3->p);
    if (FUNC_1(VAR_1, "r") == 0)
        return FUNC_0(VAR_2, &VAR_3->r);
    if (FUNC_1(VAR_1, "maxmem") == 0)
        return FUNC_0(VAR_2, &VAR_3->maxmem);
    return 0;
}
