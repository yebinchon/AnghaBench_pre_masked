
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct sk_buff {int dummy; } ;
struct ip_esp_hdr {int seq_no; int spi; } ;
typedef int __be32 ;
struct TYPE_7__ {int hi; } ;
struct TYPE_6__ {TYPE_3__ input; } ;
struct TYPE_8__ {TYPE_2__ seq; } ;


 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct ip_esp_hdr* FUNC_1 (struct sk_buff*,int) ;
 struct xfrm_state* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1, __be32 *VAR_2)
{
 struct xfrm_state *VAR_3 = FUNC_2(VAR_1);





 if ((VAR_3->props.flags & VAR_0)) {
  struct ip_esp_hdr *VAR_4 = FUNC_1(VAR_1, 4);

  *VAR_2 = VAR_4->spi;
  VAR_4->spi = VAR_4->seq_no;
  VAR_4->seq_no = FUNC_0(VAR_1)->seq.input.hi;
 }
}
