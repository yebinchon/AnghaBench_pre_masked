
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ content; int headers_original_case; int headers; scalar_t__ query_string; scalar_t__ path_info; scalar_t__ path_translated; scalar_t__ vpath; scalar_t__ request_uri; } ;
typedef TYPE_1__ php_cli_server_request ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(php_cli_server_request *VAR_0)
{
 if (VAR_0->request_uri) {
  FUNC_0(VAR_0->request_uri, 1);
 }
 if (VAR_0->vpath) {
  FUNC_0(VAR_0->vpath, 1);
 }
 if (VAR_0->path_translated) {
  FUNC_0(VAR_0->path_translated, 1);
 }
 if (VAR_0->path_info) {
  FUNC_0(VAR_0->path_info, 1);
 }
 if (VAR_0->query_string) {
  FUNC_0(VAR_0->query_string, 1);
 }
 FUNC_1(&VAR_0->headers);
 FUNC_1(&VAR_0->headers_original_case);
 if (VAR_0->content) {
  FUNC_0(VAR_0->content, 1);
 }
}
