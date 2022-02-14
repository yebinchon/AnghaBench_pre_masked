
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kexts_initialized; int kexts; } ;
typedef int RList ;
typedef TYPE_1__ RKernelCacheObj ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(RKernelCacheObj *VAR_0) {
 if (VAR_0->kexts_initialized) {
  return;
 }
 VAR_0->kexts_initialized = 1;

 RList *VAR_1 = FUNC_1 (VAR_0);

 if (VAR_1 && !FUNC_4 (VAR_1)) {
  FUNC_3 (VAR_1);
  VAR_1 = ((void*)0);
 }

 if (!VAR_1) {
  VAR_1 = FUNC_0 (VAR_0);
 }

 VAR_0->kexts = FUNC_2 (VAR_1);
}
