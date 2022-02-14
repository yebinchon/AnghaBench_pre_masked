
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (int const,int const) ;

__attribute__((used)) static void FUNC_1(ut32 *VAR_0, const ut32 *VAR_1) {
 static const int VAR_2[96] = {
  33, 58, 49, 36, 0, 31,
  22, 30, 3, 16, 5, 53,
  10, 41, 23, 19, 27, 39,
  43, 6, 34, 12, 61, 21,
  48, 13, 32, 35, 6, 42,
  43, 14, 21, 41, 52, 25,
  18, 47, 46, 37, 57, 53,
  20, 8, 55, 54, 59, 60,
  27, 33, 35, 18, 8, 15,
  63, 1, 50, 44, 16, 46,
  5, 4, 45, 51, 38, 25,
  13, 11, 62, 29, 48, 2,
  59, 61, 62, 56, 51, 57,
  54, 9, 24, 63, 22, 7,
  26, 42, 45, 40, 23, 14,
  2, 31, 52, 28, 44, 17,
 };
 int VAR_3;

 VAR_0[0] = 0;
 VAR_0[1] = 0;
 VAR_0[2] = 0;
 VAR_0[3] = 0;

 for (VAR_3 = 0; VAR_3 < 96; ++VAR_3) {
  VAR_0[VAR_3 / 24] |= FUNC_0 (VAR_1[VAR_2[VAR_3] / 32], VAR_2[VAR_3] % 32) << (VAR_3 % 24);
 }
}
