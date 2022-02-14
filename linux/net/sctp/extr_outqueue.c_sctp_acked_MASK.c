
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end; int start; } ;
union sctp_sack_variable {TYPE_1__ gab; } ;
struct sctp_sackhdr {int num_gap_ack_blocks; union sctp_sack_variable* variable; int cum_tsn_ack; } ;
typedef int __u32 ;
typedef int __u16 ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sctp_sackhdr *VAR_0, __u32 VAR_1)
{
 __u32 VAR_2 = FUNC_1(VAR_0->cum_tsn_ack);
 union sctp_sack_variable *VAR_3;
 __u16 VAR_4, VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_1, VAR_2))
  goto pass;
 VAR_3 = VAR_0->variable;
 VAR_5 = FUNC_2(VAR_0->num_gap_ack_blocks);
 VAR_4 = VAR_1 - VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  if (VAR_4 >= FUNC_2(VAR_3[VAR_6].gab.start) &&
      VAR_4 <= FUNC_2(VAR_3[VAR_6].gab.end))
   goto pass;
 }

 return 0;
pass:
 return 1;
}
