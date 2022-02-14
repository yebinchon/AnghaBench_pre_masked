
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ isTabFunc; } ;
struct SrcList_item {int zName; TYPE_1__ fg; } ;
typedef int Parse ;


 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_1(Parse *VAR_0, struct SrcList_item *VAR_1){
  if( VAR_1->fg.isTabFunc ){
    FUNC_0(VAR_0, "'%s' is not a function", VAR_1->zName);
    return 1;
  }
  return 0;
}
