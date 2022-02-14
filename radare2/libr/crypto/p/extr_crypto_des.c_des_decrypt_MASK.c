
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct des_state {int i; void* buflo; void* bufhi; int * keyhi; int * keylo; } ;


 void* FUNC_0 (int const*) ;
 int FUNC_1 (void**,void**) ;
 int FUNC_2 (void**,void**) ;
 int FUNC_3 (void**,void**,int *,int *) ;
 int FUNC_4 (int *,void*) ;

__attribute__((used)) static int FUNC_5 (struct des_state *VAR_0, const ut8 *VAR_1, ut8 *VAR_2) {
 if (!VAR_0 || !VAR_1 || !VAR_2) {
  return 0;
 }
 VAR_0->buflo = FUNC_0 (VAR_1 + 0);
 VAR_0->bufhi = FUNC_0 (VAR_1 + 4);

 FUNC_1 (&VAR_0->buflo, &VAR_0->bufhi);

 for (VAR_0->i = 0; VAR_0->i < 16; VAR_0->i++) {
    FUNC_3 (&VAR_0->buflo, &VAR_0->bufhi, &VAR_0->keylo[15 - VAR_0->i], &VAR_0->keyhi[15 - VAR_0->i]);
 }


 FUNC_2 (&VAR_0->bufhi, &VAR_0->buflo);

 FUNC_4 (VAR_2 + 0, VAR_0->bufhi);
 FUNC_4 (VAR_2 + 4, VAR_0->buflo);
 return 1;
}
