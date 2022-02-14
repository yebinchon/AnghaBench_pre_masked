
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_nat {int masq_index; } ;
struct nf_conn {int dummy; } ;


 struct nf_conn_nat* FUNC_0 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_1(struct nf_conn *VAR_0, void *VAR_1)
{
 const struct nf_conn_nat *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return 0;
 return VAR_2->masq_index == (int)(long)VAR_1;
}
