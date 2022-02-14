
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hbs_hdr; } ;
struct sctp_chunk {int transport; TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*,size_t const,void const*) ;
 struct sctp_chunk* FUNC_1 (struct sctp_association const*,int ,int ,size_t const,int ) ;

struct sctp_chunk *FUNC_2(const struct sctp_association *VAR_2,
        const struct sctp_chunk *VAR_3,
        const void *VAR_4,
        const size_t VAR_5)
{
 struct sctp_chunk *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, 0, VAR_5,
        VAR_0);
 if (!VAR_6)
  goto nodata;

 VAR_6->subh.hbs_hdr = FUNC_0(VAR_6, VAR_5, VAR_4);
 if (VAR_3)
  VAR_6->transport = VAR_3->transport;

nodata:
 return VAR_6;
}
