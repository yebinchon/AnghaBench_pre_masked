
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int tmp ;
typedef int RBuffer ;


 int FUNC_0 (int *,int ,int*,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 FUNC_1 (VAR_0, 0);

 ut8 VAR_1[16];
 int VAR_2 = FUNC_0 (VAR_0, 0, VAR_1, sizeof (VAR_1));
 if (VAR_2 <= 0) {
  return 0;
 }

 const ut8 *VAR_3 = (const ut8 *)VAR_1;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  switch (VAR_3[VAR_4]) {
  case '+':
  case '-':
  case '>':
  case '<':
  case '[':
  case ']':
  case ',':
  case '.':
  case ' ':
  case '\n':
  case '\r':
   break;
  default:
   return 0;
  }
 }
 return 1;
}
