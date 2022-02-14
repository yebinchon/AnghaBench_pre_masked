
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int transport; TYPE_1__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,int ,scalar_t__,size_t const,int ) ;

struct sctp_chunk *FUNC_1(const struct sctp_association *VAR_4,
       const struct sctp_chunk *VAR_5,
       const size_t VAR_6)
{
 struct sctp_chunk *VAR_7;
 __u8 VAR_8 = 0;




 if (!VAR_4) {
  if (VAR_5 && VAR_5->chunk_hdr &&
      VAR_5->chunk_hdr->type == VAR_3)
   VAR_8 = 0;
  else
   VAR_8 = VAR_1;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_8, VAR_6,
       VAR_0);
 if (VAR_7 && VAR_5)
  VAR_7->transport = VAR_5->transport;

 return VAR_7;
}
