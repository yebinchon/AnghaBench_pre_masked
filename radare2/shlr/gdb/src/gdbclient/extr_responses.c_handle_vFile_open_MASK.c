
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_len; float* data; int remote_file_fd; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int *,int) ;

int FUNC_3(libgdbr_t *VAR_0) {
 if (VAR_0->data_len < 2 || VAR_0->data[0] != 'F' || VAR_0->data[1] == '-'
     || !FUNC_0 (VAR_0->data[1])) {
  FUNC_1 (VAR_0);
  return -1;
 }
 VAR_0->data[VAR_0->data_len] = '\0';
 if ((VAR_0->remote_file_fd = FUNC_2 (VAR_0->data + 1, ((void*)0), 16)) <= 0) {
  FUNC_1 (VAR_0);
  return -1;
 }
 return FUNC_1 (VAR_0);
}
