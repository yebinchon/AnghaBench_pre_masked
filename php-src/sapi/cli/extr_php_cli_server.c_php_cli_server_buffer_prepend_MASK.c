
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ php_cli_server_chunk ;
struct TYPE_6__ {TYPE_1__* first; TYPE_1__* last; } ;
typedef TYPE_2__ php_cli_server_buffer ;



__attribute__((used)) static void FUNC_0(php_cli_server_buffer *VAR_0, php_cli_server_chunk *VAR_1)
{
 php_cli_server_chunk *VAR_2;
 for (VAR_2 = VAR_1; VAR_2->next; VAR_2 = VAR_2->next);
 VAR_2->next = VAR_0->first;
 if (!VAR_0->last) {
  VAR_0->last = VAR_2;
 }
 VAR_0->first = VAR_1;
}
