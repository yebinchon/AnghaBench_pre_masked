
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_fl_head {int masks; } ;
struct cls_fl_filter {int dummy; } ;


 int FUNC_0 (struct tcf_proto*,struct cls_fl_filter*,int*,int,struct netlink_ext_ack*) ;
 int FUNC_1 (struct cls_fl_filter*) ;
 struct cls_fl_head* FUNC_2 (struct tcf_proto*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tcf_proto *VAR_0, void *VAR_1, bool *VAR_2,
       bool VAR_3, struct netlink_ext_ack *VAR_4)
{
 struct cls_fl_head *VAR_5 = FUNC_2(VAR_0);
 struct cls_fl_filter *VAR_6 = VAR_1;
 bool VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_0, VAR_6, &VAR_7, VAR_3, VAR_4);
 *VAR_2 = FUNC_3(&VAR_5->masks);
 FUNC_1(VAR_6);

 return VAR_8;
}
