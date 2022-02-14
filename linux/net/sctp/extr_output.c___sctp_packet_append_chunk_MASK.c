
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_packet {int has_sack; int has_auth; int has_data; int has_cookie_echo; int transport; int size; int chunk_list; struct sctp_chunk* auth; } ;
struct sctp_chunk {int transport; int list; TYPE_3__* asoc; int sent_count; int sent_at; TYPE_1__* chunk_hdr; } ;
typedef enum sctp_xmit { ____Placeholder_sctp_xmit } sctp_xmit ;
typedef scalar_t__ __u16 ;
struct TYPE_5__ {int osacks; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {int type; int length; } ;







 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_packet*,struct sctp_chunk*) ;
 int FUNC_4 (struct sctp_packet*,struct sctp_chunk*,scalar_t__) ;

__attribute__((used)) static enum sctp_xmit FUNC_5(struct sctp_packet *VAR_2,
       struct sctp_chunk *VAR_3)
{
 __u16 VAR_4 = FUNC_0(FUNC_2(VAR_3->chunk_hdr->length));
 enum sctp_xmit VAR_5 = VAR_0;


 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_5 != VAR_0)
  goto finish;


 switch (VAR_3->chunk_hdr->type) {
 case 130:
 case 129:

  FUNC_3(VAR_2, VAR_3);

  VAR_2->has_sack = 1;

  VAR_2->has_auth = 1;

  VAR_2->has_data = 1;

  VAR_3->sent_at = VAR_1;

  VAR_3->sent_count++;
  break;
 case 131:
  VAR_2->has_cookie_echo = 1;
  break;

 case 128:
  VAR_2->has_sack = 1;
  if (VAR_3->asoc)
   VAR_3->asoc->stats.osacks++;
  break;

 case 132:
  VAR_2->has_auth = 1;
  VAR_2->auth = VAR_3;
  break;
 }


 FUNC_1(&VAR_3->list, &VAR_2->chunk_list);
 VAR_2->size += VAR_4;
 VAR_3->transport = VAR_2->transport;
finish:
 return VAR_5;
}
