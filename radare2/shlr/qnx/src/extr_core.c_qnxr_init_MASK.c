
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* send_buff; char* read_buff; int registers; scalar_t__ send_len; } ;
typedef TYPE_1__ libqnxr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_1 ;

int FUNC_3 (libqnxr_t *VAR_2) {
 if (!VAR_2) return -1;
 FUNC_2 (VAR_2, 0, sizeof (libqnxr_t));
 VAR_2->send_len = 0;
 VAR_2->send_buff = (char *)FUNC_1 (VAR_0 * 2, 1);
 if (!VAR_2->send_buff)
  return -1;
 VAR_2->read_buff = (char *)FUNC_1 (VAR_0 * 2, 1);
 if (!VAR_2->read_buff) {
  FUNC_0 (VAR_2->send_buff);
  return -1;
 }
 VAR_2->registers = VAR_1;
 return 0;
}
