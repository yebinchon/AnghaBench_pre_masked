
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct dccp_ackvec_record {int avr_ack_runlen; scalar_t__ avr_ack_ackno; scalar_t__ avr_ack_seqno; int avr_node; int avr_ack_nonce; scalar_t__ avr_ack_ptr; } ;
struct dccp_ackvec {int av_records; scalar_t__ av_overflow; scalar_t__ av_buf_head; scalar_t__ av_buf; scalar_t__ av_buf_ackno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dccp_ackvec*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,unsigned long long,unsigned long long,int ) ;
 struct dccp_ackvec_record* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(struct dccp_ackvec *VAR_3, u64 VAR_4, u8 VAR_5)
{
 struct dccp_ackvec_record *VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->avr_ack_seqno = VAR_4;
 VAR_6->avr_ack_ptr = VAR_3->av_buf_head;
 VAR_6->avr_ack_ackno = VAR_3->av_buf_ackno;
 VAR_6->avr_ack_nonce = VAR_5;
 VAR_6->avr_ack_runlen = FUNC_1(VAR_3->av_buf + VAR_3->av_buf_head);






 if (VAR_3->av_overflow)
  FUNC_0(VAR_3);




 FUNC_4(&VAR_6->avr_node, &VAR_3->av_records);

 FUNC_2("Added Vector, ack_seqno=%llu, ack_ackno=%llu (rl=%u)\n",
        (unsigned long long)VAR_6->avr_ack_seqno,
        (unsigned long long)VAR_6->avr_ack_ackno,
        VAR_6->avr_ack_runlen);
 return 0;
}
