
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_packet {scalar_t__ has_auth; TYPE_1__* transport; } ;
struct sctp_chunk {TYPE_3__* shkey; int auth; TYPE_2__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
typedef enum sctp_xmit { ____Placeholder_sctp_xmit } sctp_xmit ;
struct TYPE_6__ {int key_id; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {struct sctp_association* asoc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_packet*,struct sctp_chunk*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*,int ) ;

__attribute__((used)) static enum sctp_xmit FUNC_4(struct sctp_packet *VAR_2,
           struct sctp_chunk *VAR_3)
{
 struct sctp_association *VAR_4 = VAR_2->transport->asoc;
 enum sctp_xmit VAR_5 = VAR_1;
 struct sctp_chunk *VAR_6;


 if (!VAR_4)
  return VAR_5;




 if (VAR_3->chunk_hdr->type == VAR_0 || VAR_2->has_auth)
  return VAR_5;




 if (!VAR_3->auth)
  return VAR_5;

 VAR_6 = FUNC_3(VAR_4, VAR_3->shkey->key_id);
 if (!VAR_6)
  return VAR_5;

 VAR_6->shkey = VAR_3->shkey;
 FUNC_1(VAR_6->shkey);

 VAR_5 = FUNC_0(VAR_2, VAR_6);

 if (VAR_5 != VAR_1)
  FUNC_2(VAR_6);

 return VAR_5;
}
