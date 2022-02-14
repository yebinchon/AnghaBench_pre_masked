
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;
typedef scalar_t__ aarch64_opnd_qualifier_t ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline bfd_boolean
FUNC_0 (const aarch64_opnd_qualifier_t *VAR_4)
{
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
    if (VAR_4[VAR_5] != VAR_1)
      return VAR_2;
  return VAR_3;
}
