
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tv ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct old_timeval32 {int tv_usec; int tv_sec; } ;
struct msghdr {int msg_flags; } ;
struct __kernel_old_timeval {int tv_usec; int tv_sec; } ;
typedef int incoming ;
typedef int ctv ;
typedef int __u32 ;
struct TYPE_4__ {int incoming; } ;
struct TYPE_3__ {int cmsg_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct msghdr*,int ,int,int,void*) ;
 int FUNC_3 (struct sk_buff*,struct __kernel_old_timeval*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_5, struct msghdr *VAR_6,
     struct sk_buff *VAR_7)
{
 __u32 VAR_8 = FUNC_1(VAR_5)->cmsg_mask;

 if (VAR_8 & VAR_1) {
  int VAR_9 = FUNC_0(VAR_7)->incoming;
  FUNC_2(VAR_6, VAR_4, VAR_1, sizeof(VAR_9),
    &VAR_9);
 }

 if (VAR_8 & VAR_2) {



  struct __kernel_old_timeval VAR_10;
  void *VAR_11;
  int VAR_12;

  FUNC_3(VAR_7, &VAR_10);

  VAR_11 = &VAR_10;
  VAR_12 = sizeof(VAR_10);
  FUNC_2(VAR_6, VAR_4, VAR_2, VAR_12, VAR_11);
 }
}
