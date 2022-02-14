
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (int const,int const) ;

__attribute__((used)) static void FUNC_1(ut32 *VAR_0, const ut32 *VAR_1) {
 static const int VAR_2[96] = {
  34, 9, 32, 24, 44, 54,
  38, 61, 47, 13, 28, 7,
  29, 58, 18, 1, 20, 60,
  15, 6, 11, 43, 39, 19,
  63, 23, 16, 62, 54, 40,
  31, 3, 56, 61, 17, 25,
  47, 38, 55, 57, 5, 4,
  15, 42, 22, 7, 2, 19,
  46, 37, 29, 39, 12, 30,
  49, 57, 31, 41, 26, 27,
  24, 36, 11, 63, 33, 16,
  56, 62, 48, 60, 59, 32,
  12, 30, 53, 48, 10, 0,
  50, 35, 3, 59, 14, 49,
  51, 45, 44, 2, 21, 33,
  55, 52, 23, 28, 8, 26,
 };
 int VAR_3;

 VAR_0[0] = 0;
 VAR_0[1] = 0;
 VAR_0[2] = 0;
 VAR_0[3] = 0;

 for (VAR_3 = 0; VAR_3 < 96; ++VAR_3) {
  VAR_0[VAR_3 / 24] |= FUNC_0(VAR_1[VAR_2[VAR_3] / 32], VAR_2[VAR_3] % 32) << (VAR_3 % 24);
 }
}
