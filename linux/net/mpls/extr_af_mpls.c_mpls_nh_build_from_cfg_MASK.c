
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_2__ {struct net* nl_net; } ;
struct mpls_route_config {int rc_output_labels; int rc_ifindex; int rc_via_alen; int rc_via; int rc_via_table; int * rc_output_label; TYPE_1__ rc_nlinfo; } ;
struct mpls_route {int rt_nhn_alive; struct mpls_nh* rt_nh; } ;
struct mpls_nh {int nh_labels; int nh_flags; int nh_via_alen; int nh_via_table; int * nh_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpls_route*,struct mpls_nh*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct net*,struct mpls_route*,struct mpls_nh*,int ) ;

__attribute__((used)) static int FUNC_3(struct mpls_route_config *VAR_3,
      struct mpls_route *VAR_4)
{
 struct net *VAR_5 = VAR_3->rc_nlinfo.nl_net;
 struct mpls_nh *VAR_6 = VAR_4->rt_nh;
 int VAR_7;
 int VAR_8;

 if (!VAR_6)
  return -VAR_0;

 VAR_6->nh_labels = VAR_3->rc_output_labels;
 for (VAR_8 = 0; VAR_8 < VAR_6->nh_labels; VAR_8++)
  VAR_6->nh_label[VAR_8] = VAR_3->rc_output_label[VAR_8];

 VAR_6->nh_via_table = VAR_3->rc_via_table;
 FUNC_1(FUNC_0(VAR_4, VAR_6), VAR_3->rc_via, VAR_3->rc_via_alen);
 VAR_6->nh_via_alen = VAR_3->rc_via_alen;

 VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_6, VAR_3->rc_ifindex);
 if (VAR_7)
  goto errout;

 if (VAR_6->nh_flags & (VAR_1 | VAR_2))
  VAR_4->rt_nhn_alive--;

 return 0;

errout:
 return VAR_7;
}
