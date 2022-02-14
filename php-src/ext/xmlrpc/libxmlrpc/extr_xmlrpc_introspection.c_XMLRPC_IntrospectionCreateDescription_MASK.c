
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xml_element ;
typedef int * XMLRPC_VALUE ;
typedef TYPE_1__* XMLRPC_ERROR ;
struct TYPE_4__ {int xml_elem_error; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int ,int ,int *) ;
 int * FUNC_2 (int *,TYPE_1__*) ;

XMLRPC_VALUE FUNC_3(const char* VAR_0, XMLRPC_ERROR VAR_1) {
   XMLRPC_VALUE VAR_2 = ((void*)0);
   xml_element* VAR_3 = FUNC_1(VAR_0, 0, 0, VAR_1 ? &VAR_1->xml_elem_error : ((void*)0));

   if(VAR_3) {
      VAR_2 = FUNC_2(VAR_3, VAR_1);

      FUNC_0(VAR_3);
   }

   return VAR_2;

}
