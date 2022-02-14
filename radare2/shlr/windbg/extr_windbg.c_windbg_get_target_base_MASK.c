
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef int uint8_t ;
struct TYPE_7__ {int is_x64; TYPE_1__* target; int syncd; int io_ptr; } ;
typedef TYPE_2__ WindCtx ;
struct TYPE_6__ {int peb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__*) ;

ut64 FUNC_3(WindCtx *VAR_1) {
 ut64 VAR_2;
 ut64 VAR_3 = 0;

 if (!VAR_1 || !VAR_1->io_ptr || !VAR_1->syncd || !VAR_1->target) {
  return 0;
 }

 if (!FUNC_2 (VAR_1, VAR_1->target->peb, &VAR_2)) {
  return 0;
 }

 if (!FUNC_1 (VAR_1, (uint8_t *) &VAR_3,
      VAR_2 + FUNC_0(VAR_0), 4 << VAR_1->is_x64)) {
  return 0;
 }

 return VAR_3;
}
