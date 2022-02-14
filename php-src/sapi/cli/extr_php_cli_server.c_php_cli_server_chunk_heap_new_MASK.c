
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* p; size_t len; void* block; } ;
struct TYPE_7__ {TYPE_1__ heap; } ;
struct TYPE_8__ {TYPE_2__ data; int * next; int type; } ;
typedef TYPE_3__ php_cli_server_chunk ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int,int) ;

__attribute__((used)) static php_cli_server_chunk *FUNC_1(void *VAR_1, char *VAR_2, size_t VAR_3)
{
 php_cli_server_chunk *VAR_4 = FUNC_0(sizeof(php_cli_server_chunk), 1);

 VAR_4->type = VAR_0;
 VAR_4->next = ((void*)0);
 VAR_4->data.heap.block = VAR_1;
 VAR_4->data.heap.p = VAR_2;
 VAR_4->data.heap.len = VAR_3;
 return VAR_4;
}
