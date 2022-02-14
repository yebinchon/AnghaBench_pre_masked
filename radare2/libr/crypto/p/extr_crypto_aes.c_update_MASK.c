
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {scalar_t__ dir; } ;
typedef TYPE_1__ RCrypto ;


 int VAR_0 ;
 int FUNC_0 (int *,int* const,int* const) ;
 int FUNC_1 (int *,int* const,int* const) ;
 int* FUNC_2 (int,int const) ;
 int FUNC_3 (int* const) ;
 int FUNC_4 (int* const,int const*,int) ;
 int FUNC_5 (int* const,int ,int const) ;
 int FUNC_6 (TYPE_1__*,int* const,int const) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_7 (RCrypto *VAR_2, const ut8 *VAR_3, int VAR_4) {

 const int VAR_5 = (VAR_0 - (VAR_4 % VAR_0)) % VAR_0;
 const int VAR_6 = VAR_4 + VAR_5;
 const int VAR_7 = VAR_6 / VAR_0;
 int VAR_8;

 ut8 *const VAR_9 = FUNC_2 (1, VAR_6);
 if (!VAR_9) {
  return 0;
 }
 ut8 *const VAR_10 = FUNC_2 (1, VAR_6);
 if (!VAR_10) {
  FUNC_3 (VAR_9);
  return 0;
 }

 FUNC_5 (VAR_10, 0, VAR_6);
 FUNC_4 (VAR_10, VAR_3, VAR_4);

 if (VAR_5) {
  VAR_10[VAR_4] = 8;
 }

 if (VAR_2->dir == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   const int VAR_11 = VAR_0 * VAR_8;
   FUNC_1 (&VAR_1, VAR_10 + VAR_11, VAR_9 + VAR_11);
  }
 } else if (VAR_2->dir > 0) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   const int VAR_12 = VAR_0 * VAR_8;
   FUNC_0 (&VAR_1, VAR_10 + VAR_12, VAR_9 + VAR_12);
  }
 }



 FUNC_6 (VAR_2, VAR_9, VAR_6);
 FUNC_3 (VAR_9);
 FUNC_3 (VAR_10);
 return 1;
}
