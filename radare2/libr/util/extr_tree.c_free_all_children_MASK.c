
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ post_visit; int member_0; } ;
typedef TYPE_1__ RTreeVisitor ;
typedef scalar_t__ RTreeNodeVisitCb ;
typedef int RTree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (RTree *VAR_1) {
 RTreeVisitor VAR_2 = { 0 };
 VAR_2.post_visit = (RTreeNodeVisitCb)VAR_0;
 FUNC_0 (VAR_1, &VAR_2);
}
