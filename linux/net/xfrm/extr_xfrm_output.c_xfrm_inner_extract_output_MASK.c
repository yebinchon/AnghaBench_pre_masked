
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_state_afinfo {int (* extract_output ) (struct xfrm_state*,struct sk_buff*) ;} ;
struct xfrm_mode {int family; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct xfrm_state {struct xfrm_mode inner_mode; TYPE_1__ sel; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xfrm_state_afinfo const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_5 (int ) ;
 struct xfrm_mode* FUNC_6 (struct xfrm_state*,int ) ;
 struct xfrm_state_afinfo* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct xfrm_state *VAR_2, struct sk_buff *VAR_3)
{
 const struct xfrm_state_afinfo *VAR_4;
 const struct xfrm_mode *VAR_5;
 int VAR_6 = -VAR_1;

 if (VAR_2->sel.family == VAR_0)
  VAR_5 = FUNC_6(VAR_2,
    FUNC_5(FUNC_3(VAR_3)->ops->family));
 else
  VAR_5 = &VAR_2->inner_mode;

 if (VAR_5 == ((void*)0))
  return -VAR_1;

 FUNC_1();
 VAR_4 = FUNC_7(VAR_5->family);
 if (FUNC_0(VAR_4))
  VAR_6 = VAR_4->extract_output(VAR_2, VAR_3);
 FUNC_2();

 return VAR_6;
}
