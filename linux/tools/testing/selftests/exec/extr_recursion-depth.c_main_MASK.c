
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int *,char*,char*,int,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int ,scalar_t__) ;

int FUNC_8(void)
{
 if (FUNC_6(VAR_0) == -1) {
  if (VAR_8 == VAR_2 || VAR_8 == VAR_3) {
   FUNC_3(VAR_9, "error: unshare, errno %d\n", VAR_8);
   return 4;
  }
  FUNC_3(VAR_9, "error: unshare, errno %d\n", VAR_8);
  return 1;
 }
 if (FUNC_4(((void*)0), "/", ((void*)0), VAR_5|VAR_6, ((void*)0)) == -1) {
  FUNC_3(VAR_9, "error: mount '/', errno %d\n", VAR_8);
  return 1;
 }

 if (FUNC_4(((void*)0), "/tmp", "ramfs", 0, ((void*)0)) == -1) {
  FUNC_3(VAR_9, "error: mount ramfs, errno %d\n", VAR_8);
  return 1;
 }



 int VAR_10 = FUNC_1("/tmp/1", 0700);
 if (VAR_10 == -1) {
  FUNC_3(VAR_9, "error: creat, errno %d\n", VAR_8);
  return 1;
 }

 if (FUNC_7(VAR_10, "#!" "/tmp/1" "\n", FUNC_5("#!" "/tmp/1" "\n")) != FUNC_5("#!" "/tmp/1" "\n")) {
  FUNC_3(VAR_9, "error: write, errno %d\n", VAR_8);
  return 1;
 }
 FUNC_0(VAR_10);

 int VAR_11 = FUNC_2("/tmp/1", ((void*)0), ((void*)0));
 if (VAR_11 == -1 && VAR_8 == VAR_1) {
  return 0;
 }
 FUNC_3(VAR_9, "error: execve, rv %d, errno %ld\n", VAR_11, VAR_8);
 return 1;
}
