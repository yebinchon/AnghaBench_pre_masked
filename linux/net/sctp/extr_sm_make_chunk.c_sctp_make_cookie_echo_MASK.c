
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cookie_hdr; } ;
struct sctp_chunk {int transport; TYPE_2__ subh; } ;
struct TYPE_3__ {int cookie_len; void* cookie; } ;
struct sctp_association {TYPE_1__ peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*,int,void*) ;
 struct sctp_chunk* FUNC_1 (struct sctp_association const*,int ,int ,int,int ) ;

struct sctp_chunk *FUNC_2(const struct sctp_association *VAR_2,
      const struct sctp_chunk *VAR_3)
{
 struct sctp_chunk *VAR_4;
 int VAR_5;
 void *VAR_6;

 VAR_6 = VAR_2->peer.cookie;
 VAR_5 = VAR_2->peer.cookie_len;


 VAR_4 = FUNC_1(VAR_2, VAR_1, 0,
       VAR_5, VAR_0);
 if (!VAR_4)
  goto nodata;
 VAR_4->subh.cookie_hdr =
  FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_3)
  VAR_4->transport = VAR_3->transport;

nodata:
 return VAR_4;
}
