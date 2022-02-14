
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_mask {int filter_ht_params; int ht; } ;
struct fl_flow_key {int dummy; } ;
struct cls_fl_filter {int dummy; } ;


 int FUNC_0 (struct fl_flow_key*,struct fl_flow_mask*) ;
 struct cls_fl_filter* FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static struct cls_fl_filter *FUNC_2(struct fl_flow_mask *VAR_0,
      struct fl_flow_key *VAR_1)
{
 return FUNC_1(&VAR_0->ht, FUNC_0(VAR_1, VAR_0),
          VAR_0->filter_ht_params);
}
