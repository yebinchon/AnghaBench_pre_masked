
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int php_socket_t ;
struct TYPE_3__ {int file_fd; scalar_t__ content_sender_initialized; int request; scalar_t__ post_read_offset; scalar_t__ current_header_value_len; int * current_header_value; scalar_t__ current_header_name_allocated; scalar_t__ current_header_name_len; int * current_header_name; int last_header_element; scalar_t__ request_read; int parser; int addr_str_len; int addr_str; int addr_len; struct sockaddr* addr; int sock; int * server; } ;
typedef TYPE_1__ php_cli_server_client ;
typedef int php_cli_server ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sockaddr*,int ,int **,int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(php_cli_server_client *VAR_4, php_cli_server *VAR_5, php_socket_t VAR_6, struct sockaddr *VAR_7, socklen_t VAR_8)
{
 VAR_4->server = VAR_5;
 VAR_4->sock = VAR_6;
 VAR_4->addr = VAR_7;
 VAR_4->addr_len = VAR_8;
 {
  zend_string *VAR_9 = 0;

  FUNC_5(VAR_7, VAR_8, &VAR_9, ((void*)0), 0);
  VAR_4->addr_str = FUNC_2(FUNC_1(VAR_9), FUNC_0(VAR_9), 1);
  VAR_4->addr_str_len = FUNC_0(VAR_9);
  FUNC_6(VAR_9, 0);
 }
 FUNC_4(&VAR_4->parser, VAR_2);
 VAR_4->request_read = 0;

 VAR_4->last_header_element = VAR_1;
 VAR_4->current_header_name = ((void*)0);
 VAR_4->current_header_name_len = 0;
 VAR_4->current_header_name_allocated = 0;
 VAR_4->current_header_value = ((void*)0);
 VAR_4->current_header_value_len = 0;

 VAR_4->post_read_offset = 0;
 if (VAR_0 == FUNC_3(&VAR_4->request)) {
  return VAR_0;
 }
 VAR_4->content_sender_initialized = 0;
 VAR_4->file_fd = -1;
 return VAR_3;
}
