
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* p; size_t len; } ;
struct TYPE_7__ {TYPE_1__ immortal; } ;
struct TYPE_8__ {TYPE_2__ data; int * next; int type; } ;
typedef TYPE_3__ php_cli_server_chunk ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int,int) ;

__attribute__((used)) static php_cli_server_chunk *FUNC_1(const char *VAR_1, size_t VAR_2)
{
 php_cli_server_chunk *VAR_3 = FUNC_0(sizeof(php_cli_server_chunk), 1);

 VAR_3->type = VAR_0;
 VAR_3->next = ((void*)0);
 VAR_3->data.immortal.p = VAR_1;
 VAR_3->data.immortal.len = VAR_2;
 return VAR_3;
}
