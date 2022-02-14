
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_mask {int flags; } ;
struct fl_flow_key {int dummy; } ;
struct cls_fl_filter {int dummy; } ;


 int VAR_0 ;
 struct cls_fl_filter* FUNC_0 (struct fl_flow_mask*,struct fl_flow_key*) ;
 struct cls_fl_filter* FUNC_1 (struct fl_flow_mask*,struct fl_flow_key*,struct fl_flow_key*) ;

__attribute__((used)) static struct cls_fl_filter *FUNC_2(struct fl_flow_mask *VAR_1,
           struct fl_flow_key *VAR_2,
           struct fl_flow_key *VAR_3)
{
 if ((VAR_1->flags & VAR_0))
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_1, VAR_2);
}
