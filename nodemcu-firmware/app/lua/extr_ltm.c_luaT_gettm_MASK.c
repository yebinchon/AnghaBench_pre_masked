
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int TString ;
typedef unsigned int TMS ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int const*) ;

const TValue *FUNC_6 (Table *VAR_1, TMS VAR_2, TString *VAR_3) {
  const TValue *VAR_4;
  FUNC_4(VAR_2 <= VAR_0);

  if (FUNC_3(VAR_1)) {
    VAR_4 = FUNC_2(VAR_1, VAR_3);
    if (FUNC_5(VAR_4)) {
      return ((void*)0);
    }
  } else {
    VAR_4 = FUNC_1(VAR_1, VAR_3);
    if (FUNC_5(VAR_4)) {
      VAR_1->flags |= FUNC_0(1u<<VAR_2);
      return ((void*)0);
    }
  }
  return VAR_4;
}
