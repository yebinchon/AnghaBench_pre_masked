
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {int protonum; } ;
struct nf_conntrack_tuple {TYPE_1__ dst; } ;
struct nf_conntrack_l4proto {int (* nlattr_to_tuple ) (struct nlattr**,struct nf_conntrack_tuple*) ;int nla_policy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int (*) (struct nlattr**,struct nf_conntrack_tuple*)) ;
 struct nf_conntrack_l4proto* FUNC_1 (int ) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_4 (struct nlattr*,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct nlattr**,struct nf_conntrack_tuple*) ;

__attribute__((used)) static int FUNC_8(struct nlattr *VAR_4,
           struct nf_conntrack_tuple *VAR_5)
{
 const struct nf_conntrack_l4proto *VAR_6;
 struct nlattr *VAR_7[VAR_0+1];
 int VAR_8 = 0;

 VAR_8 = FUNC_3(VAR_7, VAR_0, VAR_4,
       VAR_3, ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_7[VAR_1])
  return -VAR_2;
 VAR_5->dst.protonum = FUNC_2(VAR_7[VAR_1]);

 FUNC_5();
 VAR_6 = FUNC_1(VAR_5->dst.protonum);

 if (FUNC_0(VAR_6->nlattr_to_tuple)) {
  VAR_8 = FUNC_4(VAR_4, VAR_0,
           VAR_6->nla_policy,
           ((void*)0));
  if (VAR_8 == 0)
   VAR_8 = VAR_6->nlattr_to_tuple(VAR_7, VAR_5);
 }

 FUNC_6();

 return VAR_8;
}
