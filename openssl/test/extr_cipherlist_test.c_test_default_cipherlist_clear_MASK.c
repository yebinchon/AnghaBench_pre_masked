
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client; int server; } ;
typedef int SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(void)
{
    FUNC_2();
    SSL *VAR_3 = ((void*)0);

    if (VAR_1 == ((void*)0))
        return 0;

    if (!FUNC_7(FUNC_3(VAR_1->server, "no-such"), 0))
        goto end;

    if (!FUNC_7(FUNC_0(FUNC_1()), VAR_0))
        goto end;

    VAR_3 = FUNC_5(VAR_1->client);

    if (!FUNC_8(VAR_3))
      goto end;

    if (!FUNC_7(FUNC_6(VAR_3, "no-such"), 0))
        goto end;

    if (!FUNC_7(FUNC_0(FUNC_1()),
                VAR_0))
        goto end;

    VAR_2 = 1;
end:
    FUNC_4(VAR_3);
    FUNC_9(VAR_1);
    return VAR_2;
}
