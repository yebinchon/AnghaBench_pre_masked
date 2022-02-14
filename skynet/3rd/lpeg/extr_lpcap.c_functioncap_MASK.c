
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int L; } ;
typedef TYPE_1__ CapState ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4 (CapState *VAR_1) {
  int VAR_2;
  int VAR_3 = FUNC_1(VAR_1->L);
  FUNC_2(VAR_1);
  VAR_2 = FUNC_3(VAR_1, 0);
  FUNC_0(VAR_1->L, VAR_2, VAR_0);
  return FUNC_1(VAR_1->L) - VAR_3;
}
