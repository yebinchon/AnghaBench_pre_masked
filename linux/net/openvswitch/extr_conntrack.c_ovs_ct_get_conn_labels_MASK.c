
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_labels {int dummy; } ;
struct nf_conn {int dummy; } ;


 int FUNC_0 (struct nf_conn*) ;
 struct nf_conn_labels* FUNC_1 (struct nf_conn*) ;

__attribute__((used)) static struct nf_conn_labels *FUNC_2(struct nf_conn *VAR_0)
{
 struct nf_conn_labels *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1) {
  FUNC_0(VAR_0);
  VAR_1 = FUNC_1(VAR_0);
 }

 return VAR_1;
}
