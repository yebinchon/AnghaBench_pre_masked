
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int content_length; TYPE_3__* data; } ;
typedef TYPE_2__ php_http_parser ;
struct TYPE_5__ {scalar_t__ content_len; scalar_t__ content; } ;
struct TYPE_7__ {TYPE_1__ request; } ;
typedef TYPE_3__ php_cli_server_client ;


 int FUNC_0 (scalar_t__,char const*,size_t) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(php_http_parser *VAR_0, const char *VAR_1, size_t VAR_2)
{
 php_cli_server_client *VAR_3 = VAR_0->data;
 if (!VAR_3->request.content) {
  VAR_3->request.content = FUNC_1(VAR_0->content_length, 1);
  VAR_3->request.content_len = 0;
 }
 VAR_3->request.content = FUNC_2(VAR_3->request.content, VAR_3->request.content_len + VAR_2, 1);
 FUNC_0(VAR_3->request.content + VAR_3->request.content_len, VAR_1, VAR_2);
 VAR_3->request.content_len += VAR_2;
 return 0;
}
