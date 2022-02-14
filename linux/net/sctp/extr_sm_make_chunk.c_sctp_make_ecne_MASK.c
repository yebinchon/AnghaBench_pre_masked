
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ecnehdr {int lowest_tsn; } ;
struct TYPE_2__ {int ecne_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int ecne ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_ecnehdr*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,int,int ) ;

struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_2,
      const __u32 VAR_3)
{
 struct sctp_chunk *VAR_4;
 struct sctp_ecnehdr VAR_5;

 VAR_5.lowest_tsn = FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_2, VAR_1, 0,
       sizeof(VAR_5), VAR_0);
 if (!VAR_4)
  goto nodata;
 VAR_4->subh.ecne_hdr =
  FUNC_1(VAR_4, sizeof(VAR_5), &VAR_5);

nodata:
 return VAR_4;
}
