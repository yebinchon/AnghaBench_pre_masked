
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_errhdr {int dummy; } ;
struct sctp_chunk {int transport; } ;
struct sctp_association {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,int ,int ,int,int ) ;

__attribute__((used)) static struct sctp_chunk *FUNC_1(
     const struct sctp_association *VAR_2,
     const struct sctp_chunk *VAR_3,
     size_t VAR_4)
{
 struct sctp_chunk *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, 0,
       sizeof(struct sctp_errhdr) + VAR_4,
       VAR_0);
 if (!VAR_5)
  goto nodata;
 if (VAR_3)
  VAR_5->transport = VAR_3->transport;

nodata:
 return VAR_5;
}
