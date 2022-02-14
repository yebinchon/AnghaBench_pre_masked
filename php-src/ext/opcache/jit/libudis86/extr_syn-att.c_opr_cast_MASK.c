
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud_operand {int size; } ;
struct ud {int dummy; } ;


 int FUNC_0 (struct ud*,char*) ;

__attribute__((used)) static void
FUNC_1(struct ud* VAR_0, struct ud_operand* VAR_1)
{
  switch(VAR_1->size) {
  case 16 : case 32 :
    FUNC_0(VAR_0, "*"); break;
  default: break;
  }
}
