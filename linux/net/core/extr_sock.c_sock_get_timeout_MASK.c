
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv32 ;
typedef int tv ;
struct old_timeval32 {long member_0; long member_1; } ;
struct __kernel_sock_timeval {long tv_sec; long tv_usec; } ;
struct __kernel_old_timeval {long tv_sec; long tv_usec; } ;
typedef int old_tv ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int FUNC_1(long VAR_4, void *VAR_5, bool VAR_6)
{
 struct __kernel_sock_timeval VAR_7;
 int VAR_8;

 if (VAR_4 == VAR_2) {
  VAR_7.tv_sec = 0;
  VAR_7.tv_usec = 0;
 } else {
  VAR_7.tv_sec = VAR_4 / VAR_1;
  VAR_7.tv_usec = ((VAR_4 % VAR_1) * VAR_3) / VAR_1;
 }

 if (VAR_6 && FUNC_0() && !VAR_0) {
  struct old_timeval32 VAR_9 = { VAR_7.tv_sec, VAR_7.tv_usec };
  *(struct old_timeval32 *)VAR_5 = VAR_9;
  return sizeof(VAR_9);
 }

 if (VAR_6) {
  struct __kernel_old_timeval VAR_10;
  VAR_10.tv_sec = VAR_7.tv_sec;
  VAR_10.tv_usec = VAR_7.tv_usec;
  *(struct __kernel_old_timeval *)VAR_5 = VAR_10;
  VAR_8 = sizeof(VAR_10);
 } else {
  *(struct __kernel_sock_timeval *)VAR_5 = VAR_7;
  VAR_8 = sizeof(VAR_7);
 }

 return VAR_8;
}
