
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct ror_state {int* key; int key_size; } ;



__attribute__((used)) static void FUNC_0(struct ror_state *const VAR_0, const ut8 *VAR_1, ut8 *VAR_2, int VAR_3) {
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  ut8 VAR_5 = VAR_0->key[VAR_4 % VAR_0->key_size] & 7;
  ut8 VAR_6 = VAR_1[VAR_4];
  VAR_2[VAR_4] = (VAR_6 >> VAR_5) | (VAR_6 << ((8 - VAR_5) & 7));
 }
}
