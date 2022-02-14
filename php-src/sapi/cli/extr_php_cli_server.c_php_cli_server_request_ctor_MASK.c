
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ext_len; int * ext; scalar_t__ content_len; int * content; int headers_original_case; int headers; scalar_t__ query_string_len; int * query_string; scalar_t__ path_info_len; int * path_info; scalar_t__ path_translated_len; int * path_translated; scalar_t__ vpath_len; int * vpath; scalar_t__ request_uri_len; int * request_uri; scalar_t__ protocol_version; } ;
typedef TYPE_1__ php_cli_server_request ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_1(php_cli_server_request *VAR_2)
{
 VAR_2->protocol_version = 0;
 VAR_2->request_uri = ((void*)0);
 VAR_2->request_uri_len = 0;
 VAR_2->vpath = ((void*)0);
 VAR_2->vpath_len = 0;
 VAR_2->path_translated = ((void*)0);
 VAR_2->path_translated_len = 0;
 VAR_2->path_info = ((void*)0);
 VAR_2->path_info_len = 0;
 VAR_2->query_string = ((void*)0);
 VAR_2->query_string_len = 0;
 FUNC_0(&VAR_2->headers, 0, ((void*)0), VAR_1, 1);
 FUNC_0(&VAR_2->headers_original_case, 0, ((void*)0), ((void*)0), 1);
 VAR_2->content = ((void*)0);
 VAR_2->content_len = 0;
 VAR_2->ext = ((void*)0);
 VAR_2->ext_len = 0;
 return VAR_0;
}
