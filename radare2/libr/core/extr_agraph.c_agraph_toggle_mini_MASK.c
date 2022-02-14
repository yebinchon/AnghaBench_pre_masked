
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int event_data; } ;
struct TYPE_8__ {int need_update_dim; int curnode; } ;
struct TYPE_7__ {int is_mini; } ;
typedef TYPE_1__ RANode ;
typedef TYPE_2__ RAGraph ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(RAGraph *VAR_0) {
 RANode *VAR_1 = FUNC_2 (VAR_0->curnode);
 if (VAR_1) {
  VAR_1->is_mini = !VAR_1->is_mini;
 }
 VAR_0->need_update_dim = 1;
 FUNC_0 (FUNC_3 ()->event_data);
 FUNC_1 ((RAGraph *) VAR_0);
}
