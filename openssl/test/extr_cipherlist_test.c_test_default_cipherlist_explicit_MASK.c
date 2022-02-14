
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client; int server; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(void)
{
    FUNC_1();
    if (VAR_0 == ((void*)0))
        return 0;
    if (!FUNC_3(FUNC_2(VAR_0->server, "DEFAULT"))
            || !FUNC_3(FUNC_2(VAR_0->client, "DEFAULT")))
        FUNC_4(VAR_0);
    FUNC_0();
    return VAR_1;
}
