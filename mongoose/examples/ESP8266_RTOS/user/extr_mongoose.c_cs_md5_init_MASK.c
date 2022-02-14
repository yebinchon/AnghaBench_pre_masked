
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; scalar_t__* bits; } ;
typedef TYPE_1__ cs_md5_ctx ;



void FUNC_0(cs_md5_ctx *VAR_0) {
  VAR_0->buf[0] = 0x67452301;
  VAR_0->buf[1] = 0xefcdab89;
  VAR_0->buf[2] = 0x98badcfe;
  VAR_0->buf[3] = 0x10325476;

  VAR_0->bits[0] = 0;
  VAR_0->bits[1] = 0;
}
