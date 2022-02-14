
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ gray; } ;
typedef TYPE_1__ global_State ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_1 (global_State *VAR_0) {
  size_t VAR_1 = 0;
  while (VAR_0->gray) VAR_1 += FUNC_0(VAR_0);
  return VAR_1;
}
