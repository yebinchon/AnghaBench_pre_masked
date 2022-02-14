
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_l4proto {scalar_t__ (* can_early_drop ) (struct nf_conn const*) ;} ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 struct nf_conntrack_l4proto* FUNC_0 (int ) ;
 int FUNC_1 (struct nf_conn const*) ;
 scalar_t__ FUNC_2 (struct nf_conn const*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(const struct nf_conn *VAR_1)
{
 const struct nf_conntrack_l4proto *VAR_2;

 if (!FUNC_3(VAR_0, &VAR_1->status))
  return 1;

 VAR_2 = FUNC_0(FUNC_1(VAR_1));
 if (VAR_2->can_early_drop && VAR_2->can_early_drop(VAR_1))
  return 1;

 return 0;
}
