
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int spi; } ;
struct TYPE_11__ {int flags; } ;
struct xfrm_state {TYPE_4__ id; TYPE_5__ props; } ;
struct TYPE_7__ {int hi; } ;
struct xfrm_offload {TYPE_1__ seq; } ;
struct sk_buff {int dummy; } ;
struct ip_esp_hdr {int spi; void* seq_no; } ;
typedef int __be32 ;
struct TYPE_8__ {int hi; } ;
struct TYPE_9__ {TYPE_2__ output; } ;
struct TYPE_12__ {TYPE_3__ seq; } ;


 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static struct ip_esp_hdr *FUNC_4(struct sk_buff *VAR_1,
          struct xfrm_state *VAR_2,
          struct ip_esp_hdr *VAR_3,
          __be32 *VAR_4)
{




 if ((VAR_2->props.flags & VAR_0)) {
  struct xfrm_offload *VAR_5 = FUNC_3(VAR_1);

  VAR_3 = (void *)(FUNC_2(VAR_1) - sizeof(__be32));
  *VAR_4 = VAR_3->spi;
  if (VAR_5)
   VAR_3->seq_no = FUNC_1(VAR_5->seq.hi);
  else
   VAR_3->seq_no = FUNC_1(FUNC_0(VAR_1)->seq.output.hi);
 }

 VAR_3->spi = VAR_2->id.spi;

 return VAR_3;
}
