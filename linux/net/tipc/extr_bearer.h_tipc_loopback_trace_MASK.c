
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct net {int loopback_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct sk_buff_head*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct net *VAR_0,
           struct sk_buff_head *VAR_1)
{
 if (FUNC_2(FUNC_0(VAR_0->loopback_dev)))
  FUNC_1(VAR_0, VAR_1);
}
