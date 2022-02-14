
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_helper {int dummy; } ;
struct nf_conntrack_expect {struct nf_conntrack_helper const* helper; int master; } ;
struct nf_conn_help {int helper; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct nf_conn_help* FUNC_1 (int ) ;
 struct nf_conntrack_helper* FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct nf_conntrack_expect *VAR_1, void *VAR_2)
{
 struct nf_conn_help *VAR_3 = FUNC_1(VAR_1->master);
 const struct nf_conntrack_helper *VAR_4 = VAR_2;
 const struct nf_conntrack_helper *VAR_5;

 if (VAR_1->helper == VAR_4)
  return 1;

 VAR_5 = FUNC_2(VAR_3->helper,
      FUNC_0(&VAR_0));
 return VAR_5 == VAR_4;
}
