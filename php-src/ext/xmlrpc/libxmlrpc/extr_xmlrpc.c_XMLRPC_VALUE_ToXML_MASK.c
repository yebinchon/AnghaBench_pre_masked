
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_element ;
typedef int XMLRPC_VALUE ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int *,int*) ;

char* FUNC_3(XMLRPC_VALUE VAR_0, int* VAR_1) {
   xml_element *VAR_2 = FUNC_0(VAR_0);
   char* VAR_3 = ((void*)0);

   if(VAR_2) {
      VAR_3 = FUNC_2(VAR_2, ((void*)0), VAR_1);
      FUNC_1(VAR_2);
   }
   return VAR_3;
}
