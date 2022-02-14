
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ctxSearchCB {int count; int rad; int prefix; int core; } ;
struct TYPE_4__ {int addr; } ;
typedef int RSignItem ;
typedef TYPE_1__ RAnalFunction ;


 int FUNC_0 (int ,int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(RSignItem *VAR_0, RAnalFunction *VAR_1, void *VAR_2) {
 struct ctxSearchCB *VAR_3 = (struct ctxSearchCB *) VAR_2;

 FUNC_0 (VAR_3->core, VAR_0, VAR_1->addr, FUNC_1 (VAR_1), VAR_3->count, VAR_3->prefix, VAR_3->rad);
 VAR_3->count++;
 return 1;
}
