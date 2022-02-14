
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cur_sort; } ;
struct TYPE_6__ {int sorted; } ;
typedef int RListComparator ;
typedef TYPE_1__ RList ;
typedef TYPE_2__ RCoreVisualViewGraph ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (RCoreVisualViewGraph *VAR_3, RList *VAR_4) {
 FUNC_1 (VAR_3 && VAR_4);
 RListComparator VAR_5 = (VAR_3->cur_sort == VAR_0)? VAR_1: VAR_2;
 VAR_4->sorted = 0;
 FUNC_0 (VAR_4, VAR_5);
}
