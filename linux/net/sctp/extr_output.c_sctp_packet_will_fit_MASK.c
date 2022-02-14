
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u16 ;
struct sctp_packet {size_t size; int ipfragok; size_t overhead; size_t max_size; TYPE_5__* transport; scalar_t__ has_data; TYPE_4__* auth; } ;
struct sctp_chunk {scalar_t__ shkey; scalar_t__ auth; TYPE_1__* chunk_hdr; } ;
typedef enum sctp_xmit { ____Placeholder_sctp_xmit } sctp_xmit ;
struct TYPE_10__ {size_t pathmtu; int burst_limited; int cwnd; TYPE_2__* asoc; } ;
struct TYPE_9__ {scalar_t__ shkey; TYPE_3__* skb; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_7__ {size_t pathmtu; } ;
struct TYPE_6__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sctp_chunk*) ;
 scalar_t__ FUNC_2 (struct sctp_packet*) ;

__attribute__((used)) static enum sctp_xmit FUNC_3(struct sctp_packet *VAR_3,
        struct sctp_chunk *VAR_4,
        u16 VAR_5)
{
 enum sctp_xmit VAR_6 = VAR_1;
 size_t VAR_7, VAR_8, VAR_9;






 if ((VAR_3->auth && VAR_4->shkey != VAR_3->auth->shkey) ||
     (!VAR_3->auth && VAR_4->shkey &&
      VAR_4->chunk_hdr->type != VAR_0))
  return VAR_2;

 VAR_7 = VAR_3->size;
 if (VAR_3->transport->asoc)
  VAR_8 = VAR_3->transport->asoc->pathmtu;
 else
  VAR_8 = VAR_3->transport->pathmtu;


 if (VAR_7 + VAR_5 > VAR_8) {







  if (FUNC_2(VAR_3) ||
      (!VAR_3->has_data && VAR_4->auth)) {




   VAR_3->ipfragok = 1;
   goto out;
  }






  VAR_9 = VAR_8 - VAR_3->overhead;
  if (VAR_3->auth)
   VAR_9 -= FUNC_0(VAR_3->auth->skb->len);
  if (VAR_5 > VAR_9)
   VAR_6 = VAR_2;







  if (!FUNC_1(VAR_4) && VAR_3->has_data)
   VAR_6 = VAR_2;

  if (VAR_7 + VAR_5 > VAR_3->max_size)

   VAR_6 = VAR_2;

  if (!VAR_3->transport->burst_limited &&
      VAR_7 + VAR_5 > (VAR_3->transport->cwnd >> 1))



   VAR_6 = VAR_2;

  if (VAR_3->transport->burst_limited &&
      VAR_7 + VAR_5 > (VAR_3->transport->burst_limited >> 1))



   VAR_6 = VAR_2;

 }

out:
 return VAR_6;
}
