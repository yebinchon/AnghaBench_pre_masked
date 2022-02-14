
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* send_buff; size_t send_len; int sock; scalar_t__ no_ack; scalar_t__ server_debug; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,size_t) ;

int FUNC_2(libgdbr_t *VAR_0) {
 if (!VAR_0) {
  FUNC_0 ("Initialize libgdbr_t first\n");
  return -1;
 }
 if (VAR_0->server_debug) {
  VAR_0->send_buff[VAR_0->send_len] = '\0';
  FUNC_0 ("putpkt (\"%s\");  %s\n", VAR_0->send_buff,
    VAR_0->no_ack ? "[noack mode]" : "[looking for ack]");
 }
 return FUNC_1 (VAR_0->sock, VAR_0->send_buff, VAR_0->send_len);
}
