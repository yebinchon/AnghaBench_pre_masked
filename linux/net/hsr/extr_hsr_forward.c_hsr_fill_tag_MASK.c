
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int len; } ;
struct hsr_port {scalar_t__ type; } ;
struct hsr_frame_info {int sequence_nr; scalar_t__ is_vlan; } ;
struct TYPE_4__ {void* h_proto; } ;
struct TYPE_5__ {void* encap_proto; void* sequence_nr; } ;
struct hsr_ethhdr {TYPE_1__ ethhdr; TYPE_2__ hsr_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_3, struct hsr_frame_info *VAR_4,
    struct hsr_port *VAR_5, u8 VAR_6)
{
 struct hsr_ethhdr *VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_5->type == VAR_2)
  VAR_8 = 0;
 else
  VAR_8 = 1;

 VAR_9 = VAR_3->len - 14;
 if (VAR_4->is_vlan)
  VAR_9 -= 4;

 VAR_7 = (struct hsr_ethhdr *)FUNC_3(VAR_3);

 FUNC_2(&VAR_7->hsr_tag, VAR_8);
 FUNC_1(&VAR_7->hsr_tag, VAR_9);
 VAR_7->hsr_tag.sequence_nr = FUNC_0(VAR_4->sequence_nr);
 VAR_7->hsr_tag.encap_proto = VAR_7->ethhdr.h_proto;
 VAR_7->ethhdr.h_proto = FUNC_0(VAR_6 ?
   VAR_0 : VAR_1);
}
