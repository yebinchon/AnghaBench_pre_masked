
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; int end; } ;
union sctp_sack_variable {TYPE_1__ gab; } ;
struct sctp_sackhdr {int num_gap_ack_blocks; union sctp_sack_variable* variable; } ;
struct sctp_association {int next_tsn; int ctsn_ack_point; int unack_data; } ;
typedef int __u16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sctp_association *VAR_0,
     struct sctp_sackhdr *VAR_1)
{
 union sctp_sack_variable *VAR_2;
 __u16 VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->next_tsn - VAR_0->ctsn_ack_point - 1;

 VAR_2 = VAR_1->variable;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->num_gap_ack_blocks); VAR_4++) {
  VAR_3 -= ((FUNC_0(VAR_2[VAR_4].gab.end) -
    FUNC_0(VAR_2[VAR_4].gab.start) + 1));
 }

 VAR_0->unack_data = VAR_3;
}
