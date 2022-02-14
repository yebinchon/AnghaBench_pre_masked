
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {TYPE_1__* transport; } ;
struct sctp_association {int dummy; } ;
struct TYPE_2__ {int ipaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sctp_association const*,int *) ;
 struct sctp_chunk* FUNC_1 (struct sctp_association const*,int ,int ,int ,int ) ;

struct sctp_chunk *FUNC_2(const struct sctp_association *VAR_2,
     const struct sctp_chunk *VAR_3)
{
 struct sctp_chunk *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, 0, 0, VAR_0);
 if (VAR_4 && VAR_3 && VAR_3->transport)
  VAR_4->transport =
   FUNC_0(VAR_2,
      &VAR_3->transport->ipaddr);

 return VAR_4;
}
