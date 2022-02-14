
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;



 int VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void FUNC_11(int VAR_5, json_object *VAR_6) {
 if (VAR_5 != 132 && VAR_5 != 128 &&
   VAR_5 != 131 && VAR_5 != 130 &&
   VAR_5 != VAR_1 && VAR_5 != 129 &&
   VAR_5 != VAR_0 && VAR_5 != VAR_2) {
  FUNC_10("%s\n", FUNC_2(VAR_6,
   VAR_3 | VAR_4));
  return;
 }

 if (VAR_5 == VAR_2) {
  return;
 }

 if (VAR_5 == VAR_1) {
  FUNC_8(VAR_6);
  return;
 }

 if (VAR_5 == VAR_0) {
  FUNC_4(VAR_6);
  return;
 }

 json_object *VAR_7;
 size_t VAR_8 = FUNC_1(VAR_6);
 for (size_t VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
  VAR_7 = FUNC_0(VAR_6, VAR_9);
  switch (VAR_5) {
  case 132:
   FUNC_3(VAR_7);
   break;
  case 128:
   FUNC_9(VAR_7);
   break;
  case 131:
   FUNC_5(VAR_7);
   break;
  case 130:
   FUNC_6(VAR_7);
   break;
  case 129:
   FUNC_7(VAR_7);
   break;
  }
 }
}
