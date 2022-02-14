
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ free; } ;
typedef scalar_t__ RListFree ;
typedef TYPE_1__ RList ;
typedef int RDebug ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static RList* FUNC_1(RDebug *VAR_2, int VAR_3) {
 RList *VAR_4;
 if ((VAR_4 = FUNC_0 (VAR_0, VAR_3))) {
  VAR_4->free = (RListFree) &VAR_1;
 }
 return VAR_4;
}
