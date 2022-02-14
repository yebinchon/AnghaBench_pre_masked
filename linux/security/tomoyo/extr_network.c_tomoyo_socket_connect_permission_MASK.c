
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tomoyo_addr_info {unsigned int protocol; int operation; } ;
struct socket {unsigned int type; TYPE_1__* sk; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sk_protocol; } ;


 scalar_t__ const VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr*,int,int ,struct tomoyo_addr_info*) ;
 int FUNC_1 (struct sockaddr*,int,struct tomoyo_addr_info*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct socket *VAR_3,
         struct sockaddr *VAR_4, int VAR_5)
{
 struct tomoyo_addr_info VAR_6;
 const u8 VAR_7 = FUNC_2(VAR_3->sk);
 const unsigned int VAR_8 = VAR_3->type;

 if (!VAR_7)
  return 0;
 VAR_6.protocol = VAR_8;
 switch (VAR_8) {
 case 131:
 case 130:
  VAR_6.operation = VAR_2;
  break;
 case 128:
 case 129:
  VAR_6.operation = VAR_1;
  break;
 default:
  return 0;
 }
 if (VAR_7 == VAR_0)
  return FUNC_1(VAR_4, VAR_5, &VAR_6);
 return FUNC_0(VAR_4, VAR_5, VAR_3->sk->sk_protocol,
      &VAR_6);
}
