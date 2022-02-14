
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int,char*,int ,char*,int ) ;
 int FUNC_3 (int *,char*,char*,int,char*) ;
 int FUNC_4 (int ,char*,int,int) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;

int FUNC_6(void)
{
 int VAR_11;

 if (FUNC_5(VAR_2) == -1) {
  if (VAR_9 == VAR_3 || VAR_9 == VAR_4) {
   FUNC_1(VAR_10, "error: unshare, errno %ld\n", VAR_9);
   return 4;
  }
  FUNC_1(VAR_10, "error: unshare, errno %ld\n", VAR_9);
  return 1;
 }
 if (FUNC_3(((void*)0), "/", ((void*)0), VAR_5|VAR_6, ((void*)0)) == -1) {
  FUNC_1(VAR_10, "error: mount '/', errno %ld\n", VAR_9);
  return 1;
 }


 if (FUNC_3(((void*)0), "/tmp", "tmpfs", 0, "nr_inodes=3") == -1) {
  FUNC_1(VAR_10, "error: mount tmpfs, errno %ld\n", VAR_9);
  return 1;
 }

 VAR_11 = FUNC_4(VAR_1, "/tmp", VAR_8|VAR_7, 0600);
 if (VAR_11 == -1) {
  FUNC_1(VAR_10, "error: open 1, errno %ld\n", VAR_9);
  return 1;
 }
 if (FUNC_2(VAR_11, "", VAR_1, "/tmp/1", VAR_0) == -1) {
  FUNC_1(VAR_10, "error: linkat, errno %ld\n", VAR_9);
  return 1;
 }
 FUNC_0(VAR_11);

 VAR_11 = FUNC_4(VAR_1, "/tmp", VAR_8|VAR_7, 0600);
 if (VAR_11 == -1) {
  FUNC_1(VAR_10, "error: open 2, errno %ld\n", VAR_9);
  return 1;
 }

 return 0;
}
