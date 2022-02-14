
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * cap; } ;
typedef int Capture ;
typedef TYPE_1__ CapState ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3 (CapState *VAR_0) {
  int VAR_1;
  Capture *VAR_2 = VAR_0->cap;
  FUNC_1(VAR_0);
  VAR_0->cap = FUNC_0(VAR_0, VAR_2);
  VAR_1 = FUNC_2(VAR_0, 0);
  VAR_0->cap = VAR_2 + 1;
  return VAR_1;
}
