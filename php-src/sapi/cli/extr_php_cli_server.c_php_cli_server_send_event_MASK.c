
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int first; } ;
struct TYPE_9__ {TYPE_1__ buffer; } ;
struct TYPE_8__ {int file_fd; TYPE_4__ content_sender; int sock; scalar_t__ content_sender_initialized; } ;
typedef TYPE_2__ php_cli_server_client ;
typedef int php_cli_server ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,size_t*) ;
 int FUNC_3 (TYPE_4__*,int ,size_t*) ;

__attribute__((used)) static int FUNC_4(php_cli_server *VAR_3, php_cli_server_client *VAR_4)
{
 if (VAR_4->content_sender_initialized) {
  if (VAR_4->file_fd >= 0 && !VAR_4->content_sender.buffer.first) {
   size_t VAR_5;
   if (FUNC_2(&VAR_4->content_sender, VAR_4->file_fd, &VAR_5)) {
    FUNC_1(VAR_3, VAR_4);
    return VAR_0;
   }
   if (VAR_5 == 0) {
    FUNC_0(VAR_4->file_fd);
    VAR_4->file_fd = -1;
   }
  }
  {
   size_t VAR_6;
   int VAR_7 = FUNC_3(&VAR_4->content_sender, VAR_4->sock, &VAR_6);
   if (VAR_7 && VAR_7 != VAR_1) {
    FUNC_1(VAR_3, VAR_4);
    return VAR_0;
   }
  }
  if (!VAR_4->content_sender.buffer.first && VAR_4->file_fd < 0) {
   FUNC_1(VAR_3, VAR_4);
  }
 }
 return VAR_2;
}
