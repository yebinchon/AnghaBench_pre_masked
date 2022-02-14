
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spi; } ;
struct xfrm_state {TYPE_1__ id; } ;
struct xfrm_offload {int proto; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int protocol; } ;
struct ip_esp_hdr {int seq_no; int spi; } ;
struct TYPE_6__ {int low; } ;
struct TYPE_7__ {TYPE_2__ output; } ;
struct TYPE_8__ {TYPE_3__ seq; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 struct ip_esp_hdr* FUNC_2 (struct sk_buff*) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int * FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 struct xfrm_offload* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct xfrm_state *VAR_1, struct sk_buff *VAR_2)
{
 struct ip_esp_hdr *VAR_3;
 struct iphdr *VAR_4 = FUNC_3(VAR_2);
 struct xfrm_offload *VAR_5 = FUNC_7(VAR_2);
 int VAR_6 = VAR_4->protocol;

 FUNC_6(VAR_2, -FUNC_5(VAR_2));
 VAR_3 = FUNC_2(VAR_2);
 *FUNC_4(VAR_2) = VAR_0;

 VAR_3->spi = VAR_1->id.spi;
 VAR_3->seq_no = FUNC_1(FUNC_0(VAR_2)->seq.output.low);

 VAR_5->proto = VAR_6;
}
