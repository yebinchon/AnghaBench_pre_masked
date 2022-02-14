
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int http_major; scalar_t__ http_minor; TYPE_3__* data; } ;
typedef TYPE_2__ php_http_parser ;
struct TYPE_9__ {char* vpath; int vpath_len; char const* ext; int ext_len; scalar_t__ protocol_version; } ;
struct TYPE_8__ {int request_read; TYPE_4__ request; TYPE_1__* server; } ;
typedef TYPE_3__ php_cli_server_client ;
struct TYPE_6__ {int document_root_len; int document_root; } ;


 int FUNC_0 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(php_http_parser *VAR_0)
{
 php_cli_server_client *VAR_1 = VAR_0->data;
 VAR_1->request.protocol_version = VAR_0->http_major * 100 + VAR_0->http_minor;
 FUNC_0(&VAR_1->request, VAR_1->server->document_root, VAR_1->server->document_root_len);
 {
  const char *VAR_2 = VAR_1->request.vpath, *VAR_3 = VAR_2 + VAR_1->request.vpath_len, *VAR_4 = VAR_3;
  VAR_1->request.ext = VAR_3;
  VAR_1->request.ext_len = 0;
  while (VAR_4 > VAR_2) {
   --VAR_4;
   if (*VAR_4 == '.') {
    ++VAR_4;
    VAR_1->request.ext = VAR_4;
    VAR_1->request.ext_len = VAR_3 - VAR_4;
    break;
   }
  }
 }
 VAR_1->request_read = 1;
 return 0;
}
