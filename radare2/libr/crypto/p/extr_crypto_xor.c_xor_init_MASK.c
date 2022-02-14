
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct xor_state {int key_size; int key; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static bool FUNC_2(struct xor_state *const VAR_0, const ut8 *VAR_1, int VAR_2) {
 if (!VAR_0 || !VAR_1 || VAR_2 < 1) {
  return 0;
 }
 VAR_0->key_size = VAR_2;
 VAR_0->key = FUNC_0 (VAR_2);
 FUNC_1 (VAR_0->key, VAR_1, VAR_2);
 return 1;
}
