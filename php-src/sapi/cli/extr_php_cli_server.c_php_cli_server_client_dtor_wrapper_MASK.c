
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {int sock; TYPE_1__* server; } ;
typedef TYPE_2__ php_cli_server_client ;
struct TYPE_6__ {int poller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(zval *VAR_3)
{
 php_cli_server_client *VAR_4 = FUNC_0(VAR_3);

 FUNC_5(VAR_4->sock, VAR_2);
 FUNC_1(VAR_4->sock);
 FUNC_4(&VAR_4->server->poller, VAR_0 | VAR_1, VAR_4->sock);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4, 1);
}
