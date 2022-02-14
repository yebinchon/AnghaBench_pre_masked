
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sockcm_cookie {int mark; int tsflags; int transmit_time; } ;
struct sock {int dummy; } ;
struct msghdr {int dummy; } ;
struct cmsghdr {int cmsg_type; int cmsg_len; } ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;


 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sock*,int ) ;
 TYPE_1__* FUNC_5 (struct sock*) ;

int FUNC_6(struct sock *VAR_5, struct msghdr *VAR_6, struct cmsghdr *VAR_7,
       struct sockcm_cookie *VAR_8)
{
 u32 VAR_9;

 switch (VAR_7->cmsg_type) {
 case 129:
  if (!FUNC_3(FUNC_5(VAR_5)->user_ns, VAR_0))
   return -VAR_2;
  if (VAR_7->cmsg_len != FUNC_1(sizeof(u32)))
   return -VAR_1;
  VAR_8->mark = *(u32 *)FUNC_0(VAR_7);
  break;
 case 128:
  if (VAR_7->cmsg_len != FUNC_1(sizeof(u32)))
   return -VAR_1;

  VAR_9 = *(u32 *)FUNC_0(VAR_7);
  if (VAR_9 & ~VAR_4)
   return -VAR_1;

  VAR_8->tsflags &= ~VAR_4;
  VAR_8->tsflags |= VAR_9;
  break;
 case 130:
  if (!FUNC_4(VAR_5, VAR_3))
   return -VAR_1;
  if (VAR_7->cmsg_len != FUNC_1(sizeof(u64)))
   return -VAR_1;
  VAR_8->transmit_time = FUNC_2((u64 *)FUNC_0(VAR_7));
  break;

 case 131:
 case 132:
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
