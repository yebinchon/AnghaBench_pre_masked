
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_base64_ctx {void* user_data; int b64_putc; scalar_t__ chunk_size; } ;
typedef int cs_base64_putc_t ;



void FUNC_0(struct cs_base64_ctx *VAR_0, cs_base64_putc_t VAR_1,
                    void *VAR_2) {
  VAR_0->chunk_size = 0;
  VAR_0->b64_putc = VAR_1;
  VAR_0->user_data = VAR_2;
}
