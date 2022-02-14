
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; int str; } ;
typedef TYPE_1__ simplestring ;
typedef int * XMLRPC_VALUE ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

 char* VAR_0 ;

 char* VAR_1 ;

 char* VAR_2 ;

 char* VAR_3 ;

 char* VAR_4 ;

 char* VAR_5 ;

 char* VAR_6 ;

 char* VAR_7 ;

 char* VAR_8 ;

 char* VAR_9 ;
 int VAR_10 ;

XMLRPC_VALUE FUNC_6(int VAR_11, const char* VAR_12) {
   XMLRPC_VALUE VAR_13 = ((void*)0);

   char* VAR_14 = ((void*)0);
   simplestring VAR_15;
   FUNC_5(&VAR_15);

   switch (VAR_11) {
 case 131:
  VAR_14 = VAR_6;
  break;
 case 132:
  VAR_14 = VAR_5;
  break;
 case 133:
  VAR_14 = VAR_4;
  break;
 case 134:
  VAR_14 = VAR_3;
  break;
 case 128:
  VAR_14 = VAR_9;
  break;
 case 135:
  VAR_14 = VAR_2;
  break;
 case 136:
  VAR_14 = VAR_1;
  break;
 case 137:
  VAR_14 = VAR_0;
  break;
 case 130:
  VAR_14 = VAR_7;
  break;
 case 129:
  VAR_14 = VAR_8;
  break;
   }

   FUNC_3(&VAR_15, VAR_14);

   if(VAR_14 && VAR_12) {
      FUNC_3(&VAR_15, "\n\n");
   }
   FUNC_3(&VAR_15, VAR_12);


   if(VAR_15.len) {
      VAR_13 = FUNC_0(((void*)0), VAR_10);

  FUNC_2 (VAR_13, "faultString", VAR_15.str,
           VAR_15.len);
      FUNC_1(VAR_13, "faultCode", VAR_11);
   }

   FUNC_4(&VAR_15);

   return VAR_13;
}
