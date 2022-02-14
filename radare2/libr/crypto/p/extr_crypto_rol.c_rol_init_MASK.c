
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct rol_state {int key_size; int * key; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct rol_state *const VAR_1, const ut8 *VAR_2, int VAR_3) {
 if (!VAR_1 || !VAR_2 || VAR_3 < 1 || VAR_3 > VAR_0) {
  return 0;
 }
 int VAR_4;
 VAR_1->key_size = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_1->key[VAR_4] = VAR_2[VAR_4];
 }
 return 1;
}
