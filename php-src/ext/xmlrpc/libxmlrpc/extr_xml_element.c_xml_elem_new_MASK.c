
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int text; int attrs; int children; } ;
typedef TYPE_1__ xml_element ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;

xml_element* FUNC_4() {
   xml_element* VAR_0 = FUNC_1(1, sizeof(xml_element));
   if(VAR_0) {
      FUNC_0(&VAR_0->children);
      FUNC_0(&VAR_0->attrs);
      FUNC_3(&VAR_0->text);


      FUNC_2(&VAR_0->text, "", 0);
   }
   return VAR_0;
}
