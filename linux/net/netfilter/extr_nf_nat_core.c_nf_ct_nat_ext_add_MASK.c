
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_nat {int dummy; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conn_nat* FUNC_0 (struct nf_conn*,int ,int ) ;
 int FUNC_1 (struct nf_conn*) ;
 struct nf_conn_nat* FUNC_2 (struct nf_conn*) ;

struct nf_conn_nat *FUNC_3(struct nf_conn *VAR_2)
{
 struct nf_conn_nat *VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (!FUNC_1(VAR_2))
  VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0);

 return VAR_3;
}
