
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int const* new_cipher; } ;
struct TYPE_6__ {TYPE_1__ tmp; } ;
struct TYPE_7__ {TYPE_2__ s3; } ;
typedef int SSL_CIPHER ;
typedef TYPE_3__ SSL ;



const SSL_CIPHER *FUNC_0(const SSL *VAR_0)
{
    return VAR_0->s3.tmp.new_cipher;
}
