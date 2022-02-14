
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pre_visit; int member_0; } ;
typedef TYPE_1__ RTreeVisitor ;
typedef scalar_t__ RTreeNodeVisitCb ;
typedef int RTree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3 (RTree *VAR_2) {
 RTreeVisitor VAR_3 = { 0 };


 FUNC_1 (VAR_0, "\x1b[2K\r");
 FUNC_0 (VAR_0);
 VAR_3.pre_visit = (RTreeNodeVisitCb)VAR_1;
 FUNC_2 (VAR_2, &VAR_3);
}
