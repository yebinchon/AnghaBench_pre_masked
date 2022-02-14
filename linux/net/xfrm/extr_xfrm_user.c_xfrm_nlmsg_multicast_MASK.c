
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int ,unsigned int,int ) ;
 struct sock* FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct net *VAR_2, struct sk_buff *VAR_3,
           u32 VAR_4, unsigned int VAR_5)
{
 struct sock *VAR_6 = FUNC_2(VAR_2->xfrm.nlsk);

 if (!VAR_6) {
  FUNC_0(VAR_3);
  return -VAR_0;
 }

 return FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5, VAR_1);
}
