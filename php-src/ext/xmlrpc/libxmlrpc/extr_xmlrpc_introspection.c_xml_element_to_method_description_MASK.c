
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* key; char* val; } ;
typedef TYPE_2__ xml_element_attr ;
struct TYPE_5__ {char const* str; int len; } ;
struct TYPE_7__ {char const* name; TYPE_1__ text; int children; int attrs; } ;
typedef TYPE_3__ xml_element ;
typedef int * XMLRPC_VALUE ;
typedef int XMLRPC_ERROR ;


 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char const*,char const*,int ) ;
 int * FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,int ,char const*,int ) ;
 int * FUNC_7 (char const*,char const*,char const*,int,char const*,int *) ;
 int FUNC_8 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

XMLRPC_VALUE FUNC_9(xml_element* VAR_4, XMLRPC_ERROR VAR_5) {
   XMLRPC_VALUE VAR_6 = ((void*)0);

   if(VAR_4->name) {
      const char* VAR_7 = ((void*)0);
      const char* VAR_8 = ((void*)0);
      const char* VAR_9 = ((void*)0);
      const char* VAR_10 = ((void*)0);
      const char* VAR_11 = ((void*)0);
      int VAR_12 = 0;
      xml_element_attr* VAR_13 = FUNC_0(&VAR_4->attrs);


      while(VAR_13) {
         if(!FUNC_8(VAR_13->key, "name")) {
            VAR_7 = VAR_13->val;
         }
         else if(!FUNC_8(VAR_13->key, "type")) {
            VAR_8 = VAR_13->val;
         }
         else if(!FUNC_8(VAR_13->key, "basetype")) {
            VAR_9 = VAR_13->val;
         }
         else if(!FUNC_8(VAR_13->key, "desc")) {
            VAR_10 = VAR_13->val;
         }
         else if(!FUNC_8(VAR_13->key, "optional")) {
            if(VAR_13->val && !FUNC_8(VAR_13->val, "yes")) {
               VAR_12 = 1;
            }
         }
         else if(!FUNC_8(VAR_13->key, "default")) {
            VAR_11 = VAR_13->val;
         }
         VAR_13 = FUNC_1(&VAR_4->attrs);
      }


      if(!FUNC_8(VAR_4->name, "value") || !FUNC_8(VAR_4->name, "typeDescription")) {
         XMLRPC_VALUE VAR_14 = ((void*)0);
         const char* VAR_15 = !FUNC_8(VAR_4->name, "value") ? VAR_8 : VAR_9;
         if(VAR_15) {
            if(FUNC_2(&VAR_4->children) &&
               (!FUNC_8(VAR_15, "array") || !FUNC_8(VAR_15, "struct") || !FUNC_8(VAR_15, "mixed"))) {
               VAR_14 = FUNC_5("member", VAR_1);

               if(VAR_14) {
                  xml_element* VAR_16 = FUNC_0(&VAR_4->children);
                  while(VAR_16) {
                     FUNC_3(VAR_14,
                                             FUNC_9(VAR_16, VAR_5));
                     VAR_16 = FUNC_1(&VAR_4->children);
                  }
               }
            }
            VAR_6 = FUNC_7(VAR_15, VAR_7, (VAR_10 ? VAR_10 : (VAR_14 ? ((void*)0) : VAR_4->text.str)), VAR_12, VAR_11, VAR_14);
         }
      }


      else if(!FUNC_8(VAR_4->name, "params") ||
              !FUNC_8(VAR_4->name, "returns") ||
              !FUNC_8(VAR_4->name, "signature")) {
         if(FUNC_2(&VAR_4->children)) {
            xml_element* VAR_17 = FUNC_0(&VAR_4->children);
            VAR_6 = FUNC_5(!FUNC_8(VAR_4->name, "signature") ? ((void*)0) : VAR_4->name, VAR_3);


            while(VAR_17) {
               FUNC_3(VAR_6,
                                       FUNC_9(VAR_17, VAR_5));
               VAR_17 = FUNC_1(&VAR_4->children);
            }
         }
      }


      else if(!FUNC_8(VAR_4->name, "methodDescription")) {
         xml_element* VAR_18 = FUNC_0(&VAR_4->children);
         VAR_6 = FUNC_5(((void*)0), VAR_3);

         FUNC_6(VAR_6, VAR_0, VAR_7, 0);

         while(VAR_18) {
            FUNC_3(VAR_6,
                                    FUNC_9(VAR_18, VAR_5));
            VAR_18 = FUNC_1(&VAR_4->children);
         }
      }


      else if(!FUNC_8(VAR_4->name, "item")) {
         VAR_6 = FUNC_4(VAR_7, VAR_4->text.str, VAR_4->text.len);
      }


      else if(FUNC_2(&VAR_4->children)) {
         xml_element* VAR_19 = FUNC_0(&VAR_4->children);
         VAR_6 = FUNC_5(VAR_4->name, VAR_2);

         while(VAR_19) {
            FUNC_3(VAR_6,
                                    FUNC_9(VAR_19, VAR_5));
            VAR_19 = FUNC_1(&VAR_4->children);
         }
      }




      else if(VAR_4->name && VAR_4->text.len) {
         VAR_6 = FUNC_4(VAR_4->name, VAR_4->text.str, VAR_4->text.len);
      }
   }

   return VAR_6;
}
