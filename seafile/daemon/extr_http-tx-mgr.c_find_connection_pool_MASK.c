
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pools_lock; int connection_pools; } ;
typedef TYPE_1__ HttpTxPriv ;
typedef int ConnectionPool ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ,int *) ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ConnectionPool *
FUNC_6 (HttpTxPriv *VAR_0, const char *VAR_1)
{
    ConnectionPool *VAR_2;

    FUNC_4 (&VAR_0->pools_lock);
    VAR_2 = FUNC_2 (VAR_0->connection_pools, VAR_1);
    if (!VAR_2) {
        VAR_2 = FUNC_0 (VAR_1);
        FUNC_1 (VAR_0->connection_pools, FUNC_3(VAR_1), VAR_2);
    }
    FUNC_5 (&VAR_0->pools_lock);

    return VAR_2;
}
