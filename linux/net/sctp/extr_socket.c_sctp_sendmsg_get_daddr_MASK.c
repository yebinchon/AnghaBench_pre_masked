
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sock {int dummy; } ;
struct sctp_cmsgs {int dummy; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_name; } ;


 union sctp_addr* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,union sctp_addr*,int) ;

__attribute__((used)) static union sctp_addr *FUNC_3(struct sock *VAR_1,
            const struct msghdr *VAR_2,
            struct sctp_cmsgs *VAR_3)
{
 union sctp_addr *VAR_4 = ((void*)0);
 int VAR_5;

 if (!FUNC_1(VAR_1, VAR_0) && VAR_2->msg_name) {
  int VAR_6 = VAR_2->msg_namelen;

  if (VAR_6 > sizeof(*VAR_4))
   VAR_6 = sizeof(*VAR_4);

  VAR_4 = (union sctp_addr *)VAR_2->msg_name;

  VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_6);
  if (VAR_5)
   return FUNC_0(VAR_5);
 }

 return VAR_4;
}
