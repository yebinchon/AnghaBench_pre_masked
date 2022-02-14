
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xt_tgchk_param {int family; int net; } ;
struct nf_conntrack_l4proto {int l4proto; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conntrack_l4proto* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct nf_conn*,int ,int ,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct xt_tgchk_param const*) ;

__attribute__((used)) static int
FUNC_4(struct nf_conn *VAR_2, const struct xt_tgchk_param *VAR_3,
    const char *VAR_4)
{
 return -VAR_1;

}
