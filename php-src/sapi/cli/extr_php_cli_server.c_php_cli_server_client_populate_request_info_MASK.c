
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* content_type; int * auth_digest; int auth_password; int auth_user; int content_length; int query_string; int path_translated; int request_uri; int proto_num; int request_method; } ;
typedef TYPE_2__ sapi_request_info ;
struct TYPE_6__ {int headers; int content_len; int query_string; int path_translated; int request_uri; int protocol_version; int request_method; } ;
struct TYPE_8__ {TYPE_1__ request; } ;
typedef TYPE_3__ php_cli_server_client ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(const php_cli_server_client *VAR_0, sapi_request_info *VAR_1)
{
 char *VAR_2;

 VAR_1->request_method = FUNC_0(VAR_0->request.request_method);
 VAR_1->proto_num = VAR_0->request.protocol_version;
 VAR_1->request_uri = VAR_0->request.request_uri;
 VAR_1->path_translated = VAR_0->request.path_translated;
 VAR_1->query_string = VAR_0->request.query_string;
 VAR_1->content_length = VAR_0->request.content_len;
 VAR_1->auth_user = VAR_1->auth_password = *(VAR_1->auth_digest = ((void*)0));
 if (((void*)0) != (VAR_2 = FUNC_1(&VAR_0->request.headers, "content-type", sizeof("content-type")-1))) {
  VAR_1->content_type = VAR_2;
 }
}
