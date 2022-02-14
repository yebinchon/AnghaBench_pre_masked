
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum aarch64_operand_error_kind { ____Placeholder_aarch64_operand_error_kind } aarch64_operand_error_kind ;
struct TYPE_3__ {int kind; int index; char const* error; } ;
typedef TYPE_1__ aarch64_operand_error ;



__attribute__((used)) static inline void
FUNC_0 (aarch64_operand_error *VAR_0,
    enum aarch64_operand_error_kind VAR_1, int VAR_2,
    const char* VAR_3)
{
  if (VAR_0 == ((void*)0))
    return;
  VAR_0->kind = VAR_1;
  VAR_0->index = VAR_2;
  VAR_0->error = VAR_3;
}
