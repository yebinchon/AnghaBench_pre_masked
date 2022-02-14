
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int check; } ;
struct tcp_sack_block_wire {void* start_seq; void* end_seq; } ;
struct sk_buff {scalar_t__ data; } ;
struct nf_ct_seqadj {scalar_t__ offset_before; scalar_t__ offset_after; int correction_pos; } ;
typedef void* __be32 ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,struct sk_buff*,void*,void*,int) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_0,
        struct tcphdr *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3,
        struct nf_ct_seqadj *VAR_4)
{
 while (VAR_2 < VAR_3) {
  struct tcp_sack_block_wire *VAR_5;
  __be32 VAR_6, VAR_7;

  VAR_5 = (void *)VAR_0->data + VAR_2;
  if (FUNC_0(FUNC_3(VAR_5->start_seq) - VAR_4->offset_before,
     VAR_4->correction_pos))
   VAR_6 = FUNC_1(FUNC_3(VAR_5->start_seq) -
     VAR_4->offset_after);
  else
   VAR_6 = FUNC_1(FUNC_3(VAR_5->start_seq) -
     VAR_4->offset_before);

  if (FUNC_0(FUNC_3(VAR_5->end_seq) - VAR_4->offset_before,
     VAR_4->correction_pos))
   VAR_7 = FUNC_1(FUNC_3(VAR_5->end_seq) -
          VAR_4->offset_after);
  else
   VAR_7 = FUNC_1(FUNC_3(VAR_5->end_seq) -
          VAR_4->offset_before);

  FUNC_4("sack_adjust: start_seq: %u->%u, end_seq: %u->%u\n",
    FUNC_3(VAR_5->start_seq), FUNC_3(VAR_6),
    FUNC_3(VAR_5->end_seq), FUNC_3(VAR_7));

  FUNC_2(&VAR_1->check, VAR_0,
      VAR_5->start_seq, VAR_6, 0);
  FUNC_2(&VAR_1->check, VAR_0,
      VAR_5->end_seq, VAR_7, 0);
  VAR_5->start_seq = VAR_6;
  VAR_5->end_seq = VAR_7;
  VAR_2 += sizeof(*VAR_5);
 }
}
