
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int text; int * name; int attrs; int children; struct TYPE_7__* val; struct TYPE_7__* key; } ;
typedef TYPE_1__ xml_element_attr ;
typedef TYPE_1__ xml_element ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(xml_element* VAR_0) {
   if(VAR_0) {
      xml_element_attr* VAR_1 = FUNC_1(&VAR_0->attrs);
      while(VAR_1) {
         FUNC_4(VAR_1->key);
         FUNC_4(VAR_1->val);
         FUNC_4(VAR_1);
         VAR_1 = FUNC_2(&VAR_0->attrs);
      }

      FUNC_0(&VAR_0->children);
      FUNC_0(&VAR_0->attrs);
      if(VAR_0->name) {
          FUNC_3((char *)VAR_0->name);
          VAR_0->name = ((void*)0);
      }
      FUNC_5(&VAR_0->text);
      FUNC_4(VAR_0);
   }
}
