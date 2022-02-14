
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int * s6_addr32; } ;
struct sock {int sk_drops; int sk_refcnt; int sk_state; struct in6_addr sk_v6_rcv_saddr; struct in6_addr sk_v6_daddr; } ;
struct seq_file {int dummy; } ;
typedef int __u16 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,long,int ,int ,int ,int ,int ,struct sock*,int ) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(struct seq_file *VAR_0, struct sock *VAR_1,
          __u16 VAR_2, __u16 VAR_3, int VAR_4, int VAR_5)
{
 const struct in6_addr *VAR_6, *VAR_7;

 VAR_6 = &VAR_1->sk_v6_daddr;
 VAR_7 = &VAR_1->sk_v6_rcv_saddr;
 FUNC_3(VAR_0,
     "%5d: %08X%08X%08X%08X:%04X %08X%08X%08X%08X:%04X "
     "%02X %08X:%08X %02X:%08lX %08X %5u %8d %lu %d %pK %u\n",
     VAR_5,
     VAR_7->s6_addr32[0], VAR_7->s6_addr32[1],
     VAR_7->s6_addr32[2], VAR_7->s6_addr32[3], VAR_2,
     VAR_6->s6_addr32[0], VAR_6->s6_addr32[1],
     VAR_6->s6_addr32[2], VAR_6->s6_addr32[3], VAR_3,
     VAR_1->sk_state,
     FUNC_5(VAR_1),
     VAR_4,
     0, 0L, 0,
     FUNC_1(FUNC_4(VAR_0), FUNC_7(VAR_1)),
     0,
     FUNC_6(VAR_1),
     FUNC_2(&VAR_1->sk_refcnt), VAR_1,
     FUNC_0(&VAR_1->sk_drops));
}
