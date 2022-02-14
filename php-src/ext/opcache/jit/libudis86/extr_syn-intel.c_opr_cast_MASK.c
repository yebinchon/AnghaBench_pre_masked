
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud_operand {int size; } ;
struct ud {scalar_t__ br_far; } ;


 int FUNC_0 (struct ud*,char*) ;

__attribute__((used)) static void
FUNC_1(struct ud* VAR_0, struct ud_operand* VAR_1)
{
  if (VAR_0->br_far) {
    FUNC_0(VAR_0, "far ");
  }
  switch(VAR_1->size) {
  case 8: FUNC_0(VAR_0, "byte " ); break;
  case 16: FUNC_0(VAR_0, "word " ); break;
  case 32: FUNC_0(VAR_0, "dword "); break;
  case 64: FUNC_0(VAR_0, "qword "); break;
  case 80: FUNC_0(VAR_0, "tword "); break;
  case 128: FUNC_0(VAR_0, "oword "); break;
  case 256: FUNC_0(VAR_0, "yword "); break;
  default: break;
  }
}
