
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {int msg_flags; TYPE_1__* msg_iov; } ;
struct TYPE_2__ {int iov_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__,char*,...) ;
 int FUNC_1 (int,struct msghdr*,int) ;

__attribute__((used)) static bool FUNC_2(int VAR_4, struct msghdr *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_7 == -1 &&
     (VAR_3 == VAR_1 || VAR_3 == VAR_2 || VAR_3 == VAR_0))
  return 0;
 if (VAR_7 == -1)
  FUNC_0(1, VAR_3, "sendmsg");
 if (VAR_7 != VAR_5->msg_iov->iov_len)
  FUNC_0(1, 0, "sendto: %d != %lu", VAR_7, VAR_5->msg_iov->iov_len);
 if (VAR_5->msg_flags)
  FUNC_0(1, 0, "sendmsg: return flags 0x%x\n", VAR_5->msg_flags);

 return 1;
}
