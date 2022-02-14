
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client; int server; } ;
typedef TYPE_1__ CIPHERLIST_TEST_FIXTURE ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(CIPHERLIST_TEST_FIXTURE *VAR_0)
{
    return VAR_0 != ((void*)0)
        && FUNC_0(VAR_0->server)
        && FUNC_0(VAR_0->client);
}
