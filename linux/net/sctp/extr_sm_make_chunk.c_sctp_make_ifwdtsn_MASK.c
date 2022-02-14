
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ifwdtsn_skip {int new_cum_tsn; } ;
struct sctp_ifwdtsn_hdr {int new_cum_tsn; } ;
struct TYPE_2__ {int ifwdtsn_hdr; } ;
struct sctp_chunk {TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int skiplist ;
typedef int ftsn_hdr ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,size_t,struct sctp_ifwdtsn_skip*) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association const*,int ,int ,size_t,int ) ;

struct sctp_chunk *FUNC_3(const struct sctp_association *VAR_2,
         __u32 VAR_3, size_t VAR_4,
         struct sctp_ifwdtsn_skip *VAR_5)
{
 struct sctp_chunk *VAR_6 = ((void*)0);
 struct sctp_ifwdtsn_hdr VAR_7;
 size_t VAR_8;

 VAR_8 = (VAR_4 + 1) * sizeof(__u32);

 VAR_6 = FUNC_2(VAR_2, VAR_1, 0, VAR_8,
       VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7.new_cum_tsn = FUNC_0(VAR_3);
 VAR_6->subh.ifwdtsn_hdr =
  FUNC_1(VAR_6, sizeof(VAR_7), &VAR_7);

 FUNC_1(VAR_6, VAR_4 * sizeof(VAR_5[0]), VAR_5);

 return VAR_6;
}
