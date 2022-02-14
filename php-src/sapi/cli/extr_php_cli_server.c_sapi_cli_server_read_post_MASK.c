
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t content; size_t content_len; } ;
struct TYPE_5__ {size_t post_read_offset; TYPE_1__ request; } ;
typedef TYPE_2__ php_cli_server_client ;


 size_t FUNC_0 (size_t,size_t) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,size_t) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_3(char *VAR_1, size_t VAR_2)
{
 php_cli_server_client *VAR_3 = FUNC_1(VAR_0);
 if (VAR_3->request.content) {
  size_t VAR_4 = VAR_3->request.content_len;
  size_t VAR_5 = FUNC_0(VAR_3->post_read_offset + VAR_2, VAR_4) - VAR_3->post_read_offset;
  FUNC_2(VAR_1, VAR_3->request.content + VAR_3->post_read_offset, VAR_5);
  VAR_3->post_read_offset += VAR_5;
  return VAR_5;
 }
 return 0;
}
