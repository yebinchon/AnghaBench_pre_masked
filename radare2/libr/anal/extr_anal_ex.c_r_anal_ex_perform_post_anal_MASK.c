
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {TYPE_1__* cur; } ;
struct TYPE_5__ {int (* post_anal ) (TYPE_2__*,int *,int ) ;} ;
typedef int RAnalState ;
typedef TYPE_2__ RAnal ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_1(RAnal *VAR_0, RAnalState *VAR_1, ut64 VAR_2) {
 if (VAR_0 && VAR_0->cur && VAR_0->cur->post_anal) {
  VAR_0->cur->post_anal (VAR_0, VAR_1, VAR_2);
 }
}
