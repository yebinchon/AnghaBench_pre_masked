
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zc ;
struct timeval {int tv_sec; unsigned long tv_usec; } ;
struct tcp_zerocopy_receive {int length; int recv_skip_hint; scalar_t__ address; } ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
struct rusage {int ru_nvcsw; TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
struct pollfd {int fd; int events; } ;
typedef int socklen_t ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,struct rusage*) ;
 int FUNC_5 (int,int ,int ,struct tcp_zerocopy_receive*,int*) ;
 int FUNC_6 (struct timeval*,int *) ;
 int FUNC_7 (char*,int) ;
 char* FUNC_8 (int) ;
 void* FUNC_9 (int *,int,int ,int,int,int ) ;
 int FUNC_10 (void*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct pollfd*,int,int) ;
 int FUNC_13 (char*,unsigned long,double,double,double,double,double,double,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,char*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

void *FUNC_16(void *VAR_11)
{
 unsigned long VAR_12 = 0, VAR_13 = 0;
 struct tcp_zerocopy_receive VAR_14;
 unsigned long VAR_15;
 int VAR_16 = VAR_2;
 struct timeval VAR_17, VAR_18;
 char *VAR_19 = ((void*)0);
 void *VAR_20 = ((void*)0);
 double VAR_21;
 struct rusage VAR_22;
 int VAR_23, VAR_24;

 VAR_24 = (int)(unsigned long)VAR_11;

 FUNC_6(&VAR_17, ((void*)0));

 FUNC_2(VAR_24, VAR_0, VAR_3);
 VAR_19 = FUNC_8(VAR_8);
 if (!VAR_19) {
  FUNC_11("malloc");
  goto error;
 }
 if (VAR_10) {
  VAR_20 = FUNC_9(((void*)0), VAR_8, VAR_5, VAR_16, VAR_24, 0);
  if (VAR_20 == (void *)-1)
   VAR_10 = 0;
 }
 while (1) {
  struct pollfd VAR_25 = { .fd = VAR_24, .events = VAR_4, };
  int VAR_26;

  FUNC_12(&VAR_25, 1, 10000);
  if (VAR_10) {
   socklen_t VAR_27 = sizeof(VAR_14);
   int VAR_28;

   VAR_14.address = (__u64)VAR_20;
   VAR_14.length = VAR_8;
   VAR_14.recv_skip_hint = 0;
   VAR_28 = FUNC_5(VAR_24, VAR_1, VAR_7,
      &VAR_14, &VAR_27);
   if (VAR_28 == -1)
    break;

   if (VAR_14.length) {
    FUNC_0(VAR_14.length <= VAR_8);
    VAR_12 += VAR_14.length;
    if (VAR_9)
     FUNC_7(VAR_20, VAR_14.length);
    VAR_13 += VAR_14.length;
   }
   if (VAR_14.recv_skip_hint) {
    FUNC_0(VAR_14.recv_skip_hint <= VAR_8);
    VAR_23 = FUNC_15(VAR_24, VAR_19, VAR_14.recv_skip_hint);
    if (VAR_23 > 0) {
     if (VAR_9)
      FUNC_7(VAR_19, VAR_23);
     VAR_13 += VAR_23;
    }
   }
   continue;
  }
  VAR_26 = 0;
  while (VAR_26 < VAR_8) {
   VAR_23 = FUNC_15(VAR_24, VAR_19 + VAR_26, VAR_8 - VAR_26);
   if (VAR_23 == 0)
    goto end;
   if (VAR_23 < 0)
    break;
   if (VAR_9)
    FUNC_7(VAR_19 + VAR_26, VAR_23);
   VAR_13 += VAR_23;
   VAR_26 += VAR_23;
  }
 }
end:
 FUNC_6(&VAR_18, ((void*)0));
 VAR_15 = (VAR_18 - VAR_17) * 1000000 + VAR_18 - VAR_17;

 VAR_21 = 0;
 if (VAR_15)
  VAR_21 = VAR_13 * 8.0 / (double)VAR_15 / 1000.0;
 FUNC_4(VAR_6, &VAR_22);
 if (VAR_13 > 1024*1024) {
  unsigned long VAR_29;
  unsigned long VAR_30 = VAR_13 >> 20;
  VAR_29 = 1000000*VAR_22.ru_utime.tv_sec + VAR_22.ru_utime.tv_usec +
        1000000*VAR_22.ru_stime.tv_sec + VAR_22.ru_stime.tv_usec;
  FUNC_13("received %lg MB (%lg %% mmap'ed) in %lg s, %lg Gbit\n"
         "  cpu usage user:%lg sys:%lg, %lg usec per MB, %lu c-switches\n",
    VAR_13 / (1024.0 * 1024.0),
    100.0*VAR_12/VAR_13,
    (double)VAR_15 / 1000000.0,
    VAR_21,
    (double)VAR_22.ru_utime.tv_sec + (double)VAR_22.ru_utime.tv_usec / 1000000.0,
    (double)VAR_22.ru_stime.tv_sec + (double)VAR_22.ru_stime.tv_usec / 1000000.0,
    (double)VAR_29/VAR_30,
    VAR_22.ru_nvcsw);
 }
error:
 FUNC_3(VAR_19);
 FUNC_1(VAR_24);
 if (VAR_10)
  FUNC_10(VAR_20, VAR_8);
 FUNC_14(0);
}
