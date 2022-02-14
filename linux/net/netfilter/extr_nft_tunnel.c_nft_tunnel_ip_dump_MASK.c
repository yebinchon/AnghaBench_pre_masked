
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_6__ {int dst; int src; } ;
struct TYPE_5__ {int dst; int src; } ;
struct TYPE_7__ {TYPE_2__ ipv4; TYPE_1__ ipv6; } ;
struct TYPE_8__ {TYPE_3__ u; int label; } ;
struct ip_tunnel_info {int mode; TYPE_4__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8, struct ip_tunnel_info *VAR_9)
{
 struct nlattr *VAR_10;

 if (VAR_9->mode & VAR_0) {
  VAR_10 = FUNC_1(VAR_8, VAR_2);
  if (!VAR_10)
   return -1;

  if (FUNC_3(VAR_8, VAR_5, &VAR_9->key.u.ipv6.src) < 0 ||
      FUNC_3(VAR_8, VAR_3, &VAR_9->key.u.ipv6.dst) < 0 ||
      FUNC_2(VAR_8, VAR_4, VAR_9->key.label))
   return -1;

  FUNC_0(VAR_8, VAR_10);
 } else {
  VAR_10 = FUNC_1(VAR_8, VAR_1);
  if (!VAR_10)
   return -1;

  if (FUNC_4(VAR_8, VAR_7, VAR_9->key.u.ipv4.src) < 0 ||
      FUNC_4(VAR_8, VAR_6, VAR_9->key.u.ipv4.dst) < 0)
   return -1;

  FUNC_0(VAR_8, VAR_10);
 }

 return 0;
}
