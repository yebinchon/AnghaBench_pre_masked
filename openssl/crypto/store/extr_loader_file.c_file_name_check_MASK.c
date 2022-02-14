
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* search_name; } ;
struct TYPE_6__ {TYPE_1__ dir; } ;
struct TYPE_7__ {scalar_t__ expected_type; TYPE_2__ _; } ;
typedef TYPE_3__ OSSL_STORE_LOADER_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(OSSL_STORE_LOADER_CTX *VAR_2, const char *VAR_3)
{
    const char *VAR_4 = ((void*)0);


    if (VAR_2->_.dir.search_name[0] == '\0')
        return 1;


    if (VAR_2->expected_type != 0
        && VAR_2->expected_type != VAR_0
        && VAR_2->expected_type != VAR_1)
        return 0;




    if (FUNC_1(VAR_3, VAR_2->_.dir.search_name,
                    sizeof(VAR_2->_.dir.search_name) - 1) != 0
        || VAR_3[sizeof(VAR_2->_.dir.search_name) - 1] != '.')
        return 0;
    VAR_4 = &VAR_3[sizeof(VAR_2->_.dir.search_name)];





    if (*VAR_4 == 'r') {
        VAR_4++;
        if (VAR_2->expected_type != 0
            && VAR_2->expected_type != VAR_1)
            return 0;
    } else if (VAR_2->expected_type == VAR_1) {
        return 0;
    }





    if (!FUNC_0(*VAR_4))
        return 0;
    while (FUNC_0(*VAR_4))
        VAR_4++;
    return *VAR_4 == '\0';
}
