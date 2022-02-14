
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
struct XXH_state32_t {int memsize; int total_len; int v1; int v2; int v3; int v4; int seed; scalar_t__ memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;

ut32 FUNC_2 (void *VAR_5) {
 struct XXH_state32_t *VAR_6 = VAR_5;
 ut8 *VAR_7 = (ut8 *) VAR_6->memory;
 ut8 *VAR_8 = (ut8 *) VAR_6->memory + VAR_6->memsize;
 ut32 VAR_9;

 if (VAR_6->total_len >= 16) {
  VAR_9 = FUNC_0 (VAR_6->v1, 1) + FUNC_0 (VAR_6->v2, 7) +
  FUNC_0 (VAR_6->v3, 12) + FUNC_0 (VAR_6->v4, 18);
 } else {
  VAR_9 = VAR_6->seed + VAR_4;
 }

 VAR_9 += (ut32) VAR_6->total_len;

 while (VAR_7 <= VAR_8 - 4) {
  VAR_9 += FUNC_1 (VAR_7) * VAR_2;
  VAR_9 = FUNC_0 (VAR_9, 17) * VAR_3;
  VAR_7 += 4;
 }
 while (VAR_7 < VAR_8) {
  VAR_9 += (*VAR_7) * VAR_4;
  VAR_9 = FUNC_0 (VAR_9, 11) * VAR_0;
  VAR_7++;
 }
 VAR_9 ^= VAR_9 >> 15;
 VAR_9 *= VAR_1;
 VAR_9 ^= VAR_9 >> 13;
 VAR_9 *= VAR_2;
 VAR_9 ^= VAR_9 >> 16;
 return VAR_9;
}
