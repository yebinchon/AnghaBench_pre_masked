
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; } ;
struct hsr_priv {int dummy; } ;
struct hsr_frame_info {int is_local_exclusive; int is_local_dest; } ;
struct TYPE_2__ {int h_dest; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct hsr_priv*,int ) ;

__attribute__((used)) static void FUNC_2(struct hsr_priv *VAR_3, struct sk_buff *VAR_4,
        struct hsr_frame_info *VAR_5)
{
 if (FUNC_1(VAR_3, FUNC_0(VAR_4)->h_dest)) {
  VAR_5->is_local_exclusive = 1;
  VAR_4->pkt_type = VAR_1;
 } else {
  VAR_5->is_local_exclusive = 0;
 }

 if (VAR_4->pkt_type == VAR_1 ||
     VAR_4->pkt_type == VAR_2 ||
     VAR_4->pkt_type == VAR_0) {
  VAR_5->is_local_dest = 1;
 } else {
  VAR_5->is_local_dest = 0;
 }
}
