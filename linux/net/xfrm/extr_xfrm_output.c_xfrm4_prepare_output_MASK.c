
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encap; } ;
struct xfrm_state {TYPE_1__ outer_mode; } ;
struct sk_buff {int protocol; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_4 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_5 (struct xfrm_state*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_4)->flags |= VAR_2;
 VAR_4->protocol = FUNC_2(VAR_1);

 switch (VAR_3->outer_mode.encap) {
 case 129:
  return FUNC_3(VAR_3, VAR_4);
 case 128:
  return FUNC_4(VAR_3, VAR_4);
 }

 FUNC_1(1);
 return -VAR_0;
}
