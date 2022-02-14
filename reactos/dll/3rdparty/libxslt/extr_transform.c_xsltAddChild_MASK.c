
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlNodePtr ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static xmlNodePtr
FUNC_2(xmlNodePtr VAR_0, xmlNodePtr VAR_1) {
   xmlNodePtr VAR_2;

   if (VAR_1 == ((void*)0))
       return(((void*)0));
   if (VAR_0 == ((void*)0)) {
       FUNC_1(VAR_1);
       return(((void*)0));
   }
   VAR_2 = FUNC_0(VAR_0, VAR_1);

   return(VAR_2);
}
