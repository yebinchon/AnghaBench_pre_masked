
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_4__ {scalar_t__ dir; } ;
typedef TYPE_1__ RCrypto ;


 int VAR_0 ;
 int* FUNC_0 (int,int const) ;
 int FUNC_1 (int* const) ;
 int FUNC_2 (TYPE_1__*,int* const,int const) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *,int* const,int* const) ;
 int FUNC_5 (int *,int* const,int* const) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_6(RCrypto *VAR_2, const ut8 *VAR_3, int VAR_4) {

 const int VAR_5 = (VAR_0 - (VAR_4 % VAR_0)) % VAR_0;
 const int VAR_6 = VAR_4 + VAR_5;
 const int VAR_7 = VAR_6 / VAR_0;
 int VAR_8, VAR_9;

 ut8 *const VAR_10 = FUNC_0 (4, VAR_6/4);
 if (!VAR_10) {
  return 0;
 }
 ut32 *const VAR_11 = FUNC_0 (4, VAR_6/4);
 if (!VAR_11) {
  FUNC_1 (VAR_10);
  return 0;
 }
 ut32 *const VAR_12 = FUNC_0 (4, VAR_6/4);
 if (!VAR_11) {
  FUNC_1 (VAR_10);
  FUNC_1 (VAR_11);
  return 0;
 }


 for (VAR_9 = 0; VAR_9 < VAR_6/4; VAR_9++) {
  VAR_11[VAR_9] = FUNC_3(&VAR_3[4*VAR_9]);
 }



 if (VAR_2->dir == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

   const int VAR_13 = (VAR_0 * VAR_8)/4;
   FUNC_5 (&VAR_1, VAR_11 + VAR_13, VAR_12 + VAR_13);
  }
 } else if (VAR_2->dir > 0) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

   const int VAR_14 = (VAR_0 * VAR_8)/4;
   FUNC_4 (&VAR_1, VAR_11 + VAR_14, VAR_12 + VAR_14);
  }
 }


 int VAR_15;
 for (VAR_9 = 0; VAR_9 < VAR_6/4; VAR_9++) {
  VAR_15 = 4*VAR_9;
  VAR_10[VAR_15] = VAR_12[VAR_9] & 0xff;
  VAR_10[VAR_15+1] = (VAR_12[VAR_9] >> 8) & 0xff;
  VAR_10[VAR_15+2] = (VAR_12[VAR_9] >> 16) & 0xff;
  VAR_10[VAR_15+3] = (VAR_12[VAR_9] >> 24) & 0xff;
 }

 FUNC_2 (VAR_2, VAR_10, VAR_6);
 FUNC_1 (VAR_10);
 FUNC_1 (VAR_11);
 FUNC_1 (VAR_12);
 return 1;
}
