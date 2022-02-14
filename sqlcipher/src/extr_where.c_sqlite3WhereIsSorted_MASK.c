
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wctrlFlags; int sorted; } ;
typedef TYPE_1__ WhereInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(WhereInfo *VAR_2){
  FUNC_0( VAR_2->wctrlFlags & VAR_0 );
  FUNC_0( VAR_2->wctrlFlags & VAR_1 );
  return VAR_2->sorted;
}
