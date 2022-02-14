
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgdtor_param {int family; int net; } ;
struct xt_ct_target_info_v1 {struct nf_conn* ct; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nf_conn*) ;
 struct nf_conn_help* FUNC_4 (struct nf_conn*) ;

__attribute__((used)) static void FUNC_5(const struct xt_tgdtor_param *VAR_0,
        struct xt_ct_target_info_v1 *VAR_1)
{
 struct nf_conn *VAR_2 = VAR_1->ct;
 struct nf_conn_help *VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3)
   FUNC_0(VAR_3->helper);

  FUNC_2(VAR_0->net, VAR_0->family);

  FUNC_1(VAR_2);
  FUNC_3(VAR_1->ct);
 }
}
