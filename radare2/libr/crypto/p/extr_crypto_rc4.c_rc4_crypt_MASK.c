
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
struct rc4_state {size_t index1; size_t index2; size_t* perm; } ;


 int FUNC_0 (size_t*,size_t*) ;

__attribute__((used)) static void FUNC_1(struct rc4_state *const VAR_0, const ut8 *VAR_1, ut8 *VAR_2, int VAR_3) {
 int VAR_4;
 ut8 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {

  VAR_0->index1++;
  VAR_0->index2 += VAR_0->perm[VAR_0->index1];

  FUNC_0 (&VAR_0->perm[VAR_0->index1],
      &VAR_0->perm[VAR_0->index2]);

  VAR_5 = VAR_0->perm[VAR_0->index1] + VAR_0->perm[VAR_0->index2];
  VAR_2[VAR_4] = VAR_1[VAR_4] ^ VAR_0->perm[VAR_5];
 }
}
