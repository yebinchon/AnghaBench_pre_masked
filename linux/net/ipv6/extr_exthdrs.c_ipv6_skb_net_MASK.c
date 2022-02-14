
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 struct net* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline struct net *FUNC_2(struct sk_buff *VAR_0)
{
 return FUNC_1(VAR_0) ? FUNC_0(FUNC_1(VAR_0)->dev) : FUNC_0(VAR_0->dev);
}
