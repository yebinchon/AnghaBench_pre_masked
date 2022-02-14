
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_cwrhdr {int lowest_tsn; } ;
struct TYPE_2__ {int ecn_cwr_hdr; } ;
struct sctp_chunk {int transport; TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int cwr ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_cwrhdr*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int,int ) ;

struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_2,
     const __u32 VAR_3,
     const struct sctp_chunk *VAR_4)
{
 struct sctp_chunk *VAR_5;
 struct sctp_cwrhdr VAR_6;

 VAR_6.lowest_tsn = FUNC_0(VAR_3);
 VAR_5 = FUNC_2(VAR_2, VAR_1, 0,
       sizeof(VAR_6), VAR_0);

 if (!VAR_5)
  goto nodata;

 VAR_5->subh.ecn_cwr_hdr =
  FUNC_1(VAR_5, sizeof(VAR_6), &VAR_6);
 if (VAR_4)
  VAR_5->transport = VAR_4->transport;

nodata:
 return VAR_5;
}
