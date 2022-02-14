
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {int src; } ;
typedef TYPE_1__ php_converter_object ;
typedef int int8_t ;
typedef int chars ;
typedef int UErrorCode ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;



 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (int ,char*,int*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(zval *VAR_2, zval *VAR_3, zend_long VAR_4, zval *VAR_5) {
 FUNC_4(VAR_5);
 FUNC_8(VAR_5);
 FUNC_5(VAR_5, VAR_1);

 switch (VAR_4) {
  case 128:
  case 130:
  case 129:
  {
   php_converter_object *VAR_6 = (php_converter_object*)FUNC_0(VAR_3);
   char VAR_7[127];
   int8_t VAR_8 = sizeof(VAR_7);
   UErrorCode VAR_9 = VAR_1;
            if(!VAR_6->src) {
                FUNC_6(VAR_6, VAR_0, "Source Converter has not been initialized yet");
    VAR_7[0] = 0x1A;
    VAR_7[1] = 0;
    VAR_8 = 1;
                FUNC_5(VAR_5, VAR_0);
                FUNC_1(VAR_7, VAR_8);
                return;
            }
   FUNC_7(VAR_6->src, VAR_7, &VAR_8, &VAR_9);
   if (FUNC_3(VAR_9)) {
    FUNC_2(VAR_6, "ucnv_getSubstChars", VAR_9);
    VAR_7[0] = 0x1A;
    VAR_7[1] = 0;
    VAR_8 = 1;
             FUNC_5(VAR_5, VAR_9);
   }
   FUNC_1(VAR_7, VAR_8);
  }
 }
}
