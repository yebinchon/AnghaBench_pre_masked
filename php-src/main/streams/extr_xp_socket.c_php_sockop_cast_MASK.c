
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
typedef int php_socket_t ;
struct TYPE_5__ {int socket; } ;
typedef TYPE_2__ php_netstream_data_t ;
typedef int FILE ;


 int VAR_0 ;




 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(php_stream *VAR_2, int VAR_3, void **VAR_4)
{
 php_netstream_data_t *VAR_5 = (php_netstream_data_t*)VAR_2->abstract;

 if (!VAR_5) {
  return VAR_0;
 }

 switch(VAR_3) {
  case 128:
   if (VAR_4) {
    *(FILE**)VAR_4 = FUNC_0(VAR_5->socket, VAR_2->mode);
    if (*VAR_4)
     return VAR_1;
    return VAR_0;
   }
   return VAR_1;
  case 130:
  case 131:
  case 129:
   if (VAR_4)
    *(php_socket_t *)VAR_4 = VAR_5->socket;
   return VAR_1;
  default:
   return VAR_0;
 }
}
