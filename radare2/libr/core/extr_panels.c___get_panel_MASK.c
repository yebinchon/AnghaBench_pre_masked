
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** panel; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;


 int VAR_0 ;

RPanel *FUNC_0(RPanels *VAR_1, int VAR_2) {
 if (!VAR_1 || (VAR_2 >= VAR_0)) {
  return ((void*)0);
 }
 return VAR_1->panel[VAR_2];
}
