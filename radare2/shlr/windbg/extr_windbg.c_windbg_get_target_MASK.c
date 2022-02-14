
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* target; int syncd; int io_ptr; } ;
typedef TYPE_2__ WindCtx ;
struct TYPE_4__ {int uniqueid; } ;



uint32_t FUNC_0(WindCtx *VAR_0) {
 if (!VAR_0 || !VAR_0->io_ptr || !VAR_0->syncd) {
  return 0;
 }
 return VAR_0->target? VAR_0->target->uniqueid: 0;
}
