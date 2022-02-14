
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int vtag; } ;
struct sctp_transport {int dummy; } ;
struct TYPE_7__ {int init_tag; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct sctp_init_chunk {TYPE_3__ init_hdr; TYPE_2__ chunk_hdr; } ;
struct sctp_chunkhdr {int dummy; } ;
struct TYPE_8__ {scalar_t__ my_vtag; scalar_t__ peer_vtag; } ;
struct TYPE_5__ {struct sock* sk; } ;
struct sctp_association {TYPE_4__ c; TYPE_1__ base; } ;
struct sctp_af {int (* from_skb ) (union sctp_addr*,struct sk_buff*,int) ;} ;
struct net {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net*,int ) ;
 struct sctp_association* FUNC_1 (struct net*,union sctp_addr*,union sctp_addr*,struct sctp_transport**) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct sctp_af* FUNC_4 (int) ;
 int FUNC_5 (struct sctp_transport*) ;
 struct sctp_init_chunk* FUNC_6 (struct sk_buff*,scalar_t__,int,struct sctp_init_chunk*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sock*) ;
 int FUNC_9 (union sctp_addr*,struct sk_buff*,int) ;
 int FUNC_10 (union sctp_addr*,struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (int) ;

struct sock *FUNC_12(struct net *VAR_2, int VAR_3, struct sk_buff *VAR_4,
        struct sctphdr *VAR_5,
        struct sctp_association **VAR_6,
        struct sctp_transport **VAR_7)
{
 struct sctp_init_chunk *VAR_8, VAR_9;
 union sctp_addr VAR_10;
 union sctp_addr VAR_11;
 struct sctp_af *VAR_12;
 struct sock *VAR_13 = ((void*)0);
 struct sctp_association *VAR_14;
 struct sctp_transport *VAR_15 = ((void*)0);
 __u32 VAR_16 = FUNC_3(VAR_5->vtag);

 *VAR_6 = ((void*)0); *VAR_7 = ((void*)0);

 VAR_12 = FUNC_4(VAR_3);
 if (FUNC_11(!VAR_12)) {
  return ((void*)0);
 }


 VAR_12->from_skb(&VAR_10, VAR_4, 1);
 VAR_12->from_skb(&VAR_11, VAR_4, 0);




 VAR_14 = FUNC_1(VAR_2, &VAR_10, &VAR_11, &VAR_15);
 if (!VAR_14)
  return ((void*)0);

 VAR_13 = VAR_14->base.sk;
 if (VAR_16 == 0) {

  VAR_8 = FUNC_6(VAR_4, FUNC_7(VAR_4) +
           sizeof(struct sctphdr),
           sizeof(struct sctp_chunkhdr) +
           sizeof(__be32), &VAR_9);
  if (!VAR_8 ||
      VAR_8->chunk_hdr.type != VAR_1 ||
      FUNC_3(VAR_8->init_hdr.init_tag) != VAR_14->c.my_vtag)
   goto out;

 } else if (VAR_16 != VAR_14->c.peer_vtag) {
  goto out;
 }

 FUNC_2(VAR_13);




 if (FUNC_8(VAR_13))
  FUNC_0(VAR_2, VAR_0);

 *VAR_6 = VAR_14;
 *VAR_7 = VAR_15;
 return VAR_13;

out:
 FUNC_5(VAR_15);
 return ((void*)0);
}
