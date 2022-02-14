
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int blocks_count; TYPE_1__* blocks; } ;
struct TYPE_10__ {TYPE_2__ cfg; } ;
typedef TYPE_3__ zend_ssa ;
struct TYPE_11__ {int op_array; int executable_blocks; TYPE_3__* ssa; } ;
typedef TYPE_4__ scdf_ctx ;
struct TYPE_8__ {int flags; scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_3__*,int) ;

int FUNC_3(scdf_ctx *VAR_1) {
 zend_ssa *VAR_2 = VAR_1->ssa;
 int VAR_3;
 int VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->cfg.blocks_count; VAR_3++) {
  if (!FUNC_1(VAR_1->executable_blocks, VAR_3)
    && (VAR_2->cfg.blocks[VAR_3].flags & VAR_0)
    && !FUNC_0(VAR_1, VAR_3)) {
   VAR_4 += VAR_2->cfg.blocks[VAR_3].len;
   FUNC_2(VAR_1->op_array, VAR_2, VAR_3);
  }
 }
 return VAR_4;
}
