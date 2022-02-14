
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int * branch; int persistent; int depth; } ;
typedef TYPE_1__ phpdbg_btree ;


 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(phpdbg_btree *VAR_0) {
 if (VAR_0->branch) {
  FUNC_0(VAR_0->branch, VAR_0->depth, VAR_0->persistent);
  VAR_0->branch = ((void*)0);
  VAR_0->count = 0;
 }
}
