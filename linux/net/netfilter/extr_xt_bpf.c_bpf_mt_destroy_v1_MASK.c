
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtdtor_param {struct xt_bpf_info_v1* matchinfo; } ;
struct xt_bpf_info_v1 {int filter; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct xt_mtdtor_param *VAR_0)
{
 const struct xt_bpf_info_v1 *VAR_1 = VAR_0->matchinfo;

 FUNC_0(VAR_1->filter);
}
