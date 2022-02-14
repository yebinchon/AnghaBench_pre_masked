
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptop; int valuecached; int L; } ;
typedef TYPE_1__ CapState ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2 (CapState *VAR_0, int VAR_1) {
  int VAR_2 = VAR_0->ptop + 1;
  if (VAR_1 != VAR_0->valuecached) {
    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0->L, VAR_2);
    VAR_0->valuecached = VAR_1;
  }
  return VAR_2;
}
