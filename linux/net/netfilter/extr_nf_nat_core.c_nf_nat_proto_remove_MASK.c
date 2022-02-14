
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_nat_proto_clean {scalar_t__ l3proto; scalar_t__ l4proto; } ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nf_conn*) ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_2(struct nf_conn *VAR_1, void *VAR_2)
{
 const struct nf_nat_proto_clean *VAR_3 = VAR_2;

 if ((VAR_3->l3proto && FUNC_0(VAR_1) != VAR_3->l3proto) ||
     (VAR_3->l4proto && FUNC_1(VAR_1) != VAR_3->l4proto))
  return 0;

 return VAR_1->status & VAR_0 ? 1 : 0;
}
