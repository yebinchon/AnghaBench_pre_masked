
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cEnv_t {struct cEnv_t* TRIPLET; struct cEnv_t* SHDR; struct cEnv_t* LDFLAGS; struct cEnv_t* CFLAGS; struct cEnv_t* CC; struct cEnv_t* SFLIBPATH; } ;


 int FUNC_0 (struct cEnv_t*) ;

__attribute__((used)) static void FUNC_1(struct cEnv_t *VAR_0) {
 if (VAR_0) {
  FUNC_0 (VAR_0->SFLIBPATH);
  FUNC_0 (VAR_0->CC);
  FUNC_0 (VAR_0->CFLAGS);
  FUNC_0 (VAR_0->LDFLAGS);
  FUNC_0 (VAR_0->SHDR);
  FUNC_0 (VAR_0->TRIPLET);
 }
 FUNC_0 (VAR_0);
}
