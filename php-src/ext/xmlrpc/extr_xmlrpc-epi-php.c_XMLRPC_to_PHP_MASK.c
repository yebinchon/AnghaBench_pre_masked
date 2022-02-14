
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int XMLRPC_VALUE_TYPE ;
typedef scalar_t__ XMLRPC_VALUE ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 char const* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char const*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
__attribute__((used)) static void FUNC_21(XMLRPC_VALUE VAR_0, zval *VAR_1)
{
 const char* VAR_2;

 if (VAR_0) {
  XMLRPC_VALUE_TYPE VAR_3 = FUNC_8(VAR_0);

  switch (VAR_3) {
   case 131:
    FUNC_14(VAR_1);
    break;
   case 129:
    VAR_2 = FUNC_6(VAR_0);
    if (VAR_2) {
     FUNC_15(VAR_1, VAR_2, FUNC_7(VAR_0));
    }
    break;
   case 130:
    FUNC_13(VAR_1, FUNC_5(VAR_0));
    break;
   case 134:
    FUNC_11(VAR_1, FUNC_1(VAR_0));
    break;
   case 132:
    FUNC_12(VAR_1, FUNC_3(VAR_0));
    break;
   case 133:
    FUNC_15(VAR_1, FUNC_2(VAR_0), FUNC_7(VAR_0));
    break;
   case 135:
    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2) {
     FUNC_15(VAR_1, VAR_2, FUNC_7(VAR_0));
    }
    break;
   case 128:
    FUNC_19(VAR_1);
    {
     XMLRPC_VALUE VAR_4 = FUNC_10(VAR_0);

     while( VAR_4 ) {
      zval VAR_5;
      FUNC_16(&VAR_5);
      FUNC_21(VAR_4, &VAR_5);
      if (!FUNC_17(VAR_5)) {
       FUNC_18(VAR_1, FUNC_4(VAR_4), &VAR_5);
      }
      VAR_4 = FUNC_9(VAR_0);
     }
    }
    break;
   default:
    break;
  }
  FUNC_20(VAR_1, VAR_3);
 }
}
