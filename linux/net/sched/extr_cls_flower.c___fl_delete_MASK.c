
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {int lock; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_fl_head {int handle_idr; } ;
struct cls_fl_filter {int deleted; int res; int flags; TYPE_1__* mask; int list; int handle; int ht_node; } ;
struct TYPE_2__ {int filter_ht_params; int ht; } ;


 int VAR_0 ;
 int FUNC_0 (struct cls_fl_filter*) ;
 struct cls_fl_head* FUNC_1 (struct tcf_proto*) ;
 int FUNC_2 (struct tcf_proto*,struct cls_fl_filter*,int,struct netlink_ext_ack*) ;
 int FUNC_3 (struct cls_fl_head*,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct tcf_proto*,int *) ;

__attribute__((used)) static int FUNC_11(struct tcf_proto *VAR_1, struct cls_fl_filter *VAR_2,
         bool *VAR_3, bool VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 struct cls_fl_head *VAR_6 = FUNC_1(VAR_1);

 *VAR_3 = 0;

 FUNC_7(&VAR_1->lock);
 if (VAR_2->deleted) {
  FUNC_8(&VAR_1->lock);
  return -VAR_0;
 }

 VAR_2->deleted = 1;
 FUNC_6(&VAR_2->mask->ht, &VAR_2->ht_node,
          VAR_2->mask->filter_ht_params);
 FUNC_4(&VAR_6->handle_idr, VAR_2->handle);
 FUNC_5(&VAR_2->list);
 FUNC_8(&VAR_1->lock);

 *VAR_3 = FUNC_3(VAR_6, VAR_2->mask);
 if (!FUNC_9(VAR_2->flags))
  FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5);
 FUNC_10(VAR_1, &VAR_2->res);
 FUNC_0(VAR_2);

 return 0;
}
