
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {int transport; scalar_t__ auth_chunk; struct sctp_chunkhdr* chunk_hdr; int sctp_hdr; int asoc; scalar_t__ skb; } ;
struct TYPE_3__ {int auth_capable; } ;
struct sctp_association {TYPE_1__ peer; } ;
struct TYPE_4__ {int auth_enable; } ;
struct net {TYPE_2__ sctp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static bool FUNC_3(struct net *VAR_1, struct sctp_chunk *VAR_2,
       const struct sctp_association *VAR_3)
{
 struct sctp_chunk VAR_4;

 if (!VAR_2->auth_chunk)
  return 1;
 if (!VAR_1->sctp.auth_enable || !VAR_3->peer.auth_capable)
  return 0;


 VAR_4.skb = VAR_2->auth_chunk;
 VAR_4.asoc = VAR_2->asoc;
 VAR_4.sctp_hdr = VAR_2->sctp_hdr;
 VAR_4.chunk_hdr = (struct sctp_chunkhdr *)
    FUNC_2(VAR_2->auth_chunk,
      sizeof(struct sctp_chunkhdr));
 FUNC_1(VAR_2->auth_chunk, sizeof(struct sctp_chunkhdr));
 VAR_4.transport = VAR_2->transport;

 return FUNC_0(VAR_3, &VAR_4) == VAR_0;
}
