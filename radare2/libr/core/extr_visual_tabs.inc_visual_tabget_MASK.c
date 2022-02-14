
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int config; TYPE_1__* print; int printidx; int offset; } ;
struct TYPE_7__ {int current5format; int current4format; int current3format; int printMode; int hexMode; int disMode; void* dumpCols; void* cols; int ocur; int cur; int cur_enabled; void* asm_cmt_col; void* asm_bytes; void* asm_indent; void* asm_instr; void* asm_offset; int printidx; int offset; } ;
struct TYPE_6__ {int ocur; int cur; int cur_enabled; } ;
typedef TYPE_2__ RCoreVisualTab ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_6, RCoreVisualTab *VAR_7) {
 FUNC_1 (VAR_6 && VAR_7);

 VAR_7->offset = VAR_6->offset;
 VAR_7->printidx = VAR_6->printidx;
 VAR_7->asm_offset = FUNC_0 (VAR_6->config, "asm.offset");
 VAR_7->asm_instr = FUNC_0 (VAR_6->config, "asm.instr");
 VAR_7->asm_indent = FUNC_0 (VAR_6->config, "asm.indent");
 VAR_7->asm_bytes = FUNC_0 (VAR_6->config, "asm.bytes");
 VAR_7->asm_cmt_col = FUNC_0 (VAR_6->config, "asm.cmt.col");
 VAR_7->cur_enabled = VAR_6->print->cur_enabled;
 VAR_7->cur = VAR_6->print->cur;
 VAR_7->ocur = VAR_6->print->ocur;
 VAR_7->cols = FUNC_0 (VAR_6->config, "hex.cols");
 VAR_7->dumpCols = FUNC_0 (VAR_6->config, "scr.dumpcols");
 VAR_7->disMode = VAR_3;
 VAR_7->hexMode = VAR_4;
 VAR_7->printMode = VAR_5;
 VAR_7->current3format = VAR_0;
 VAR_7->current4format = VAR_1;
 VAR_7->current5format = VAR_2;

}
