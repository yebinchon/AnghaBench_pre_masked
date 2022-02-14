
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int movspeed; } ;
struct TYPE_5__ {int config; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAGraph ;


 int const VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(RAGraph *VAR_1, RCore *VAR_2) {
 const int VAR_3 = FUNC_0 (VAR_2->config, "graph.scroll");
 VAR_1->movspeed = VAR_1->movspeed == VAR_0? VAR_3: VAR_0;
}
