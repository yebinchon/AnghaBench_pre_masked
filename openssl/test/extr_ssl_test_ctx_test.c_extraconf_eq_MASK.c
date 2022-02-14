
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int server2; int server; int client; } ;
typedef TYPE_1__ SSL_TEST_EXTRA_CONF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(SSL_TEST_EXTRA_CONF *VAR_0,
                        SSL_TEST_EXTRA_CONF *VAR_1)
{
    if (!FUNC_0(FUNC_1(&VAR_0->client, &VAR_1->client))
            || !FUNC_0(FUNC_2(&VAR_0->server, &VAR_1->server))
            || !FUNC_0(FUNC_2(&VAR_0->server2, &VAR_1->server2)))
        return 0;
    return 1;
}
