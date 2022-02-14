
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_sndrcvinfo {int sinfo_flags; int sinfo_stream; } ;
struct sctp_idatahdr {int stream; } ;
struct TYPE_2__ {int idata_hdr; } ;
struct sctp_chunk {int sinfo; TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;
typedef int dp ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct sctp_sndrcvinfo const*,int) ;
 int FUNC_2 (struct sctp_idatahdr*,int ,int) ;
 int FUNC_3 (struct sctp_chunk*,int,struct sctp_idatahdr*) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,int ,int,int ) ;

__attribute__((used)) static struct sctp_chunk *FUNC_5(
     const struct sctp_association *VAR_2,
     const struct sctp_sndrcvinfo *VAR_3,
     int VAR_4, __u8 VAR_5, gfp_t VAR_6)
{
 struct sctp_chunk *VAR_7;
 struct sctp_idatahdr VAR_8;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.stream = FUNC_0(VAR_3->sinfo_stream);

 if (VAR_3->sinfo_flags & VAR_1)
  VAR_5 |= VAR_0;

 VAR_7 = FUNC_4(VAR_2, VAR_5, sizeof(VAR_8) + VAR_4, VAR_6);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->subh.idata_hdr = FUNC_3(VAR_7, sizeof(VAR_8), &VAR_8);
 FUNC_1(&VAR_7->sinfo, VAR_3, sizeof(struct sctp_sndrcvinfo));

 return VAR_7;
}
