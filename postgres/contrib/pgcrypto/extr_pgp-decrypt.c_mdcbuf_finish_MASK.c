
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct MDCBufData {int eof; int* mdc_buf; TYPE_1__* ctx; } ;
struct TYPE_2__ {int mdc_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct MDCBufData *VAR_1)
{
 uint8 VAR_2[20];
 int VAR_3;

 VAR_1->eof = 1;

 if (VAR_1->mdc_buf[0] != 0xD3 || VAR_1->mdc_buf[1] != 0x14)
 {
  FUNC_1("mdcbuf_finish: bad MDC pkt hdr");
  return VAR_0;
 }
 FUNC_3(VAR_1->ctx->mdc_ctx, VAR_1->mdc_buf, 2);
 FUNC_2(VAR_1->ctx->mdc_ctx, VAR_2);
 VAR_3 = FUNC_0(VAR_2, VAR_1->mdc_buf + 2, 20);
 FUNC_4(VAR_2, 0, 20);
 if (VAR_3)
 {
  FUNC_1("mdcbuf_finish: MDC does not match");
  VAR_3 = VAR_0;
 }
 return VAR_3;
}
