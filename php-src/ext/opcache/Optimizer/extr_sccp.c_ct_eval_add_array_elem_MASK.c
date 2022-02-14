
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int VAR_0 ;






 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,int,int *) ;
 int * FUNC_10 (int ,int *) ;
 int * FUNC_11 (int ,int ,int *) ;
 int * FUNC_12 (int ,int ,int *) ;

__attribute__((used)) static inline int FUNC_13(zval *VAR_2, zval *VAR_3, zval *VAR_4) {
 if (!VAR_4) {
  FUNC_0(VAR_2);
  if ((VAR_3 = FUNC_10(FUNC_2(VAR_2), VAR_3))) {
   FUNC_6(VAR_3);
   return VAR_1;
  }
  return VAR_0;
 }

 switch (FUNC_7(VAR_4)) {
  case 130:
   FUNC_0(VAR_2);
   VAR_3 = FUNC_11(FUNC_2(VAR_2), FUNC_1(), VAR_3);
   break;
  case 132:
   FUNC_0(VAR_2);
   VAR_3 = FUNC_9(FUNC_2(VAR_2), 0, VAR_3);
   break;
  case 128:
   FUNC_0(VAR_2);
   VAR_3 = FUNC_9(FUNC_2(VAR_2), 1, VAR_3);
   break;
  case 131:
   FUNC_0(VAR_2);
   VAR_3 = FUNC_9(FUNC_2(VAR_2), FUNC_4(VAR_4), VAR_3);
   break;
  case 133:
   FUNC_0(VAR_2);
   VAR_3 = FUNC_9(
    FUNC_2(VAR_2), FUNC_8(FUNC_3(VAR_4)), VAR_3);
   break;
  case 129:
   FUNC_0(VAR_2);
   VAR_3 = FUNC_12(FUNC_2(VAR_2), FUNC_5(VAR_4), VAR_3);
   break;
  default:
   return VAR_0;
 }

 FUNC_6(VAR_3);
 return VAR_1;
}
