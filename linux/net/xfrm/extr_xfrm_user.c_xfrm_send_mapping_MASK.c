
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_2__ {scalar_t__ proto; } ;
struct xfrm_state {int encap; TYPE_1__ id; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,struct xfrm_state*,int *,int ) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct net*,struct sk_buff*,int ,int ) ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_5, xfrm_address_t *VAR_6,
        __be16 VAR_7)
{
 struct net *VAR_8 = FUNC_5(VAR_5);
 struct sk_buff *VAR_9;
 int VAR_10;

 if (VAR_5->id.proto != VAR_3)
  return -VAR_0;

 if (!VAR_5->encap)
  return -VAR_0;

 VAR_9 = FUNC_2(FUNC_3(), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_9, VAR_5, VAR_6, VAR_7);
 FUNC_0(VAR_10 < 0);

 return FUNC_4(VAR_8, VAR_9, 0, VAR_4);
}
