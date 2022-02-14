
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ abstract; } ;
typedef TYPE_3__ php_stream ;
struct TYPE_9__ {int socket; } ;
struct TYPE_8__ {TYPE_4__* data; } ;
struct TYPE_11__ {unsigned int sni_cert_count; struct TYPE_11__* reneg; struct TYPE_11__* url_name; struct TYPE_11__* sni_certs; struct TYPE_11__* name; int * ctx; TYPE_2__ s; TYPE_1__ alpn_ctx; int * ssl_handle; scalar_t__ ssl_active; } ;
typedef TYPE_4__ php_openssl_netstream_data_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (void*,int ,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (void*,int ) ;

__attribute__((used)) static int FUNC_9(php_stream *VAR_4, int VAR_5)
{
 php_openssl_netstream_data_t *VAR_6 = (php_openssl_netstream_data_t*)VAR_4->abstract;



 unsigned VAR_7;

 if (VAR_5) {
  if (VAR_6->ssl_active) {
   FUNC_2(VAR_6->ssl_handle);
   VAR_6->ssl_active = 0;
  }
  if (VAR_6->ssl_handle) {
   FUNC_1(VAR_6->ssl_handle);
   VAR_6->ssl_handle = ((void*)0);
  }
  if (VAR_6->ctx) {
   FUNC_0(VAR_6->ctx);
   VAR_6->ctx = ((void*)0);
  }
  if (VAR_6->s.socket != VAR_3) {
   FUNC_3(VAR_6->s.socket);
   VAR_6->s.socket = VAR_3;
  }
 }

 if (VAR_6->sni_certs) {
  for (VAR_7 = 0; VAR_7 < VAR_6->sni_cert_count; VAR_7++) {
   if (VAR_6->sni_certs[VAR_7].ctx) {
    FUNC_0(VAR_6->sni_certs[VAR_7].ctx);
    FUNC_4(VAR_6->sni_certs[VAR_7].name, FUNC_7(VAR_4));
   }
  }
  FUNC_4(VAR_6->sni_certs, FUNC_7(VAR_4));
  VAR_6->sni_certs = ((void*)0);
 }

 if (VAR_6->url_name) {
  FUNC_4(VAR_6->url_name, FUNC_7(VAR_4));
 }

 if (VAR_6->reneg) {
  FUNC_4(VAR_6->reneg, FUNC_7(VAR_4));
 }

 FUNC_4(VAR_6, FUNC_7(VAR_4));

 return 0;
}
