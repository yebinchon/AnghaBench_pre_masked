
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_6__ {unsigned int sni_cert_count; TYPE_1__* sni_certs; } ;
typedef TYPE_3__ php_openssl_netstream_data_t ;
struct TYPE_4__ {int ctx; int name; } ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,int ) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_3, int *VAR_4, void *VAR_5)
{
 php_stream *VAR_6;
 php_openssl_netstream_data_t *VAR_7;
 unsigned VAR_8;
 const char *VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_2);

 if (!VAR_9) {
  return VAR_0;
 }

 VAR_6 = (php_stream*)FUNC_0(VAR_3, FUNC_3());
 VAR_7 = (php_openssl_netstream_data_t*)VAR_6->abstract;

 if (!(VAR_7->sni_cert_count && VAR_7->sni_certs)) {
  return VAR_0;
 }

 for (VAR_8=0; VAR_8 < VAR_7->sni_cert_count; VAR_8++) {
  if (FUNC_4(VAR_9, VAR_7->sni_certs[VAR_8].name)) {
   FUNC_2(VAR_3, VAR_7->sni_certs[VAR_8].ctx);
   return VAR_1;
  }
 }

 return VAR_0;
}
