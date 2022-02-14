
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_counter {int bytes; int packets; } ;
struct nf_conn_acct {struct nf_conn_counter* counter; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (int *) ;
 struct nf_conn_acct* FUNC_3 (struct nf_conn*) ;

__attribute__((used)) static inline void FUNC_4(struct nf_conn *VAR_0,
         enum ip_conntrack_info VAR_1,
         unsigned int VAR_2)
{
 struct nf_conn_acct *VAR_3;

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3) {
  struct nf_conn_counter *VAR_4 = VAR_3->counter;

  FUNC_2(&VAR_4[FUNC_0(VAR_1)].packets);
  FUNC_1(VAR_2, &VAR_4[FUNC_0(VAR_1)].bytes);
 }
}
