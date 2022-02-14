
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int ut32 ;



__attribute__((used)) static void FUNC_0(ut8 *VAR_0, ut32 *VAR_1, ut32 VAR_2) {
 ut32 VAR_3, VAR_4;
 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < VAR_2; VAR_3++, VAR_4 += 4) {
  VAR_0[VAR_4] = (ut8)(VAR_1[VAR_3] & 0xff);
  VAR_0[VAR_4+1] = (ut8)((VAR_1[VAR_3] >> 8) & 0xff);
  VAR_0[VAR_4+2] = (ut8)((VAR_1[VAR_3] >> 16) & 0xff);
  VAR_0[VAR_4+3] = (ut8)((VAR_1[VAR_3] >> 24) & 0xff);
 }
}
