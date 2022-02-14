
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct MDCBufData {int avail; TYPE_1__* ctx; int * pos; } ;
struct TYPE_2__ {int mdc_ctx; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct MDCBufData *VAR_0, uint8 *VAR_1, int VAR_2)
{
 uint8 *VAR_3 = VAR_0->pos + VAR_0->avail;

 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_1(VAR_0->ctx->mdc_ctx, VAR_1, VAR_2);
 VAR_0->avail += VAR_2;
}
