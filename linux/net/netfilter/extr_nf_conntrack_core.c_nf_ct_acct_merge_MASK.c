
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_counter {int bytes; } ;
struct nf_conn_acct {struct nf_conn_counter* counter; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 size_t FUNC_0 (int) ;
 unsigned int FUNC_1 (int *) ;
 struct nf_conn_acct* FUNC_2 (struct nf_conn const*) ;
 int FUNC_3 (struct nf_conn*,int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct nf_conn *VAR_0, enum ip_conntrack_info VAR_1,
        const struct nf_conn *VAR_2)
{
 struct nf_conn_acct *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  struct nf_conn_counter *VAR_4 = VAR_3->counter;
  unsigned int VAR_5;


  VAR_5 = FUNC_1(&VAR_4[FUNC_0(VAR_1)].bytes);
  FUNC_3(VAR_0, VAR_1, VAR_5);
 }
}
