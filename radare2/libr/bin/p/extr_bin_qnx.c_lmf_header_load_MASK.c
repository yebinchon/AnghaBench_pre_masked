
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int image_base; int heap_nbytes; int stack_nbytes; int code_offset; int argv_index; int heap_index; int stack_index; int code_index; int fpu; int cpu; int cflags; int version; } ;
typedef TYPE_1__ lmf_header ;
typedef int Sdb ;
typedef int RBuffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(lmf_header *VAR_2, RBuffer *VAR_3, Sdb *VAR_4) {
 if (FUNC_1 (VAR_3) < sizeof (lmf_header)) {
  return 0;
 }
 if (FUNC_0 (VAR_3, VAR_1, (ut8 *) VAR_2, "iiiiiiiicccciiiicc", 1) < VAR_0) {
  return 0;
 }
 FUNC_3 (VAR_4, "qnx.version", FUNC_2 ("0x%xH", VAR_2->version), 0);
 FUNC_3 (VAR_4, "qnx.cflags", FUNC_2 ("0x%xH", VAR_2->cflags), 0);
 FUNC_3 (VAR_4, "qnx.cpu", FUNC_2 ("0x%xH", VAR_2->cpu), 0);
 FUNC_3 (VAR_4, "qnx.fpu", FUNC_2 ("0x%xH", VAR_2->fpu), 0);
 FUNC_3 (VAR_4, "qnx.code_index", FUNC_2 ("0x%x", VAR_2->code_index), 0);
 FUNC_3 (VAR_4, "qnx.stack_index", FUNC_2 ("0x%x", VAR_2->stack_index), 0);
 FUNC_3 (VAR_4, "qnx.heap_index", FUNC_2 ("0x%x", VAR_2->heap_index), 0);
 FUNC_3 (VAR_4, "qnx.argv_index", FUNC_2 ("0x%x", VAR_2->argv_index), 0);
 FUNC_3 (VAR_4, "qnx.code_offset", FUNC_2 ("0x%x", VAR_2->code_offset), 0);
 FUNC_3 (VAR_4, "qnx.stack_nbytes", FUNC_2 ("0x%x", VAR_2->stack_nbytes), 0);
 FUNC_3 (VAR_4, "qnx.heap_nbytes", FUNC_2 ("0x%x", VAR_2->heap_nbytes), 0);
 FUNC_3 (VAR_4, "qnx.image_base", FUNC_2 ("0x%x", VAR_2->image_base), 0);
 return 1;
}
