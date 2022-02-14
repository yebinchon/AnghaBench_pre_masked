
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int src; int dst; } ;
struct TYPE_3__ {int src; int dst; } ;
struct fl_flow_key {TYPE_2__ tp_max; TYPE_1__ tp_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int *,int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_5, struct fl_flow_key *VAR_6,
      struct fl_flow_key *VAR_7)
{
 if (FUNC_0(VAR_5, &VAR_6->tp_min.dst, VAR_1,
       &VAR_7->tp_min.dst, VAR_4,
       sizeof(VAR_6->tp_min.dst)) ||
     FUNC_0(VAR_5, &VAR_6->tp_max.dst, VAR_0,
       &VAR_7->tp_max.dst, VAR_4,
       sizeof(VAR_6->tp_max.dst)) ||
     FUNC_0(VAR_5, &VAR_6->tp_min.src, VAR_3,
       &VAR_7->tp_min.src, VAR_4,
       sizeof(VAR_6->tp_min.src)) ||
     FUNC_0(VAR_5, &VAR_6->tp_max.src, VAR_2,
       &VAR_7->tp_max.src, VAR_4,
       sizeof(VAR_6->tp_max.src)))
  return -1;

 return 0;
}
