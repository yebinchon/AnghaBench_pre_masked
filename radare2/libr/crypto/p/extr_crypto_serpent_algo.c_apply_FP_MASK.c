
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;

void FUNC_1(ut32 VAR_2[VAR_0], ut32 VAR_3[VAR_0]) {
 int VAR_4;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_0*32; VAR_5++) {
  VAR_4 = VAR_1[VAR_5];
  VAR_3[VAR_5/32] ^= (-(ut32)FUNC_0 (VAR_4%32, VAR_2[VAR_4/32]) ^ VAR_3[VAR_5/32])
   & (1 << VAR_5);
 }
}
