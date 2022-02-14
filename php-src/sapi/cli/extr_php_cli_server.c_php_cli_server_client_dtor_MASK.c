
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file_fd; int content_sender; scalar_t__ content_sender_initialized; int addr_str; int addr; int request; } ;
typedef TYPE_1__ php_cli_server_client ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(php_cli_server_client *VAR_0)
{
 FUNC_3(&VAR_0->request);
 if (VAR_0->file_fd >= 0) {
  FUNC_0(VAR_0->file_fd);
  VAR_0->file_fd = -1;
 }
 FUNC_1(VAR_0->addr, 1);
 FUNC_1(VAR_0->addr_str, 1);
 if (VAR_0->content_sender_initialized) {
  FUNC_2(&VAR_0->content_sender);
 }
}
