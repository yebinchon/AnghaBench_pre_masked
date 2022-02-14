
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int ut32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4 (ut8 *VAR_5, int VAR_6, ut64 VAR_7) {
 ut32 VAR_8 = 500;
 ut32 VAR_9 = VAR_6 / VAR_8;
 ut32 VAR_10 = VAR_6 % VAR_8;
 ut32 VAR_11;
 if (VAR_2 && VAR_7 != VAR_0 && VAR_7 == VAR_1) {
  FUNC_1 (VAR_5, VAR_2, VAR_6);
  return VAR_6;
 }
 if (VAR_6 < 1 || VAR_7 >= VAR_0) {
  return -1;
 }
 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  FUNC_2 (VAR_4, VAR_7 + VAR_11 * VAR_8, (VAR_5 + VAR_11 * VAR_8), VAR_8);
 }
 if (VAR_10) {
  FUNC_2 (VAR_4, VAR_7 + VAR_11 * VAR_8, (VAR_5 + VAR_11 * VAR_8), VAR_10);
 }
 VAR_1 = VAR_7;
 VAR_3 = VAR_6;




 return VAR_6;
}
