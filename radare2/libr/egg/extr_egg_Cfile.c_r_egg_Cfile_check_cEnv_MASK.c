
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cEnv_t {int TRIPLET; int SHDR; int LDFLAGS; int CFLAGS; int CC; int SFLIBPATH; } ;



__attribute__((used)) static inline bool FUNC_0(struct cEnv_t *VAR_0) {
 return (!VAR_0->SFLIBPATH || !VAR_0->CC || !VAR_0->CFLAGS || !VAR_0->LDFLAGS
  || !VAR_0->SHDR || !VAR_0->TRIPLET);
}
