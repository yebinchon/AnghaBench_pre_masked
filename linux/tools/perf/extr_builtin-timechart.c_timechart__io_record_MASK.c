
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char**,char*,int ) ;
 char** FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int,char const**) ;
 int FUNC_4 (char const**) ;
 int FUNC_5 () ;
 int FUNC_6 (char const* const) ;
 void* FUNC_7 (char const* const) ;

__attribute__((used)) static int FUNC_8(int VAR_1, const char **VAR_2)
{
 unsigned int VAR_3, VAR_4;
 const char **VAR_5;
 const char **VAR_6;
 char *VAR_7 = ((void*)0);

 const char * const VAR_8[] = {
  "record", "-a", "-R", "-c", "1",
 };
 unsigned int VAR_9 = FUNC_0(VAR_8);

 const char * const VAR_10[] = {
  "syscalls:sys_enter_read",
  "syscalls:sys_enter_pread64",
  "syscalls:sys_enter_readv",
  "syscalls:sys_enter_preadv",
  "syscalls:sys_enter_write",
  "syscalls:sys_enter_pwrite64",
  "syscalls:sys_enter_writev",
  "syscalls:sys_enter_pwritev",
  "syscalls:sys_enter_sync",
  "syscalls:sys_enter_sync_file_range",
  "syscalls:sys_enter_fsync",
  "syscalls:sys_enter_msync",

  "syscalls:sys_exit_read",
  "syscalls:sys_exit_pread64",
  "syscalls:sys_exit_readv",
  "syscalls:sys_exit_preadv",
  "syscalls:sys_exit_write",
  "syscalls:sys_exit_pwrite64",
  "syscalls:sys_exit_writev",
  "syscalls:sys_exit_pwritev",
  "syscalls:sys_exit_sync",
  "syscalls:sys_exit_sync_file_range",
  "syscalls:sys_exit_fsync",
  "syscalls:sys_exit_msync",
 };
 unsigned int VAR_11 = FUNC_0(VAR_10);

 const char * const VAR_12[] = {
  "syscalls:sys_enter_recvfrom",
  "syscalls:sys_enter_recvmmsg",
  "syscalls:sys_enter_recvmsg",
  "syscalls:sys_enter_sendto",
  "syscalls:sys_enter_sendmsg",
  "syscalls:sys_enter_sendmmsg",

  "syscalls:sys_exit_recvfrom",
  "syscalls:sys_exit_recvmmsg",
  "syscalls:sys_exit_recvmsg",
  "syscalls:sys_exit_sendto",
  "syscalls:sys_exit_sendmsg",
  "syscalls:sys_exit_sendmmsg",
 };
 unsigned int VAR_13 = FUNC_0(VAR_12);

 const char * const VAR_14[] = {
  "syscalls:sys_enter_epoll_pwait",
  "syscalls:sys_enter_epoll_wait",
  "syscalls:sys_enter_poll",
  "syscalls:sys_enter_ppoll",
  "syscalls:sys_enter_pselect6",
  "syscalls:sys_enter_select",

  "syscalls:sys_exit_epoll_pwait",
  "syscalls:sys_exit_epoll_wait",
  "syscalls:sys_exit_poll",
  "syscalls:sys_exit_ppoll",
  "syscalls:sys_exit_pselect6",
  "syscalls:sys_exit_select",
 };
 unsigned int VAR_15 = FUNC_0(VAR_14);

 VAR_3 = VAR_9 +
  VAR_11 * 4 +
  VAR_13 * 4 +
  VAR_15 * 4 +
  VAR_1;
 VAR_5 = FUNC_2(VAR_3 + 1, sizeof(char *));

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 if (FUNC_1(&VAR_7, "common_pid != %d", FUNC_5()) < 0) {
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 VAR_6 = VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_9; VAR_4++)
  *VAR_6++ = FUNC_7(VAR_8[VAR_4]);

 for (VAR_4 = 0; VAR_4 < VAR_11; VAR_4++) {
  if (!FUNC_6(VAR_10[VAR_4])) {
   VAR_3 -= 4;
   continue;
  }

  *VAR_6++ = "-e";
  *VAR_6++ = FUNC_7(VAR_10[VAR_4]);
  *VAR_6++ = "--filter";
  *VAR_6++ = VAR_7;
 }
 for (VAR_4 = 0; VAR_4 < VAR_13; VAR_4++) {
  if (!FUNC_6(VAR_12[VAR_4])) {
   VAR_3 -= 4;
   continue;
  }

  *VAR_6++ = "-e";
  *VAR_6++ = FUNC_7(VAR_12[VAR_4]);
  *VAR_6++ = "--filter";
  *VAR_6++ = VAR_7;
 }
 for (VAR_4 = 0; VAR_4 < VAR_15; VAR_4++) {
  if (!FUNC_6(VAR_14[VAR_4])) {
   VAR_3 -= 4;
   continue;
  }

  *VAR_6++ = "-e";
  *VAR_6++ = FUNC_7(VAR_14[VAR_4]);
  *VAR_6++ = "--filter";
  *VAR_6++ = VAR_7;
 }

 for (VAR_4 = 0; VAR_4 < (unsigned int)VAR_1; VAR_4++)
  *VAR_6++ = VAR_2[VAR_4];

 return FUNC_3(VAR_3, VAR_5);
}
