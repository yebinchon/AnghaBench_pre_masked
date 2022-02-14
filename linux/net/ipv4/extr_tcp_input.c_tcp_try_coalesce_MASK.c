
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_rmem_alloc; } ;
struct sk_buff {scalar_t__ decrypted; int tstamp; } ;
struct TYPE_4__ {scalar_t__ seq; scalar_t__ end_seq; int has_rxtstamp; int tcp_flags; int ack_seq; } ;
struct TYPE_3__ {int hwtstamp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct sock*,int) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff*,int*,int*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static bool FUNC_7(struct sock *VAR_1,
        struct sk_buff *VAR_2,
        struct sk_buff *VAR_3,
        bool *VAR_4)
{
 int VAR_5;

 *VAR_4 = 0;


 if (FUNC_1(VAR_3)->seq != FUNC_1(VAR_2)->end_seq)
  return 0;






 if (!FUNC_5(VAR_2, VAR_3, VAR_4, &VAR_5))
  return 0;

 FUNC_2(VAR_5, &VAR_1->sk_rmem_alloc);
 FUNC_3(VAR_1, VAR_5);
 FUNC_0(FUNC_6(VAR_1), VAR_0);
 FUNC_1(VAR_2)->end_seq = FUNC_1(VAR_3)->end_seq;
 FUNC_1(VAR_2)->ack_seq = FUNC_1(VAR_3)->ack_seq;
 FUNC_1(VAR_2)->tcp_flags |= FUNC_1(VAR_3)->tcp_flags;

 if (FUNC_1(VAR_3)->has_rxtstamp) {
  FUNC_1(VAR_2)->has_rxtstamp = 1;
  VAR_2->tstamp = VAR_3->tstamp;
  FUNC_4(VAR_2)->hwtstamp = FUNC_4(VAR_3)->hwtstamp;
 }

 return 1;
}
