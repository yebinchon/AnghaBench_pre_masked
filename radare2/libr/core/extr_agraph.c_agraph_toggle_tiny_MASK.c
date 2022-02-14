
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int event_data; } ;
struct TYPE_5__ {int is_tiny; int need_update_dim; } ;
typedef TYPE_1__ RAGraph ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 () ;

__attribute__((used)) static void FUNC_3 (RAGraph *VAR_0) {
 VAR_0->is_tiny = !VAR_0->is_tiny;
 VAR_0->need_update_dim = 1;
 FUNC_0 (FUNC_2 ()->event_data);
 FUNC_1 ((RAGraph *) VAR_0);

}
