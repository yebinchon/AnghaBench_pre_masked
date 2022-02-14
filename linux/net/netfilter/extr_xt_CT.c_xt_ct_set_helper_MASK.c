
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xt_tgchk_param {int family; } ;
struct nf_conntrack_helper {int dummy; } ;
struct nf_conn_help {struct nf_conntrack_helper* helper; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nf_conntrack_helper*) ;
 struct nf_conntrack_helper* FUNC_1 (char const*,int ,int ) ;
 struct nf_conn_help* FUNC_2 (struct nf_conn*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct xt_tgchk_param const*) ;

__attribute__((used)) static int
FUNC_5(struct nf_conn *VAR_3, const char *VAR_4,
   const struct xt_tgchk_param *VAR_5)
{
 struct nf_conntrack_helper *VAR_6;
 struct nf_conn_help *VAR_7;
 u8 VAR_8;

 VAR_8 = FUNC_4(VAR_5);
 if (!VAR_8) {
  FUNC_3("You must specify a L4 protocol and not use inversions on it\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_5->family,
          VAR_8);
 if (VAR_6 == ((void*)0)) {
  FUNC_3("No such helper \"%s\"\n", VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_6);
  return -VAR_1;
 }

 VAR_7->helper = VAR_6;
 return 0;
}
