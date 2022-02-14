
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aarch64_opnd_info {int qualifier; scalar_t__ type; } ;
typedef int aarch64_opnd_qualifier_t ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aarch64_opnd_info const*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_2 (const struct aarch64_opnd_info *VAR_1,
     aarch64_opnd_qualifier_t VAR_2)
{
  switch (VAR_1->qualifier)
    {
    case 130:
      if (VAR_2 == 129 && FUNC_0 (VAR_1))
 return 1;
      break;
    case 128:
      if (VAR_2 == 131 && FUNC_0 (VAR_1))
 return 1;
      break;
    case 129:
      if (VAR_2 == 130
   && FUNC_1 (VAR_0 + VAR_1->type))
 return 1;
      break;
    case 131:
      if (VAR_2 == 128
   && FUNC_1 (VAR_0 + VAR_1->type))
 return 1;
      break;
    default:
      break;
    }

  return 0;
}
