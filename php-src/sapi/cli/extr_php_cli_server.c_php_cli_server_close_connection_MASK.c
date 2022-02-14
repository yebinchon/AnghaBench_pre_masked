
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sock; int addr_str; } ;
typedef TYPE_1__ php_cli_server_client ;
struct TYPE_6__ {int clients; } ;
typedef TYPE_2__ php_cli_server ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(php_cli_server *VAR_1, php_cli_server_client *VAR_2)
{
 FUNC_0(VAR_0, "%s Closing", VAR_2->addr_str);

 FUNC_1(&VAR_1->clients, VAR_2->sock);
}
