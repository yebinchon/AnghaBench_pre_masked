
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ion_handle_data {unsigned long arg; int handle; int member_0; int cmd; int fd; } ;
struct ion_flush_data {int length; scalar_t__ offset; int vaddr; int handle; int member_0; } ;
struct ion_fd_data {unsigned long arg; int handle; int member_0; int cmd; int fd; } ;
struct ion_custom_data {unsigned long arg; int handle; int member_0; int cmd; int fd; } ;
struct TYPE_3__ {int len; int addr; int fd; } ;
typedef TYPE_1__ VisionBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct ion_handle_data*) ;
 int VAR_5 ;

void FUNC_2(const VisionBuf* VAR_6, int VAR_7) {
  int VAR_8;

  struct ion_fd_data VAR_9 = {0};
  VAR_9.fd = VAR_6->fd;
  VAR_8 = FUNC_1(VAR_5, VAR_3, &VAR_9);
  FUNC_0(VAR_8 == 0);

  struct ion_flush_data VAR_10 = {0};
  VAR_10.handle = VAR_9.handle;
  VAR_10.vaddr = VAR_6->addr;
  VAR_10.offset = 0;
  VAR_10.length = VAR_6->len;





  struct ion_custom_data VAR_11 = {0};

  switch (VAR_7) {
  case 129:
    VAR_11.cmd = VAR_4;
    break;
  case 128:
    VAR_11.cmd = VAR_0;
    break;
  default:
    FUNC_0(0);
  }

  VAR_11.arg = (unsigned long)&VAR_10;
  VAR_8 = FUNC_1(VAR_5, VAR_1, &VAR_11);
  FUNC_0(VAR_8 == 0);

  struct ion_handle_data VAR_12 = {0};
  VAR_12.handle = VAR_9.handle;
  VAR_8 = FUNC_1(VAR_5, VAR_2, &VAR_12);
  FUNC_0(VAR_8 == 0);
}
