
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int ut32 ;
typedef int uint8_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_2 (const ut8 *VAR_5, int VAR_6, ut64 VAR_7) {
 ut32 VAR_8, VAR_9 = 500;
 ut32 VAR_10 = VAR_6 / VAR_9;
 ut32 VAR_11 = VAR_6 % VAR_9;

 if (VAR_6 < 1 || VAR_7 >= VAR_0) {
  return -1;
 }
 if (VAR_1 != VAR_0 && VAR_7 >= VAR_1 && VAR_1 + VAR_6 < (VAR_1 + VAR_3)) {
  FUNC_0 (VAR_2);
  VAR_1 = VAR_0;
 }
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  FUNC_1 (VAR_4, VAR_7 + VAR_8 * VAR_9,
       (const uint8_t *)(VAR_5 + VAR_8 * VAR_9), VAR_9);
 }
 if (VAR_11) {
  FUNC_1 (VAR_4, VAR_7 + VAR_8 * VAR_9,
       (VAR_5 + VAR_8 * VAR_9), VAR_11);
 }

 return VAR_6;
}
