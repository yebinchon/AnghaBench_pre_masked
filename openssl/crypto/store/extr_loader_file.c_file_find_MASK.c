
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int search_name; } ;
struct TYPE_6__ {TYPE_1__ dir; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ _; } ;
typedef int OSSL_STORE_SEARCH ;
typedef TYPE_3__ OSSL_STORE_LOADER_CTX ;


 int FUNC_0 (int ,int,char*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int ,int ) ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_5(OSSL_STORE_LOADER_CTX *VAR_5,
                     const OSSL_STORE_SEARCH *VAR_6)
{





    if (FUNC_2(VAR_6) == VAR_3) {
        unsigned long VAR_7 = 0;

        if (VAR_5 == ((void*)0))
            return 1;

        if (VAR_5->type != VAR_4) {
            FUNC_3(VAR_0,
                          VAR_1);
            return 0;
        }

        VAR_7 = FUNC_4(FUNC_1(VAR_6));
        FUNC_0(VAR_5->_.dir.search_name, sizeof(VAR_5->_.dir.search_name),
                     "%08lx", VAR_7);
        return 1;
    }

    if (VAR_5 != ((void*)0))
        FUNC_3(VAR_0,
                      VAR_2);
    return 0;
}
