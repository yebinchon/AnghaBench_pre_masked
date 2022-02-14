
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;


struct TYPE_23__ {int s; int member_0; } ;
typedef TYPE_3__ smart_str ;
struct TYPE_20__ {int buffer; } ;
struct TYPE_21__ {int st_size; } ;
struct TYPE_22__ {char* path_translated; int path_translated_len; TYPE_1__ sb; int protocol_version; int ext_len; int ext; } ;
struct TYPE_24__ {int content_sender_initialized; int file_fd; int sock; TYPE_13__ content_sender; TYPE_2__ request; } ;
typedef TYPE_4__ php_cli_server_client ;
typedef int php_cli_server_chunk ;
struct TYPE_25__ {int poller; } ;
typedef TYPE_5__ php_cli_server ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int,int) ;
 char* FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_13__*) ;
 int FUNC_9 (TYPE_4__*,int,int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (TYPE_5__*,TYPE_4__*,int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (TYPE_3__*,int ,int) ;
 int FUNC_14 (TYPE_3__*,char*,int,int) ;
 int FUNC_15 (TYPE_3__*,char const*,int) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_19(php_cli_server *VAR_4, php_cli_server_client *VAR_5)
{
 int VAR_6;
 int VAR_7 = 200;

 if (VAR_5->request.path_translated && FUNC_17(VAR_5->request.path_translated) != VAR_5->request.path_translated_len) {

  return FUNC_11(VAR_4, VAR_5, 400);
 }
 VAR_6 = VAR_5->request.path_translated ? FUNC_5(VAR_5->request.path_translated, VAR_1): -1;

 if (VAR_6 < 0) {
  return FUNC_11(VAR_4, VAR_5, 404);
 }

 FUNC_8(&VAR_5->content_sender);
 VAR_5->content_sender_initialized = 1;
 VAR_5->file_fd = VAR_6;

 {
  php_cli_server_chunk *VAR_8;
  smart_str VAR_9 = { 0 };
  const char *VAR_10 = FUNC_4(VAR_4, VAR_5->request.ext, VAR_5->request.ext_len);

  FUNC_3(&VAR_9, VAR_5->request.protocol_version, VAR_7, 1);
  if (!VAR_9.s) {

   FUNC_9(VAR_5, 500, ((void*)0));
   return VAR_0;
  }
  FUNC_2(&VAR_9, VAR_5, 1);
  if (VAR_10) {
   FUNC_14(&VAR_9, "Content-Type: ", sizeof("Content-Type: ") - 1, 1);
   FUNC_15(&VAR_9, VAR_10, 1);
   if (FUNC_18(VAR_10, "text/", 5) == 0) {
    FUNC_15(&VAR_9, "; charset=UTF-8", 1);
   }
   FUNC_14(&VAR_9, "\r\n", 2, 1);
  }
  FUNC_15(&VAR_9, "Content-Length: ", 1);
  FUNC_13(&VAR_9, VAR_5->request.sb.st_size, 1);
  FUNC_14(&VAR_9, "\r\n", 2, 1);
  FUNC_14(&VAR_9, "\r\n", 2, 1);
  VAR_8 = FUNC_7(VAR_9.s, FUNC_1(VAR_9.s), FUNC_0(VAR_9.s));
  if (!VAR_8) {
   FUNC_16(&VAR_9, 1);
   FUNC_9(VAR_5, 500, ((void*)0));
   return VAR_0;
  }
  FUNC_6(&VAR_5->content_sender.buffer, VAR_8);
 }
 FUNC_9(VAR_5, 200, ((void*)0));
 FUNC_10(&VAR_4->poller, VAR_2, VAR_5->sock);
 return VAR_3;
}
