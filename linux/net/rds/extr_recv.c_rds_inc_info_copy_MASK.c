
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rds_info_message {scalar_t__ flags; int fport; int lport; void* faddr; void* laddr; int tos; int len; int seq; } ;
struct rds_info_iterator {int dummy; } ;
struct TYPE_4__ {int h_dport; int h_sport; int h_len; int h_sequence; } ;
struct rds_incoming {TYPE_2__ i_hdr; TYPE_1__* i_conn; } ;
typedef int minfo ;
typedef void* __be32 ;
struct TYPE_3__ {int c_tos; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rds_info_iterator*,struct rds_info_message*,int) ;

void FUNC_3(struct rds_incoming *VAR_0,
         struct rds_info_iterator *VAR_1,
         __be32 VAR_2, __be32 VAR_3, int VAR_4)
{
 struct rds_info_message VAR_5;

 VAR_5.seq = FUNC_1(VAR_0->i_hdr.h_sequence);
 VAR_5.len = FUNC_0(VAR_0->i_hdr.h_len);
 VAR_5.tos = VAR_0->i_conn->c_tos;

 if (VAR_4) {
  VAR_5.laddr = VAR_3;
  VAR_5.faddr = VAR_2;
  VAR_5.lport = VAR_0->i_hdr.h_dport;
  VAR_5.fport = VAR_0->i_hdr.h_sport;
 } else {
  VAR_5.laddr = VAR_2;
  VAR_5.faddr = VAR_3;
  VAR_5.lport = VAR_0->i_hdr.h_sport;
  VAR_5.fport = VAR_0->i_hdr.h_dport;
 }

 VAR_5.flags = 0;

 FUNC_2(VAR_1, &VAR_5, sizeof(VAR_5));
}
