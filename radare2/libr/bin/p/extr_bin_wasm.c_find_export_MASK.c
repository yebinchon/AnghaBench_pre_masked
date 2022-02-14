
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_3__ {scalar_t__ kind; scalar_t__ const index; } ;
typedef TYPE_1__ RBinWasmExportEntry ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0 (const ut32 *VAR_1, const RBinWasmExportEntry *VAR_2) {
 if (VAR_2->kind != VAR_0) {
  return 1;
 }
 return VAR_2->index != (*VAR_1);
}
