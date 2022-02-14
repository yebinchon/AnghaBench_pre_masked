
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct tcf_result {scalar_t__ classid; } ;
struct tcf_proto {int root; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int mask; int offset; int key; } ;
struct rsvp_session {scalar_t__* dst; scalar_t__ protocol; scalar_t__ tunnelid; int * ht; TYPE_1__ dpi; int next; } ;
struct rsvp_head {int * ht; } ;
struct TYPE_4__ {int mask; int offset; int key; } ;
struct rsvp_filter {scalar_t__* src; scalar_t__ tunnelhdr; struct tcf_result res; int next; TYPE_2__ spi; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; scalar_t__ nexthdr; scalar_t__ protocol; int ihl; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__*) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct iphdr*) ;
 struct ipv6hdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, const struct tcf_proto *VAR_2,
    struct tcf_result *VAR_3)
{
 struct rsvp_head *VAR_4 = FUNC_7(VAR_2->root);
 struct rsvp_session *VAR_5;
 struct rsvp_filter *VAR_6;
 unsigned int VAR_7, VAR_8;
 __be32 *VAR_9, *VAR_10;
 u8 VAR_11;
 u8 VAR_12 = 0;
 u8 *VAR_13;







 struct iphdr *VAR_14;

 if (!FUNC_6(VAR_1, sizeof(*VAR_14)))
  return -1;
 VAR_14 = FUNC_3(VAR_1);

restart:







 VAR_10 = &VAR_14->saddr;
 VAR_9 = &VAR_14->daddr;
 VAR_11 = VAR_14->protocol;
 VAR_13 = ((u8 *)VAR_14) + (VAR_14->ihl<<2);
 if (FUNC_4(VAR_14))
  return -1;


 VAR_7 = FUNC_1(VAR_9, VAR_11, VAR_12);
 VAR_8 = FUNC_2(VAR_10);

 for (VAR_5 = FUNC_7(VAR_4->ht[VAR_7]); VAR_5;
      VAR_5 = FUNC_7(VAR_5->next)) {
  if (VAR_9[VAR_0-1] == VAR_5->dst[VAR_0 - 1] &&
      VAR_11 == VAR_5->protocol &&
      !(VAR_5->dpi.mask &
        (*(u32 *)(VAR_13 + VAR_5->dpi.offset) ^ VAR_5->dpi.key)) &&





      VAR_12 == VAR_5->tunnelid) {

   for (VAR_6 = FUNC_7(VAR_5->ht[VAR_8]); VAR_6;
        VAR_6 = FUNC_7(VAR_6->next)) {
    if (VAR_10[VAR_0-1] == VAR_6->src[VAR_0 - 1] &&
        !(VAR_6->spi.mask & (*(u32 *)(VAR_13 + VAR_6->spi.offset) ^ VAR_6->spi.key))






        ) {
     *VAR_3 = VAR_6->res;
     FUNC_0();

matched:
     if (VAR_6->tunnelhdr == 0)
      return 0;

     VAR_12 = VAR_6->res.classid;
     VAR_14 = (void *)(VAR_13 + VAR_6->tunnelhdr - sizeof(*VAR_14));
     goto restart;
    }
   }


   for (VAR_6 = FUNC_7(VAR_5->ht[16]); VAR_6;
        VAR_6 = FUNC_7(VAR_6->next)) {
    *VAR_3 = VAR_6->res;
    FUNC_0();
    goto matched;
   }
   return -1;
  }
 }
 return -1;
}
