
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int smart_str ;
typedef scalar_t__ encodePtr ;
typedef int enc ;
typedef int HashTable ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(encodePtr VAR_0, HashTable *VAR_1, smart_str *VAR_2) {
 if (VAR_0) {
  zval *VAR_3;
  if ((VAR_3 = FUNC_2(VAR_1, (char*)&VAR_0, sizeof(VAR_0))) != 0) {
   FUNC_0(FUNC_1(VAR_3), VAR_2);
  } else {
   FUNC_0(0, VAR_2);
  }
 } else {
  FUNC_0(0, VAR_2);
 }
}
