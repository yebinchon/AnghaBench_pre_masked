
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_bearer {TYPE_1__* media; int up; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* send_msg ) (struct net*,struct sk_buff*,struct tipc_bearer*,struct tipc_media_addr*) ;} ;


 struct tipc_bearer* FUNC_0 (struct net*,int ) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct net*,struct sk_buff*,struct tipc_bearer*,struct tipc_media_addr*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct net *VAR_0, u32 VAR_1,
     struct sk_buff *VAR_2,
     struct tipc_media_addr *VAR_3)
{
 struct tipc_msg *VAR_4 = FUNC_1(VAR_2);
 struct tipc_bearer *VAR_5;

 FUNC_5();
 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (FUNC_3(VAR_5 && (FUNC_8(0, &VAR_5->up) || FUNC_4(VAR_4))))
  VAR_5->media->send_msg(VAR_0, VAR_2, VAR_5, VAR_3);
 else
  FUNC_2(VAR_2);
 FUNC_6();
}
