
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int key_offset; int key_len; } ;
struct TYPE_4__ {scalar_t__ start; } ;
struct fl_flow_mask {TYPE_2__ filter_ht_params; int ht; TYPE_1__ range; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct fl_flow_mask*) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct fl_flow_mask *VAR_1)
{
 VAR_1->filter_ht_params = VAR_0;
 VAR_1->filter_ht_params.key_len = FUNC_0(VAR_1);
 VAR_1->filter_ht_params.key_offset += VAR_1->range.start;

 return FUNC_1(&VAR_1->ht, &VAR_1->filter_ht_params);
}
