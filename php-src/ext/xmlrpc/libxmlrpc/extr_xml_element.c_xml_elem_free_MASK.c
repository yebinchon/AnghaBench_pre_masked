
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int children; } ;
typedef TYPE_1__ xml_element ;


 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(xml_element* VAR_0) {
   if(VAR_0) {
      xml_element* VAR_1 = FUNC_0(&VAR_0->children);
      while(VAR_1) {
         FUNC_3(VAR_1);
         VAR_1 = FUNC_1(&VAR_0->children);
      }
      FUNC_2(VAR_0);
   }
}
