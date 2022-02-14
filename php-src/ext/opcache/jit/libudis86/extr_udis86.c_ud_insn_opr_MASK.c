
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud_operand {scalar_t__ type; } ;
struct ud {struct ud_operand const* operand; } ;


 scalar_t__ VAR_0 ;

const struct ud_operand*
FUNC_0(const struct ud *VAR_1, unsigned int VAR_2)
{
  if (VAR_2 > 3 || VAR_1->operand[VAR_2].type == VAR_0) {
    return ((void*)0);
  } else {
    return &VAR_1->operand[VAR_2];
  }
}
