
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* top; int * base; } ;
typedef int TValue ;
typedef int const* StkId ;
typedef TYPE_1__ CallInfo ;



__attribute__((used)) static int FUNC_0 (CallInfo *VAR_0, const TValue *VAR_1) {
  StkId VAR_2;
  for (VAR_2 = VAR_0->base; VAR_2 < VAR_0->top; VAR_2++)
    if (VAR_1 == VAR_2) return 1;
  return 0;
}
