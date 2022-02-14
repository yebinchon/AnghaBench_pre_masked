
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_4__ {void* d; void* c; void* b; void* a; } ;
typedef TYPE_1__ ranctx ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(ranctx *VAR_0, u64 *VAR_1) {
 int VAR_2;

 VAR_0->a = VAR_1[0];
 VAR_0->b = VAR_1[1];
 VAR_0->c = VAR_1[2];
 VAR_0->d = VAR_1[3];

 for (VAR_2=0; VAR_2 < 30; ++VAR_2)
  (void)FUNC_0(VAR_0);
}
