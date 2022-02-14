
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int transport; } ;
struct sctp_association {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,int ,int ,int ,int ) ;

struct sctp_chunk *FUNC_1(
     const struct sctp_association *VAR_3,
     const struct sctp_chunk *VAR_4)
{
 struct sctp_chunk *VAR_5;
 __u8 VAR_6 = 0;




 VAR_6 |= VAR_3 ? 0 : VAR_1;

 VAR_5 = FUNC_0(VAR_3, VAR_2, VAR_6,
       0, VAR_0);
 if (VAR_5 && VAR_4)
  VAR_5->transport = VAR_4->transport;

 return VAR_5;
}
