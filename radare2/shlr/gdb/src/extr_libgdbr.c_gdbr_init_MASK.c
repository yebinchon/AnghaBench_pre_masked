
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int extended_mode; int pkt_sz; } ;
struct TYPE_6__ {int no_ack; int remote_file_fd; int is_server; int send_max; char* send_buff; int page_size; int num_retries; int read_max; char* read_buff; int data_max; int remote_type; scalar_t__ data; scalar_t__ data_len; scalar_t__ connected; int last_code; int gdbr_lock; int sock; scalar_t__ send_len; TYPE_1__ stub_features; } ;
typedef TYPE_2__ libgdbr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

int FUNC_5(libgdbr_t *VAR_2, bool VAR_3) {
 if (!VAR_2) {
  return -1;
 }
 FUNC_2 (VAR_2, 0, sizeof (libgdbr_t));
 VAR_2->no_ack = 0;
 VAR_2->stub_features.extended_mode = -1;
 VAR_2->stub_features.pkt_sz = 64;
 VAR_2->remote_file_fd = -1;
 VAR_2->is_server = VAR_3;
 VAR_2->send_max = 2500;
 VAR_2->send_buff = (char *) FUNC_1 (VAR_2->send_max, 1);
 VAR_2->page_size = 4096;
 VAR_2->num_retries = 40;
 if (!VAR_2->send_buff) {
  return -1;
 }
 VAR_2->send_len = 0;
 VAR_2->read_max = 4096;
 VAR_2->read_buff = (char *) FUNC_1 (VAR_2->read_max, 1);
 if (!VAR_2->read_buff) {
  FUNC_0 (VAR_2->send_buff);
  return -1;
 }
 VAR_2->sock = FUNC_3 (0);
 VAR_2->gdbr_lock = FUNC_4 (1);
 VAR_2->last_code = VAR_1;
 VAR_2->connected = 0;
 VAR_2->data_len = 0;
 VAR_2->data_max = 4096;
 VAR_2->data = FUNC_1 (VAR_2->data_max, 1);
 if (!VAR_2->data) {
  FUNC_0 (VAR_2->send_buff);
  FUNC_0 (VAR_2->read_buff);
  return -1;
 }
 VAR_2->remote_type = VAR_0;
 return 0;
}
