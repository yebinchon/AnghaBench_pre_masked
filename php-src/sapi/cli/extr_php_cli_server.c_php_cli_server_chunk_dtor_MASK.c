
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* block; } ;
struct TYPE_7__ {TYPE_1__ heap; } ;
struct TYPE_8__ {int type; TYPE_2__ data; } ;
typedef TYPE_3__ php_cli_server_chunk ;




 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_1(php_cli_server_chunk *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
  if (VAR_0->data.heap.block != VAR_0) {
   FUNC_0(VAR_0->data.heap.block, 1);
  }
  break;
 case 128:
  break;
 }
}
