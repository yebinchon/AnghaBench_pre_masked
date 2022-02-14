
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_state_afinfo {int (* extract_input ) (struct xfrm_state*,struct sk_buff*) ;} ;
struct TYPE_5__ {scalar_t__ family; } ;
struct TYPE_4__ {int family; } ;
struct xfrm_mode {int family; } ;
struct xfrm_state {TYPE_2__ sel; TYPE_1__ outer_mode; struct xfrm_mode inner_mode; } ;
struct sk_buff {void* protocol; } ;
struct TYPE_6__ {int protocol; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct xfrm_state_afinfo const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_7 (struct xfrm_state*,struct xfrm_mode const*,struct sk_buff*) ;
 struct xfrm_mode* FUNC_8 (struct xfrm_state*,int ) ;
 struct xfrm_state_afinfo* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct xfrm_state *VAR_4, struct sk_buff *VAR_5)
{
 const struct xfrm_mode *VAR_6 = &VAR_4->inner_mode;
 const struct xfrm_state_afinfo *VAR_7;
 int VAR_8 = -VAR_1;

 FUNC_4();
 VAR_7 = FUNC_9(VAR_4->outer_mode.family);
 if (FUNC_3(VAR_7))
  VAR_8 = VAR_7->extract_input(VAR_4, VAR_5);
 FUNC_5();

 if (VAR_8)
  return VAR_8;

 if (VAR_4->sel.family == VAR_0) {
  VAR_6 = FUNC_8(VAR_4, FUNC_1(VAR_5)->protocol);
  if (!VAR_6)
   return -VAR_1;
 }

 switch (VAR_6->family) {
 case 129:
  VAR_5->protocol = FUNC_2(VAR_2);
  break;
 case 128:
  VAR_5->protocol = FUNC_2(VAR_3);
  break;
 default:
  FUNC_0(1);
  break;
 }

 return FUNC_7(VAR_4, VAR_6, VAR_5);
}
