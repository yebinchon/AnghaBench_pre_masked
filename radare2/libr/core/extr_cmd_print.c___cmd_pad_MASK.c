
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int assembly; } ;
struct TYPE_6__ {int * parser; int assembler; int config; int offset; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAsmCode ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,int *,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(RCore *VAR_0, const char *VAR_1) {
 if (*VAR_1 == '?') {
  FUNC_0 ("Usage: pad [hexpairs] # disassembly given bytes\n");
  return;
 }
 FUNC_3 (VAR_0->assembler, VAR_0->offset);
 bool VAR_2 = FUNC_4 (VAR_0->config, "asm.pseudo");
 RAsmCode *VAR_3 = FUNC_2 (VAR_0->assembler, VAR_2 ? VAR_0->parser : ((void*)0), VAR_1);
 if (VAR_3) {
  FUNC_5 (VAR_3->assembly);
  FUNC_1 (VAR_3);
 } else {
  FUNC_0 ("Invalid hexstr\n");
 }
}
