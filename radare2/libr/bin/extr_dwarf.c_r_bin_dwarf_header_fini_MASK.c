
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* name; } ;
struct TYPE_4__ {size_t file_names_count; TYPE_3__* file_names; TYPE_3__* std_opcode_lengths; } ;
typedef TYPE_1__ RBinDwarfLNPHeader ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(RBinDwarfLNPHeader *VAR_0) {
 if (VAR_0) {
  size_t VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->file_names_count; VAR_1 ++) {
   FUNC_0 (VAR_0->file_names[VAR_1].name);
  }

  FUNC_0 (VAR_0->std_opcode_lengths);
  FUNC_0 (VAR_0->file_names);
 }
}
