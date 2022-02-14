
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovs_key_ct_labels {int dummy; } ;
struct nf_conn_labels {int bits; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ovs_key_ct_labels*,int ,int ) ;
 int FUNC_1 (struct ovs_key_ct_labels*,int ,int ) ;
 struct nf_conn_labels* FUNC_2 (struct nf_conn const*) ;

__attribute__((used)) static void FUNC_3(const struct nf_conn *VAR_1,
         struct ovs_key_ct_labels *VAR_2)
{
 struct nf_conn_labels *VAR_3 = VAR_1 ? FUNC_2(VAR_1) : ((void*)0);

 if (VAR_3)
  FUNC_0(VAR_2, VAR_3->bits, VAR_0);
 else
  FUNC_1(VAR_2, 0, VAR_0);
}
