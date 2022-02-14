
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {scalar_t__ iter; int * md; } ;
typedef TYPE_1__ PBE_DATA ;
typedef TYPE_2__ EVP_TEST ;


 int * FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(EVP_TEST *VAR_0,
                             const char *VAR_1, const char *VAR_2)
{
    PBE_DATA *VAR_3 = VAR_0->data;

    if (FUNC_2(VAR_1, "iter") == 0) {
        VAR_3->iter = FUNC_1(VAR_2);
        if (VAR_3->iter <= 0)
            return -1;
        return 1;
    }
    if (FUNC_2(VAR_1, "MD") == 0) {
        VAR_3->md = FUNC_0(VAR_2);
        if (VAR_3->md == ((void*)0))
            return -1;
        return 1;
    }
    return 0;
}
