
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int anal; int offset; } ;
struct TYPE_6__ {int mainCol; TYPE_5__* core; int addr; int fcn; } ;
typedef TYPE_1__ RCoreVisualViewGraph ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(RCoreVisualViewGraph *VAR_0) {
 VAR_0->addr = VAR_0->core->offset;
 VAR_0->fcn = FUNC_3 (VAR_0->core->anal, VAR_0->addr, 0);

 VAR_0->mainCol = FUNC_0 (VAR_0->core);
 FUNC_2 (VAR_0, VAR_0->mainCol);
 FUNC_1 (VAR_0);

 return;
}
