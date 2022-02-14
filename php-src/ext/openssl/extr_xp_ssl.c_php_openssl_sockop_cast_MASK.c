
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t chunk_size; int readpos; int writepos; int mode; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
typedef int php_socket_t ;
struct TYPE_6__ {int socket; } ;
struct TYPE_8__ {TYPE_1__ s; int ssl_active; int ssl_handle; } ;
typedef TYPE_3__ php_openssl_netstream_data_t ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_3(php_stream *VAR_2, int VAR_3, void **VAR_4)
{
 php_openssl_netstream_data_t *VAR_5 = (php_openssl_netstream_data_t*)VAR_2->abstract;

 switch(VAR_3) {
  case 128:
   if (VAR_5->ssl_active) {
    return VAR_0;
   }
   if (VAR_4) {
    *VAR_4 = FUNC_1(VAR_5->s.socket, VAR_2->mode);
    if (*VAR_4) {
     return VAR_1;
    }
    return VAR_0;
   }
   return VAR_1;

  case 130:
   if (VAR_4) {
    size_t VAR_6;
    if (VAR_2->writepos == VAR_2->readpos
     && VAR_5->ssl_active
     && (VAR_6 = (size_t)FUNC_0(VAR_5->ssl_handle)) > 0) {
      FUNC_2(VAR_2, VAR_6 < VAR_2->chunk_size
       ? VAR_6
       : VAR_2->chunk_size);
    }

    *(php_socket_t *)VAR_4 = VAR_5->s.socket;
   }
   return VAR_1;

  case 131:
  case 129:
   if (VAR_5->ssl_active) {
    return VAR_0;
   }
   if (VAR_4) {
    *(php_socket_t *)VAR_4 = VAR_5->s.socket;
   }
   return VAR_1;
  default:
   return VAR_0;
 }
}
