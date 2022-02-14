
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 int FUNC_0 (int const*,char const**) ;

void FUNC_1(const RCore *VAR_0) {
 const char* VAR_1[] = {
  "wao", " [op]", "performs a modification on current opcode",
  "wao", " nop", "nop current opcode",
  "wao", " jinf", "assemble an infinite loop",
  "wao", " jz", "make current opcode conditional (zero)",
  "wao", " jnz", "make current opcode conditional (not zero)",
  "wao", " ret1", "make the current opcode return 1",
  "wao", " ret0", "make the current opcode return 0",
  "wao", " retn", "make the current opcode return -1",
  "wao", " nocj", "remove conditional operation from branch (make it unconditional)",
  "wao", " trap", "make the current opcode a trap",
  "wao", " recj", "reverse (swap) conditional branch instruction",
  "WIP:", "", "not all archs are supported and not all commands work on all archs",
  ((void*)0)
 };
 FUNC_0 (VAR_0, VAR_1);
}
