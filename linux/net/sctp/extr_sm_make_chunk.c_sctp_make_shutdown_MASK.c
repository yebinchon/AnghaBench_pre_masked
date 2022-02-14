
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_shutdownhdr {int cum_tsn_ack; } ;
struct TYPE_3__ {int shutdown_hdr; } ;
struct sctp_chunk {int transport; TYPE_1__ subh; } ;
struct TYPE_4__ {int tsn_map; } ;
struct sctp_association {TYPE_2__ peer; } ;
typedef int shut ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_shutdownhdr*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int,int ) ;
 int FUNC_3 (int *) ;

struct sctp_chunk *FUNC_4(const struct sctp_association *VAR_2,
          const struct sctp_chunk *VAR_3)
{
 struct sctp_shutdownhdr VAR_4;
 struct sctp_chunk *VAR_5;
 __u32 VAR_6;

 VAR_6 = FUNC_3(&VAR_2->peer.tsn_map);
 VAR_4.cum_tsn_ack = FUNC_0(VAR_6);

 VAR_5 = FUNC_2(VAR_2, VAR_1, 0,
       sizeof(VAR_4), VAR_0);
 if (!VAR_5)
  goto nodata;

 VAR_5->subh.shutdown_hdr =
  FUNC_1(VAR_5, sizeof(VAR_4), &VAR_4);

 if (VAR_3)
  VAR_5->transport = VAR_3->transport;
nodata:
 return VAR_5;
}
