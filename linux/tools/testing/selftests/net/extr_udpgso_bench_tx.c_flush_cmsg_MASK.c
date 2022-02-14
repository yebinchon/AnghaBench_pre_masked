
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock_extended_err {int ee_origin; int ee_type; int ee_code; scalar_t__ ee_data; scalar_t__ ee_info; } ;
struct scm_timestamping {TYPE_1__* ts; } ;
struct cmsghdr {int cmsg_level; int cmsg_type; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int tv_sec; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,char*,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct cmsghdr *VAR_8)
{
 struct sock_extended_err *VAR_9;
 struct scm_timestamping *VAR_10;
 __u32 VAR_11;
 __u32 VAR_12;
 int VAR_13;

 switch (VAR_8->cmsg_level) {
 case 133:
  if (VAR_8->cmsg_type == VAR_1) {
   VAR_13 = (VAR_2 == VAR_0) ? 2 : 0;
   VAR_10 = (struct scm_timestamping *)FUNC_0(VAR_8);
   if (VAR_10->ts[VAR_13].tv_sec == 0)
    VAR_5++;
  } else {
   FUNC_1(1, 0, "unknown SOL_SOCKET cmsg type=%u\n",
         VAR_8->cmsg_type);
  }
  break;
 case 135:
 case 134:
  switch (VAR_8->cmsg_type) {
  case 136:
  case 137:
  {
   VAR_9 = (struct sock_extended_err *)FUNC_0(VAR_8);
   switch (VAR_9->ee_origin) {
   case 129:

    VAR_4++;
    break;
   case 132:
   case 131:
    if (VAR_3)
     FUNC_2(VAR_7,
      "received ICMP error: type=%u, code=%u\n",
      VAR_9->ee_type, VAR_9->ee_code);
    break;
   case 128:
   {
    VAR_11 = VAR_9->ee_info;
    VAR_12 = VAR_9->ee_data;

    VAR_6 += VAR_12 - VAR_11 + 1;
    break;
   }
   case 130:
    if (VAR_3)
     FUNC_2(VAR_7,
      "received packet with local origin: %u\n",
      VAR_9->ee_origin);
    break;
   default:
    FUNC_1(0, 1, "received packet with origin: %u",
          VAR_9->ee_origin);
   }
   break;
  }
  default:
   FUNC_1(0, 1, "unknown IP msg type=%u\n",
         VAR_8->cmsg_type);
   break;
  }
  break;
 default:
  FUNC_1(0, 1, "unknown cmsg level=%u\n",
        VAR_8->cmsg_level);
 }
}
