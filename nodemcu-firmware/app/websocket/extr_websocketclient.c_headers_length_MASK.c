
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; scalar_t__ key; } ;
typedef TYPE_1__ header_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(const header_t *VAR_0) {
  int VAR_1 = 0;
  for(; VAR_0->key; VAR_0++)
    VAR_1 += FUNC_0(VAR_0->key) + FUNC_0(VAR_0->value) + 4;
  return VAR_1;
}
