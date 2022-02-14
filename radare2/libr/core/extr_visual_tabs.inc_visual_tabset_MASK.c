
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int config; TYPE_1__* print; int printidx; } ;
struct TYPE_10__ {int dumpCols; int cols; int asm_cmt_col; int asm_indent; int asm_bytes; int asm_instr; int asm_offset; int current5format; int current4format; int current3format; int printMode; int hexMode; int disMode; int ocur; int cur; int cur_enabled; int printidx; int offset; } ;
struct TYPE_9__ {int ocur; int cur; int cur_enabled; } ;
typedef TYPE_2__ RCoreVisualTab ;
typedef TYPE_3__ RCore ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(RCore *VAR_15, RCoreVisualTab *VAR_16) {
 FUNC_5 (VAR_15 && VAR_16);

 FUNC_2 (VAR_15, VAR_16->offset, 1);
 VAR_15->printidx = VAR_16->printidx;
 VAR_15->print->cur_enabled = VAR_16->cur_enabled;
 VAR_15->print->cur = VAR_16->cur;
 VAR_15->print->ocur = VAR_16->ocur;
 VAR_7 = VAR_16->disMode;
 VAR_8 = VAR_16->hexMode;
 VAR_13 = VAR_16->printMode;
 VAR_4 = VAR_16->current3format;
 VAR_5 = VAR_16->current4format;
 VAR_6 = VAR_16->current5format;
 FUNC_3 (VAR_15, VAR_7);
 FUNC_4 (VAR_15, VAR_8);
 FUNC_1 (VAR_15->config, "asm.offset", VAR_16->asm_offset);
 FUNC_1 (VAR_15->config, "asm.instr", VAR_16->asm_instr);
 FUNC_1 (VAR_15->config, "asm.bytes", VAR_16->asm_bytes);
 FUNC_1 (VAR_15->config, "asm.indent", VAR_16->asm_indent);
 FUNC_1 (VAR_15->config, "asm.cmt.col", VAR_16->asm_cmt_col);
 FUNC_1 (VAR_15->config, "hex.cols", VAR_16->cols);
 FUNC_1 (VAR_15->config, "scr.dumpcols", VAR_16->dumpCols);
 VAR_14[0] = VAR_12[FUNC_0(VAR_8) % VAR_3];
 VAR_14[2] = VAR_9[FUNC_0(VAR_4) % VAR_0];
 VAR_14[3] = VAR_10[FUNC_0(VAR_5) % VAR_1];
 VAR_14[4] = VAR_11[FUNC_0(VAR_6) % VAR_2];
}
