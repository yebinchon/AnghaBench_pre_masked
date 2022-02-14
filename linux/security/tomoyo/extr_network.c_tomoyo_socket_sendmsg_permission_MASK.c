
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tomoyo_addr_info {unsigned int protocol; int operation; } ;
struct socket {unsigned int type; TYPE_1__* sk; } ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_name; } ;
struct TYPE_2__ {int sk_protocol; } ;


 scalar_t__ const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr*,int ,int ,struct tomoyo_addr_info*) ;
 int FUNC_1 (struct sockaddr*,int ,struct tomoyo_addr_info*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct socket *VAR_4, struct msghdr *VAR_5,
         int VAR_6)
{
 struct tomoyo_addr_info VAR_7;
 const u8 VAR_8 = FUNC_2(VAR_4->sk);
 const unsigned int VAR_9 = VAR_4->type;

 if (!VAR_5->msg_name || !VAR_8 ||
     (VAR_9 != VAR_1 && VAR_9 != VAR_2))
  return 0;
 VAR_7.protocol = VAR_9;
 VAR_7.operation = VAR_3;
 if (VAR_8 == VAR_0)
  return FUNC_1((struct sockaddr *)
       VAR_5->msg_name,
       VAR_5->msg_namelen, &VAR_7);
 return FUNC_0((struct sockaddr *) VAR_5->msg_name,
      VAR_5->msg_namelen,
      VAR_4->sk->sk_protocol, &VAR_7);
}
