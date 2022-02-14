
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int str ;
struct TYPE_22__ {int relsub; int relsub_addr; void* localvar_only; void* pseudo; } ;
struct TYPE_21__ {int flags; int big_endian; } ;
struct TYPE_20__ {int addr; } ;
struct TYPE_19__ {int size; int buf_asm; int member_0; } ;
struct TYPE_18__ {TYPE_3__* cons; TYPE_7__* print; int flags; TYPE_8__* parser; int anal; int assembler; int io; int config; } ;
struct TYPE_17__ {TYPE_2__* context; } ;
struct TYPE_15__ {int num; int reg; } ;
struct TYPE_16__ {TYPE_1__ pal; } ;
typedef TYPE_4__ RCore ;
typedef TYPE_5__ RAsmOp ;
typedef int RAnalHint ;
typedef TYPE_6__ RAnalFunction ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_5__*,int *,int const) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,int *,int const) ;
 int FUNC_9 (TYPE_8__*,int ,int ,int *,char*,char*,int,int ) ;
 int FUNC_10 (TYPE_8__*,TYPE_6__*,int ,int ,char*,char*,int) ;
 char* FUNC_11 (TYPE_7__*,char*,int ,int ,int,int ) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int ) ;

__attribute__((used)) static char *FUNC_16(RCore *VAR_1, ut64 VAR_2, ut64 VAR_3, RAnalFunction *VAR_4, bool VAR_5) {
 int VAR_6 = VAR_1->print->flags & VAR_0;
 char VAR_7[512];
 const int VAR_8 = 12;
 ut8 VAR_9[12];
 RAsmOp VAR_10 = {0};
 char *VAR_11 = ((void*)0);
 bool VAR_12 = FUNC_7 (VAR_1->config, "asm.var.sub");
 VAR_1->parser->pseudo = FUNC_7 (VAR_1->config, "asm.pseudo");
 VAR_1->parser->relsub = FUNC_7 (VAR_1->config, "asm.relsub");
 VAR_1->parser->localvar_only = FUNC_7 (VAR_1->config, "asm.var.subonly");

 if (VAR_1->parser->relsub) {
  VAR_1->parser->relsub_addr = VAR_2;
 }
 FUNC_8 (VAR_1->io, VAR_3, VAR_9, VAR_8);
 FUNC_6 (VAR_1->assembler, VAR_3);
 FUNC_4 (VAR_1->assembler, &VAR_10, VAR_9, VAR_8);
 int VAR_13 = FUNC_14 (&VAR_10.buf_asm) + 128;
 char *VAR_14 = FUNC_1 (VAR_13);
 FUNC_15 (VAR_14, FUNC_13 (&VAR_10.buf_asm));
 if (VAR_12) {
  FUNC_10 (VAR_1->parser, VAR_4, VAR_3, VAR_10.size,
    VAR_14, VAR_14, sizeof (VAR_10.buf_asm));
 }
 RAnalHint *VAR_15 = FUNC_3 (VAR_1->anal, VAR_3);
 FUNC_9 (VAR_1->parser, VAR_3, VAR_1->flags, VAR_15,
   VAR_14, VAR_7, sizeof (VAR_7), VAR_1->print->big_endian);
 FUNC_2 (VAR_15);
 FUNC_5 (&VAR_10, VAR_14);
 FUNC_0 (VAR_14);
 if (VAR_5 && VAR_6) {
  VAR_11 = FUNC_11 (VAR_1->print, VAR_7,
    VAR_1->cons->context->pal.reg, VAR_1->cons->context->pal.num, 0, VAR_4 ? VAR_4->addr : 0);
 } else {
  VAR_11 = FUNC_12 (VAR_7);
 }
 return VAR_11;
}
