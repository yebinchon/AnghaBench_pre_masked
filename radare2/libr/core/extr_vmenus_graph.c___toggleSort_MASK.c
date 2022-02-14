
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cur_sort; int xrefsCol; int refsCol; int mainCol; } ;
typedef TYPE_1__ RCoreVisualViewGraph ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3 (RCoreVisualViewGraph *VAR_2) {
 FUNC_2 (VAR_2);
 VAR_2->cur_sort = (VAR_2->cur_sort == VAR_0)? VAR_1: VAR_0;
 FUNC_1 (VAR_2, VAR_2->mainCol);
 FUNC_1 (VAR_2, VAR_2->refsCol);
 FUNC_1 (VAR_2, VAR_2->xrefsCol);
 FUNC_0 (VAR_2);
}
