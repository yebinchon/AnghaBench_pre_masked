
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hmac; scalar_t__ cipher; } ;
struct TYPE_3__ {scalar_t__ hmac; scalar_t__ cipher; } ;
struct key_ctx_bi {TYPE_2__ decrypt; TYPE_1__ encrypt; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct key_ctx_bi *VAR_0)
{
    return VAR_0->encrypt.cipher || VAR_0->encrypt.hmac || VAR_0->decrypt.cipher || VAR_0->decrypt.hmac;
}
