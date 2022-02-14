
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
struct TYPE_4__ {TYPE_1__ alpn_ctx; } ;
typedef TYPE_2__ php_openssl_netstream_data_t ;
typedef int SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char**,unsigned char*,int ,int ,unsigned char const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_3,
  const unsigned char **VAR_4, unsigned char *VAR_5,
  const unsigned char *VAR_6, unsigned int VAR_7, void *VAR_8)
{
 php_openssl_netstream_data_t *VAR_9 = VAR_8;

 if (FUNC_0((unsigned char **)VAR_4, VAR_5, VAR_9->alpn_ctx.data, VAR_9->alpn_ctx.len, VAR_6, VAR_7) != VAR_0) {
  return VAR_1;
 }

 return VAR_2;
}
