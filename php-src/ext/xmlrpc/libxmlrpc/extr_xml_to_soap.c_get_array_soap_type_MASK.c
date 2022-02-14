
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XMLRPC_VALUE_TYPE_EASY ;
typedef scalar_t__ XMLRPC_VALUE ;


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
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
__attribute__((used)) static const char* FUNC_3(XMLRPC_VALUE VAR_10) {
 XMLRPC_VALUE_TYPE_EASY VAR_11 = 130;

 XMLRPC_VALUE VAR_12 = FUNC_2(VAR_10);
 int VAR_13 = 0;
 const char* VAR_14 = VAR_0;

 VAR_11 = FUNC_0(VAR_12);
 VAR_12 = FUNC_1(VAR_10);

 while (VAR_12) {




  if ( (FUNC_0(VAR_12) != VAR_11) || VAR_13 >= 50) {
   VAR_11 = 130;
   break;
  }
  VAR_13 ++;

  VAR_12 = FUNC_1(VAR_10);
 }
 switch (VAR_11) {
 case 130:
  VAR_14 = VAR_0;
  break;
 case 133:
  VAR_14 = VAR_7;
  break;
 case 132:
  VAR_14 = VAR_6;
  break;
 case 134:
  VAR_14 = VAR_5;
  break;
 case 136:
  VAR_14 = VAR_3;
  break;
 case 129:
  VAR_14 = VAR_8;
  break;
 case 137:
  VAR_14 = VAR_2;
  break;
 case 135:
  VAR_14 = VAR_4;
  break;
 case 128:
  VAR_14 = VAR_9;
  break;
 case 138:
  VAR_14 = VAR_1;
  break;
 case 131:
  VAR_14 = VAR_9;
  break;
 }
 return VAR_14;
}
