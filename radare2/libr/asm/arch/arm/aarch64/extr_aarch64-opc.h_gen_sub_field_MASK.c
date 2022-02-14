
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum aarch64_field_kind { ____Placeholder_aarch64_field_kind } aarch64_field_kind ;
struct TYPE_4__ {int width; scalar_t__ lsb; } ;
typedef TYPE_1__ aarch64_field ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int
FUNC_0 (enum aarch64_field_kind VAR_1, int VAR_2, int VAR_3, aarch64_field *VAR_4)
{
  const aarch64_field *VAR_5 = &VAR_0[VAR_1];
  if (VAR_2 < 0 || VAR_3 <= 0 || VAR_2 + VAR_3 > VAR_5->width)
    return 0;
  VAR_4->lsb = VAR_5->lsb + VAR_2;
  VAR_4->width = VAR_3;
  return 1;
}
