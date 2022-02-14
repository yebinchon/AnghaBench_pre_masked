
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn_help {int expectations; } ;
struct nf_conn {scalar_t__ master; TYPE_1__* tuplehash; } ;
struct TYPE_2__ {struct nf_conntrack_tuple tuple; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nf_conn*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nf_conntrack_tuple const*) ;
 int FUNC_4 (struct nf_conn*) ;
 struct nf_conn_help* FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (char*,struct nf_conn*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(struct nf_conn *VAR_2,
         const struct nf_conntrack_tuple *VAR_3)
{
 struct nf_conn_help *VAR_4 = FUNC_5(VAR_2);


 FUNC_0(FUNC_4(VAR_2));

 FUNC_6("Altering reply tuple of %p to ", VAR_2);
 FUNC_3(VAR_3);

 VAR_2->tuplehash[VAR_1].tuple = *VAR_3;
 if (VAR_2->master || (VAR_4 && !FUNC_2(&VAR_4->expectations)))
  return;

 FUNC_7();
 FUNC_1(VAR_2, ((void*)0), VAR_0);
 FUNC_8();
}
