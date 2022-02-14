
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum aarch64_field_kind { ____Placeholder_aarch64_field_kind } aarch64_field_kind ;
struct TYPE_4__ {scalar_t__* fields; } ;
typedef TYPE_1__ aarch64_operand ;
typedef int aarch64_insn ;
struct TYPE_5__ {int width; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int ,int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static aarch64_insn
FUNC_2 (const aarch64_operand *VAR_2, aarch64_insn VAR_3)
{
  aarch64_insn VAR_4;
  unsigned int VAR_5;
  enum aarch64_field_kind VAR_6;

  VAR_4 = 0;
  for (VAR_5 = 0; VAR_5 < FUNC_0 (VAR_2->fields) && VAR_2->fields[VAR_5] != VAR_0; ++VAR_5)
    {
      VAR_6 = VAR_2->fields[VAR_5];
      VAR_4 <<= VAR_1[VAR_6].width;
      VAR_4 |= FUNC_1 (VAR_6, VAR_3, 0);
    }
  return VAR_4;
}
