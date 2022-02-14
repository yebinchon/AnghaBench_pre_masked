
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int ut16 ;


 int FUNC_0 (int ,int const) ;

__attribute__((used)) static void FUNC_1(ut32* VAR_0, ut16 VAR_1) {

 static const int VAR_2[64] = {
  5, 10, 14, 9, 4, 0, 15, 6, 1, 8, 3, 2, 12, 7, 13, 11,
  5, 12, 7, 2, 13, 11, 9, 14, 4, 1, 6, 10, 8, 0, 15, 3,
  4, 10, 2, 0, 6, 9, 12, 1, 11, 7, 15, 8, 13, 5, 14, 3,
  14, 11, 12, 7, 4, 5, 2, 10, 1, 15, 0, 9, 8, 6, 13, 3,
 };
 int VAR_3;

 VAR_0[0] = 0;
 VAR_0[1] = 0;

 for (VAR_3 = 0; VAR_3 < 64; ++VAR_3) {
  VAR_0[VAR_3 / 32] |= FUNC_0(VAR_1, VAR_2[VAR_3]) << (VAR_3 % 32);
 }
}
