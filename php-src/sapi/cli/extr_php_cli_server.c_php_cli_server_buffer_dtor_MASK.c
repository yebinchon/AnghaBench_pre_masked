
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ php_cli_server_chunk ;
struct TYPE_7__ {TYPE_1__* first; } ;
typedef TYPE_2__ php_cli_server_buffer ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(php_cli_server_buffer *VAR_0)
{
 php_cli_server_chunk *VAR_1, *VAR_2;
 for (VAR_1 = VAR_0->first; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, 1);
 }
}
