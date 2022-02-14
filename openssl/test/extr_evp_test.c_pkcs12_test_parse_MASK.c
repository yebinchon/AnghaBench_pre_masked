
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {scalar_t__ id; } ;
typedef TYPE_1__ PBE_DATA ;
typedef TYPE_2__ EVP_TEST ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_2__*,char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(EVP_TEST *VAR_0,
                             const char *VAR_1, const char *VAR_2)
{
    PBE_DATA *VAR_3 = VAR_0->data;

    if (FUNC_2(VAR_1, "id") == 0) {
        VAR_3->id = FUNC_0(VAR_2);
        if (VAR_3->id <= 0)
            return -1;
        return 1;
    }
    return FUNC_1(VAR_0, VAR_1, VAR_2);
}
