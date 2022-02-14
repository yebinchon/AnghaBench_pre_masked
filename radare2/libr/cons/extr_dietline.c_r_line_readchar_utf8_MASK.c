
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int ,int*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(ut8 *VAR_1, int VAR_2) {




 ssize_t VAR_3, VAR_4;
 if (VAR_2 < 1) {
  return 0;
 }
 int VAR_5 = FUNC_1 ();
 if (VAR_5 == -1) {
  return -1;
 }
 *VAR_1 = VAR_5;





 *VAR_1 = FUNC_0 (*VAR_1);
 if (*VAR_1 < 0x80) {
  VAR_3 = 1;
 } else if ((VAR_1[0] & 0xe0) == 0xc0) {
  VAR_3 = 2;
 } else if ((VAR_1[0] & 0xf0) == 0xe0) {
  VAR_3 = 3;
 } else if ((VAR_1[0] & 0xf8) == 0xf0) {
  VAR_3 = 4;
 } else {
  return -1;
 }
 if (VAR_3 > VAR_2) {
  return -1;
 }
 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
  int VAR_6 = FUNC_1 ();
  if (VAR_6 != -1) {
   VAR_1[VAR_4] = VAR_6;
  }
  if ((VAR_1[VAR_4] & 0xc0) != 0x80) {
   return -1;
  }
 }
 return VAR_3;

}
