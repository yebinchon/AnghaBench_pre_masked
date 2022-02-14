
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_17__ {int raw_addr_list_len; TYPE_5__* peer_init; int expiration; int adaptation_ind; int prsctp_capable; } ;
struct sctp_signed_cookie {int signature; TYPE_4__ c; } ;
struct sctp_paramhdr {int dummy; } ;
struct TYPE_16__ {int sk; } ;
struct sctp_endpoint {int secret_key; TYPE_3__ base; } ;
struct TYPE_14__ {int length; int type; } ;
struct sctp_cookie_param {TYPE_1__ p; scalar_t__ body; } ;
struct sctp_cookie {int dummy; } ;
struct sctp_chunk {TYPE_5__ const* chunk_hdr; } ;
struct TYPE_15__ {int adaptation_ind; int prsctp_capable; } ;
struct sctp_association {int cookie_life; TYPE_2__ peer; TYPE_4__ c; } ;
struct TYPE_18__ {int length; } ;
typedef TYPE_5__ __u8 ;
struct TYPE_20__ {scalar_t__ hmac; } ;
struct TYPE_19__ {scalar_t__ tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,scalar_t__) ;
 int FUNC_1 (TYPE_6__*,int *,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int) ;
 TYPE_6__* VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sctp_cookie_param*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 struct sctp_cookie_param* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_5__*,TYPE_5__ const*,int) ;
 int FUNC_9 (int ) ;
 TYPE_7__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_6__*) ;

__attribute__((used)) static struct sctp_cookie_param *FUNC_12(
     const struct sctp_endpoint *VAR_4,
     const struct sctp_association *VAR_5,
     const struct sctp_chunk *VAR_6,
     int *VAR_7, const __u8 *VAR_8,
     int VAR_9)
{
 struct sctp_signed_cookie *VAR_10;
 struct sctp_cookie_param *VAR_11;
 int VAR_12, VAR_13;




 VAR_12 = sizeof(struct sctp_paramhdr) +
       (sizeof(struct sctp_signed_cookie) -
        sizeof(struct sctp_cookie));
 VAR_13 = sizeof(struct sctp_cookie)
  + FUNC_9(VAR_6->chunk_hdr->length) + VAR_9;




 if (VAR_13 % VAR_1)
  VAR_13 += VAR_1
   - (VAR_13 % VAR_1);
 *VAR_7 = VAR_12 + VAR_13;




 VAR_11 = FUNC_7(*VAR_7, VAR_0);
 if (!VAR_11)
  goto nodata;

 VAR_10 = (struct sctp_signed_cookie *) VAR_11->body;


 VAR_11->p.type = VAR_2;
 VAR_11->p.length = FUNC_3(*VAR_7);


 VAR_10->c = VAR_5->c;

 VAR_10->c.raw_addr_list_len = VAR_9;


 VAR_10->c.prsctp_capable = VAR_5->peer.prsctp_capable;


 VAR_10->c.adaptation_ind = VAR_5->peer.adaptation_ind;


 VAR_10->c.expiration = FUNC_5(VAR_5->cookie_life,
      FUNC_6());


 FUNC_8(&VAR_10->c.peer_init[0], VAR_6->chunk_hdr,
        FUNC_9(VAR_6->chunk_hdr->length));


 FUNC_8((__u8 *)&VAR_10->c.peer_init[0] +
        FUNC_9(VAR_6->chunk_hdr->length), VAR_8, VAR_9);

 if (FUNC_10(VAR_4->base.sk)->hmac) {
  FUNC_0(VAR_3, FUNC_10(VAR_4->base.sk)->hmac);
  int VAR_14;


  VAR_3->tfm = FUNC_10(VAR_4->base.sk)->hmac;

  VAR_14 = FUNC_2(VAR_3->tfm, VAR_4->secret_key,
       sizeof(VAR_4->secret_key)) ?:
        FUNC_1(VAR_3, (u8 *)&VAR_10->c, VAR_13,
       VAR_10->signature);
  FUNC_11(VAR_3);
  if (VAR_14)
   goto free_cookie;
 }

 return VAR_11;

free_cookie:
 FUNC_4(VAR_11);
nodata:
 *VAR_7 = 0;
 return ((void*)0);
}
