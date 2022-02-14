
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int L; } ;
struct TYPE_7__ {int sizecode; int code; } ;
typedef TYPE_1__ Proto ;
typedef TYPE_2__ LoadState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3 (LoadState *VAR_1, Proto *VAR_2) {
  int VAR_3 = FUNC_0(VAR_1);
  VAR_2->code = FUNC_2(VAR_1->L, VAR_3, VAR_0);
  VAR_2->sizecode = VAR_3;
  FUNC_1(VAR_1, VAR_2->code, VAR_3);
}
