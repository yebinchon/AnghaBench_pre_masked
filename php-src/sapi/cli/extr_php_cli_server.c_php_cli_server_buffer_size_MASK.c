
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ php_cli_server_chunk ;
struct TYPE_6__ {TYPE_1__* first; } ;
typedef TYPE_2__ php_cli_server_buffer ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_1(const php_cli_server_buffer *VAR_0)
{
 php_cli_server_chunk *VAR_1;
 size_t VAR_2 = 0;
 for (VAR_1 = VAR_0->first; VAR_1; VAR_1 = VAR_1->next) {
  VAR_2 += FUNC_0(VAR_1);
 }
 return VAR_2;
}
