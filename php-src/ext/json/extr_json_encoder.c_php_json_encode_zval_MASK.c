
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int smart_str ;
struct TYPE_6__ {int error_code; } ;
typedef TYPE_1__ php_json_encoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int *,int,TYPE_1__*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int *,int,TYPE_1__*) ;
 int FUNC_12 (int *,int ,int ,int,TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int VAR_5 ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,char*,int) ;
 int FUNC_17 (int *) ;

int FUNC_18(smart_str *VAR_6, zval *VAR_7, int VAR_8, php_json_encoder *VAR_9)
{
again:
 switch (FUNC_7(VAR_7))
 {
  case 132:
   FUNC_16(VAR_6, "null", 4);
   break;

  case 128:
   FUNC_16(VAR_6, "true", 4);
   break;
  case 134:
   FUNC_16(VAR_6, "false", 5);
   break;

  case 133:
   FUNC_14(VAR_6, FUNC_2(VAR_7));
   break;

  case 135:
   if (FUNC_13(FUNC_1(VAR_7))) {
    FUNC_10(VAR_6, FUNC_1(VAR_7), VAR_8);
   } else {
    VAR_9->error_code = VAR_1;
    FUNC_15(VAR_6, '0');
   }
   break;

  case 129:
   return FUNC_12(VAR_6, FUNC_6(VAR_7), FUNC_5(VAR_7), VAR_8, VAR_9);

  case 131:
   if (FUNC_8(FUNC_3(VAR_7), VAR_5)) {
    return FUNC_11(VAR_6, VAR_7, VAR_8, VAR_9);
   }

  case 136: {


   zval VAR_10;
   int VAR_11;
   FUNC_0(&VAR_10, VAR_7);
   VAR_11 = FUNC_9(VAR_6, &VAR_10, VAR_8, VAR_9);
   FUNC_17(&VAR_10);
   return VAR_11;
  }

  case 130:
   VAR_7 = FUNC_4(VAR_7);
   goto again;

  default:
   VAR_9->error_code = VAR_2;
   if (VAR_8 & VAR_3) {
    FUNC_16(VAR_6, "null", 4);
   }
   return VAR_0;
 }

 return VAR_4;
}
