
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kernel_len; scalar_t__ rootfs_len; } ;
struct TYPE_6__ {scalar_t__ file_size; int * file_name; } ;


 int FUNC_0 (char*,...) ;
 TYPE_4__* VAR_0 ;
 int * VAR_1 ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_5;

 if (VAR_1 == ((void*)0)) {
  FUNC_0("no board specified");
  return -1;
 }

 VAR_0 = FUNC_1(VAR_1);
 if (VAR_0 == ((void*)0)) {
  FUNC_0("unknown/unsupported board id \"%s\"", VAR_1);
  return -1;
 }

 if (VAR_2.file_name == ((void*)0)) {
  FUNC_0("no kernel image specified");
  return -1;
 }

 VAR_5 = FUNC_2(&VAR_2);
 if (VAR_5)
  return VAR_5;

 if (VAR_2.file_size > VAR_0->kernel_len) {
  FUNC_0("kernel image is too big");
  return -1;
 }

 if (VAR_4.file_name == ((void*)0)) {
  FUNC_0("no rootfs image specified");
  return -1;
 }

 VAR_5 = FUNC_2(&VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4.file_size > VAR_0->rootfs_len) {
  FUNC_0("rootfs image is too big");
  return -1;
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_0("no output file specified");
  return -1;
 }

 return 0;
}
