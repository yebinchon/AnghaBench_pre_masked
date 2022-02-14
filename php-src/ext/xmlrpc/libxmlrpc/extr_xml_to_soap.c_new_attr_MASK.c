
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * val; int * key; } ;
typedef TYPE_1__ xml_element_attr ;


 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 (char const*) ;

__attribute__((used)) static xml_element_attr* FUNC_2(const char* VAR_0, const char* VAR_1) {
 xml_element_attr* VAR_2 = FUNC_0(sizeof(xml_element_attr));
 if (VAR_2) {
  VAR_2->key = VAR_0 ? FUNC_1(VAR_0) : ((void*)0);
  VAR_2->val = VAR_1 ? FUNC_1(VAR_1) : ((void*)0);
 }
 return VAR_2;
}
