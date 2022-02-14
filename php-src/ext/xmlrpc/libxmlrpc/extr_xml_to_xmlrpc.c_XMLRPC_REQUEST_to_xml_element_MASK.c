
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int children; void* name; int text; } ;
typedef TYPE_1__ xml_element ;
typedef scalar_t__ XMLRPC_VALUE ;
typedef scalar_t__ XMLRPC_REQUEST_TYPE ;
typedef scalar_t__ XMLRPC_REQUEST ;


 char* VAR_0 ;
 char const* VAR_1 ;
 char* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int *,scalar_t__,scalar_t__,int ) ;
 void* FUNC_5 (char const*) ;
 int FUNC_6 (int *,char const*) ;
 TYPE_1__* FUNC_7 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

xml_element* FUNC_8(XMLRPC_REQUEST VAR_6) {
   xml_element* VAR_7 = ((void*)0);
   if (VAR_6) {
      const char* VAR_8 = ((void*)0);
      XMLRPC_REQUEST_TYPE VAR_9 = FUNC_3(VAR_6);
      XMLRPC_VALUE VAR_10 = FUNC_1(VAR_6);

      VAR_7 = FUNC_7();

      if (VAR_9 == VAR_4) {
         VAR_8 = VAR_0;
  }
  else if (VAR_9 == VAR_5) {
         VAR_8 = VAR_2;
      }
      if (VAR_8) {
         VAR_7->name = FUNC_5(VAR_8);
      }

  if(VAR_9 == VAR_4) {
      VAR_8 = FUNC_2(VAR_6);

      if (VAR_8) {
         xml_element* VAR_11 = FUNC_7();
         VAR_11->name = FUNC_5(VAR_1);
         FUNC_6(&VAR_11->text, VAR_8);
         FUNC_0(&VAR_7->children, VAR_11);
      }
  }
      if (VAR_10) {
         FUNC_0(&VAR_7->children,
                    FUNC_4(((void*)0), FUNC_1(VAR_6), FUNC_3(VAR_6), 0));
  }
  else {

         xml_element* VAR_12 = FUNC_7();
         VAR_12->name = FUNC_5(VAR_3);
         FUNC_0(&VAR_7->children, VAR_12);
      }
   }
   return VAR_7;
}
