
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


struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {size_t data; scalar_t__ len; } ;
struct sctp_ulpevent {int msg_flags; int tsn; int cumtsn; int flags; void* stream; struct sctp_chunk* chunk; } ;
struct TYPE_11__ {TYPE_4__* data_hdr; } ;
struct sctp_chunk {size_t chunk_end; TYPE_6__* chunk_hdr; TYPE_5__ subh; int transport; struct sk_buff* skb; } ;
struct TYPE_9__ {int tsn_map; } ;
struct TYPE_7__ {struct sock* sk; } ;
struct sctp_association {TYPE_3__ peer; int rmem_alloc; TYPE_2__* ep; TYPE_1__ base; } ;
typedef int gfp_t ;
struct TYPE_12__ {int flags; int length; } ;
struct TYPE_10__ {int tsn; int stream; } ;
struct TYPE_8__ {scalar_t__ rcvbuf_policy; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_chunk*) ;
 struct sctp_ulpevent* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct sctp_ulpevent*,int ,scalar_t__) ;
 int FUNC_10 (struct sctp_ulpevent*,struct sctp_association*) ;
 int FUNC_11 (struct sock*,struct sk_buff*,size_t) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,size_t) ;

struct sctp_ulpevent *FUNC_14(struct sctp_association *VAR_2,
      struct sctp_chunk *VAR_3,
      gfp_t VAR_4)
{
 struct sctp_ulpevent *VAR_5 = ((void*)0);
 struct sk_buff *VAR_6 = VAR_3->skb;
 struct sock *VAR_7 = VAR_2->base.sk;
 size_t VAR_8, VAR_9;
 int VAR_10;






 if (VAR_2->ep->rcvbuf_policy)
  VAR_10 = FUNC_1(&VAR_2->rmem_alloc);
 else
  VAR_10 = FUNC_1(&VAR_7->sk_rmem_alloc);

 VAR_9 = FUNC_4(VAR_3->chunk_hdr->length);

 if (VAR_10 >= VAR_7->sk_rcvbuf || !FUNC_11(VAR_7, VAR_6, VAR_9))
  goto fail;


 VAR_6 = FUNC_12(VAR_3->skb, VAR_4);
 if (!VAR_6)
  goto fail;




 if (FUNC_8(&VAR_2->peer.tsn_map,
        FUNC_3(VAR_3->subh.data_hdr->tsn),
        VAR_3->transport))
  goto fail_mark;
 VAR_8 = FUNC_0(VAR_9) - VAR_9;


 FUNC_13(VAR_6, VAR_3->chunk_end - VAR_8 - VAR_6->data);


 VAR_5 = FUNC_6(VAR_6);





 FUNC_9(VAR_5, 0, VAR_6->len + sizeof(struct sk_buff));




 FUNC_5(VAR_3);
 VAR_5->chunk = VAR_3;

 FUNC_10(VAR_5, VAR_2);

 VAR_5->stream = FUNC_4(VAR_3->subh.data_hdr->stream);
 if (VAR_3->chunk_hdr->flags & VAR_0) {
  VAR_5->flags |= VAR_1;
  VAR_5->cumtsn = FUNC_7(&VAR_2->peer.tsn_map);
 }
 VAR_5->tsn = FUNC_3(VAR_3->subh.data_hdr->tsn);
 VAR_5->msg_flags |= VAR_3->chunk_hdr->flags;

 return VAR_5;

fail_mark:
 FUNC_2(VAR_6);
fail:
 return ((void*)0);
}
