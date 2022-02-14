
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_13__ {int pc; } ;
struct TYPE_12__ {scalar_t__ esil; int cpu; } ;
struct TYPE_11__ {int size; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef TYPE_2__ RAnal ;
typedef TYPE_3__ CPU_MODEL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,scalar_t__,int const*,int,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(RAnal *VAR_1, RAnalOp *VAR_2, ut64 VAR_3, const ut8 *VAR_4, int VAR_5, RAnalOpMask VAR_6) {
 CPU_MODEL *VAR_7;
 ut64 VAR_8;


 if (!VAR_2) {
  return 2;
 }


 VAR_7 = FUNC_3 (VAR_1->cpu);


 if (VAR_1->esil) {
  VAR_8 = 0;
  FUNC_4 (VAR_1->esil, "_prog", VAR_8);

  VAR_8 += (1 << VAR_7->pc);
  FUNC_4 (VAR_1->esil, "_io", VAR_8);

  VAR_8 += FUNC_2 (FUNC_1 (VAR_7, VAR_0, "sram_start"));
  FUNC_4 (VAR_1->esil, "_sram", VAR_8);

  VAR_8 += FUNC_2 (FUNC_1 (VAR_7, VAR_0, "sram_size"));
  FUNC_4 (VAR_1->esil, "_eeprom", VAR_8);

  VAR_8 += FUNC_2 (FUNC_1 (VAR_7, VAR_0, "eeprom_size"));
  FUNC_4 (VAR_1->esil, "_page", VAR_8);
 }

 FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);

 return VAR_2->size;
}
