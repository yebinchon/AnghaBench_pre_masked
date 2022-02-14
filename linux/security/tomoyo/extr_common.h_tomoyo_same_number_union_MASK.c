
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_number_union {scalar_t__* values; scalar_t__ group; scalar_t__* value_type; } ;



__attribute__((used)) static inline bool FUNC_0
(const struct tomoyo_number_union *VAR_0, const struct tomoyo_number_union *VAR_1)
{
 return VAR_0->values[0] == VAR_1->values[0] && VAR_0->values[1] == VAR_1->values[1] &&
  VAR_0->group == VAR_1->group && VAR_0->value_type[0] == VAR_1->value_type[0] &&
  VAR_0->value_type[1] == VAR_1->value_type[1];
}
