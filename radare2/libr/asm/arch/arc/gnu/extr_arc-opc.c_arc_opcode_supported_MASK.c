
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_opcode {int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

int
FUNC_2 (const struct arc_opcode *VAR_1)
{
 if (FUNC_1 (VAR_1->flags) == 0) {
  return 1;
 }
 if (FUNC_1 (VAR_1->flags) & FUNC_0 (VAR_0)) {
  return 1;
 }
 return 0;
}
