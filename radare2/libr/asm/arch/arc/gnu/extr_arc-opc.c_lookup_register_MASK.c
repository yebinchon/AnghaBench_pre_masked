
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_operand_value {int type; long value; } ;
struct arc_ext_operand_value {struct arc_ext_operand_value* next; struct arc_operand_value const operand; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct arc_ext_operand_value* VAR_2 ;
 struct arc_operand_value const* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static const struct arc_operand_value *
FUNC_0 (int VAR_5, long VAR_6)
{
  const struct arc_operand_value *VAR_7,*VAR_8;
  struct arc_ext_operand_value *VAR_9 = VAR_2;

  while (VAR_9)
    {
   if (VAR_9->operand.type == VAR_5 && VAR_9->operand.value == VAR_6) {
    return (&VAR_9->operand);
   }
   VAR_9 = VAR_9->next;
    }

    if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
     return &VAR_3[VAR_6];
    }


    for (VAR_7 = VAR_3, VAR_8 = VAR_3 + VAR_4;
     VAR_7 < VAR_8; ++VAR_7) {
     if (VAR_5 == VAR_7->type && VAR_6 == VAR_7->value) {
      return VAR_7;
     }
    }
    return 0;
}
