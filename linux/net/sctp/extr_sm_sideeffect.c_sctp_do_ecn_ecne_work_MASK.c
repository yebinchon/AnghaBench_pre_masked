
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int last_cwr_tsn; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct sctp_transport* FUNC_1 (struct sctp_association*,int ) ;
 struct sctp_chunk* FUNC_2 (struct sctp_association*,int ,struct sctp_chunk*) ;
 int FUNC_3 (struct sctp_transport*,int ) ;

__attribute__((used)) static struct sctp_chunk *FUNC_4(struct sctp_association *VAR_1,
      __u32 VAR_2,
      struct sctp_chunk *VAR_3)
{
 struct sctp_chunk *VAR_4;
 if (FUNC_0(VAR_1->last_cwr_tsn, VAR_2)) {
  struct sctp_transport *VAR_5;




  VAR_5 = FUNC_1(VAR_1, VAR_2);


  if (VAR_5)
   FUNC_3(VAR_5,
        VAR_0);
  VAR_1->last_cwr_tsn = VAR_2;
 }




 VAR_4 = FUNC_2(VAR_1, VAR_1->last_cwr_tsn, VAR_3);




 return VAR_4;
}
