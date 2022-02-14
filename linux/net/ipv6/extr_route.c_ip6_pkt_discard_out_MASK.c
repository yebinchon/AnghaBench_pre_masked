
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_2, struct sock *VAR_3, struct sk_buff *VAR_4)
{
 VAR_4->dev = FUNC_1(VAR_4)->dev;
 return FUNC_0(VAR_4, VAR_0, VAR_1);
}
