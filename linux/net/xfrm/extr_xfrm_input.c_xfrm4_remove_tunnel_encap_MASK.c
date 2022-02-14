
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct sk_buff {int protocol; scalar_t__ mac_len; } ;
struct iphdr {int dummy; } ;
struct TYPE_6__ {scalar_t__ protocol; int tos; } ;
struct TYPE_5__ {int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_9(struct xfrm_state *VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7 = -VAR_0;

 if (FUNC_0(VAR_6)->protocol != VAR_2)
  goto out;

 if (!FUNC_5(VAR_6, sizeof(struct iphdr)))
  goto out;

 VAR_7 = FUNC_8(VAR_6, VAR_1);
 if (VAR_7)
  goto out;

 if (VAR_5->props.flags & VAR_3)
  FUNC_4(FUNC_0(VAR_6)->tos, FUNC_3(VAR_6));
 if (!(VAR_5->props.flags & VAR_4))
  FUNC_2(VAR_6);

 FUNC_7(VAR_6);
 FUNC_6(VAR_6);
 if (VAR_6->mac_len)
  FUNC_1(VAR_6)->h_proto = VAR_6->protocol;

 VAR_7 = 0;

out:
 return VAR_7;
}
