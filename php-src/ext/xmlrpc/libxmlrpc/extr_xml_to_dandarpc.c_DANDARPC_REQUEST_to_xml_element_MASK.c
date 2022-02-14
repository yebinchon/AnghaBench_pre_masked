
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int children; int text; void* name; int attrs; void* val; void* key; } ;
typedef TYPE_1__ xml_element_attr ;
typedef TYPE_1__ xml_element ;
typedef scalar_t__ XMLRPC_REQUEST_TYPE ;
typedef scalar_t__ XMLRPC_REQUEST ;


 char const* VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__,int ) ;
 char* VAR_1 ;
 char const* VAR_2 ;
 char* VAR_3 ;
 char const* VAR_4 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 char const* VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_1__* FUNC_5 (int) ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 (int *,char const*) ;
 TYPE_1__* FUNC_8 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

xml_element* FUNC_9(XMLRPC_REQUEST VAR_8) {
   xml_element* VAR_9 = ((void*)0);
   xml_element* VAR_10 = ((void*)0);
   if(VAR_8) {
      XMLRPC_REQUEST_TYPE VAR_11 = FUNC_4(VAR_8);
      const char* VAR_12 = ((void*)0);
      xml_element_attr* VAR_13 = FUNC_5(sizeof(xml_element_attr));
      VAR_13->key = FUNC_6(VAR_0);
      VAR_13->val = FUNC_6(VAR_5);

      VAR_9 = FUNC_8();

      if(VAR_11 == VAR_7) {
         VAR_12 = VAR_3;
      }
      else if(VAR_11 == VAR_6) {
         VAR_12 = VAR_1;
      }
      if(VAR_12) {
         VAR_9->name = FUNC_6(VAR_12);
      }

      VAR_10 = FUNC_8();
      VAR_10->name = FUNC_6(VAR_4);
      FUNC_1(&VAR_10->attrs, VAR_13);
      FUNC_1(&VAR_10->children, VAR_9);

      VAR_12 = FUNC_3(VAR_8);

      if(VAR_12) {
         xml_element* VAR_14 = FUNC_8();
         VAR_14->name = FUNC_6(VAR_2);
         FUNC_7(&VAR_14->text, VAR_12);
         FUNC_1(&VAR_9->children, VAR_14);
      }
      FUNC_1(&VAR_9->children,
                 FUNC_0(VAR_8, FUNC_2(VAR_8)));
   }
   return VAR_10;
}
