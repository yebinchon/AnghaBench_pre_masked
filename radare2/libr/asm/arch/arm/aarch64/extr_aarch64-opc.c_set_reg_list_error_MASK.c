
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* data; } ;
typedef TYPE_1__ aarch64_operand_error ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,int *) ;

__attribute__((used)) static inline void
FUNC_1 (aarch64_operand_error *VAR_1, int VAR_2,
      int VAR_3)
{
  if (VAR_1 == ((void*)0))
    return;
  FUNC_0 (VAR_1, VAR_0, VAR_2, ((void*)0));
  VAR_1->data[0] = VAR_3;
}
