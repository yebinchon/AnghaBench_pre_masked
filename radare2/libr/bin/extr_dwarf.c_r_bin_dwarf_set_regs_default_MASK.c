
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int default_is_stmt; } ;
struct TYPE_5__ {int file; int line; void* end_sequence; void* basic_block; int is_stmt; scalar_t__ column; scalar_t__ address; } ;
typedef TYPE_1__ RBinDwarfSMRegisters ;
typedef TYPE_2__ RBinDwarfLNPHeader ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(const RBinDwarfLNPHeader *VAR_1, RBinDwarfSMRegisters *VAR_2) {
 VAR_2->address = 0;
 VAR_2->file = 1;
 VAR_2->line = 1;
 VAR_2->column = 0;
 VAR_2->is_stmt = VAR_1->default_is_stmt;
 VAR_2->basic_block = VAR_0;
 VAR_2->end_sequence = VAR_0;
}
