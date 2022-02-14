
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int8_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static u_int8_t FUNC_1(char* VAR_0, int VAR_1) {
 u_int8_t VAR_2 = 0;
 int VAR_3;

 if (!VAR_0) {
  FUNC_0("Invalid pointer provided!\n");
  return 0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 += VAR_0[VAR_3];
 }

 return VAR_2;
}
