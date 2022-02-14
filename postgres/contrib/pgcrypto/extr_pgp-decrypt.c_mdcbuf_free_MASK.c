
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MDCBufData {TYPE_1__* ctx; } ;
struct TYPE_2__ {int * mdc_ctx; } ;


 int FUNC_0 (struct MDCBufData*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct MDCBufData*,int ,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct MDCBufData *VAR_1 = VAR_0;

 FUNC_1(VAR_1->ctx->mdc_ctx);
 VAR_1->ctx->mdc_ctx = ((void*)0);
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(VAR_1);
}
