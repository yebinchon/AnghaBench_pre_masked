
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlen ;
typedef scalar_t__ ut8 ;
typedef scalar_t__ ut32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(ut8 *VAR_2, ut32 VAR_3, ut32 VAR_4) {
 if (VAR_3 > VAR_0) {
  return 0;
 }
 if (VAR_4 >= VAR_1) {
  return 0;
 }
 VAR_2[0] = (ut8)VAR_3;
 VAR_2[1] = (ut8)((VAR_4 ) & 0xff);
 VAR_2[2] = (ut8)((VAR_4 >> 8 ) & 0xff);
 VAR_2[3] = (ut8)((VAR_4 >> 16) & 0xff);
 return 1;
}
