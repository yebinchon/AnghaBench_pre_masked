
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_transport {int hb_nonce; int ipaddr; } ;
struct TYPE_3__ {int length; int type; } ;
struct sctp_sender_hb_info {int hb_nonce; int sent_at; int daddr; TYPE_1__ param_hdr; } ;
struct TYPE_4__ {int hbs_hdr; } ;
struct sctp_chunk {TYPE_2__ subh; struct sctp_transport* transport; } ;
struct sctp_association {int dummy; } ;
typedef int hbinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_sender_hb_info*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int,int ) ;

struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_4,
           const struct sctp_transport *VAR_5)
{
 struct sctp_sender_hb_info VAR_6;
 struct sctp_chunk *VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_1, 0,
       sizeof(VAR_6), VAR_0);

 if (!VAR_7)
  goto nodata;

 VAR_6.param_hdr.type = VAR_2;
 VAR_6.param_hdr.length = FUNC_0(sizeof(VAR_6));
 VAR_6.daddr = VAR_5->ipaddr;
 VAR_6.sent_at = VAR_3;
 VAR_6.hb_nonce = VAR_5->hb_nonce;




 VAR_7->transport = (struct sctp_transport *) VAR_5;
 VAR_7->subh.hbs_hdr = FUNC_1(VAR_7, sizeof(VAR_6),
      &VAR_6);

nodata:
 return VAR_7;
}
