
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct ip_options {int __data; int optlen; } ;
struct TYPE_3__ {scalar_t__ optlen; } ;
struct TYPE_4__ {TYPE_1__ opt; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct net*,struct ip_options*,struct sk_buff*) ;
 int FUNC_2 (struct ip_options*) ;
 int FUNC_3 (struct msghdr*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net *VAR_3, struct msghdr *VAR_4,
     struct sk_buff *VAR_5)
{
 unsigned char VAR_6[sizeof(struct ip_options) + 40];
 struct ip_options *VAR_7 = (struct ip_options *)VAR_6;

 if (FUNC_0(VAR_5)->opt.optlen == 0)
  return;

 if (FUNC_1(VAR_3, VAR_7, VAR_5)) {
  VAR_4->msg_flags |= VAR_1;
  return;
 }
 FUNC_2(VAR_7);

 FUNC_3(VAR_4, VAR_2, VAR_0, VAR_7->optlen, VAR_7->__data);
}
