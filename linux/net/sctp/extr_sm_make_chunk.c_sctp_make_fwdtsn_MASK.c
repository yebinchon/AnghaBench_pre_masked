
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_fwdtsn_skip {int ssn; int stream; int new_cum_tsn; } ;
struct sctp_fwdtsn_hdr {int ssn; int stream; int new_cum_tsn; } ;
struct TYPE_2__ {int fwdtsn_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int skip ;
typedef int ftsn_hdr ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int,struct sctp_fwdtsn_skip*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,size_t,int ) ;

struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_2,
        __u32 VAR_3, size_t VAR_4,
        struct sctp_fwdtsn_skip *VAR_5)
{
 struct sctp_chunk *VAR_6 = ((void*)0);
 struct sctp_fwdtsn_hdr VAR_7;
 struct sctp_fwdtsn_skip VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_9 = (VAR_4 + 1) * sizeof(__u32);

 VAR_6 = FUNC_2(VAR_2, VAR_1, 0, VAR_9, VAR_0);

 if (!VAR_6)
  return ((void*)0);

 VAR_7.new_cum_tsn = FUNC_0(VAR_3);
 VAR_6->subh.fwdtsn_hdr =
  FUNC_1(VAR_6, sizeof(VAR_7), &VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8.stream = VAR_5[VAR_10].stream;
  VAR_8.ssn = VAR_5[VAR_10].ssn;
  FUNC_1(VAR_6, sizeof(VAR_8), &VAR_8);
 }

 return VAR_6;
}
