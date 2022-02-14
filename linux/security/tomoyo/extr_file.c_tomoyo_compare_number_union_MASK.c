
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_number_union {unsigned long const* values; scalar_t__ group; } ;


 int FUNC_0 (unsigned long const,unsigned long const,scalar_t__) ;

bool FUNC_1(const unsigned long VAR_0,
     const struct tomoyo_number_union *VAR_1)
{
 if (VAR_1->group)
  return FUNC_0(VAR_0, VAR_0, VAR_1->group);
 return VAR_0 >= VAR_1->values[0] && VAR_0 <= VAR_1->values[1];
}
