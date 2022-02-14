
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int protonum; } ;
struct nf_conntrack_tuple {TYPE_1__ dst; } ;
struct nf_conntrack_l4proto {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct nf_conntrack_tuple const*) ;
 int FUNC_1 (struct sk_buff*,struct nf_conntrack_tuple const*,struct nf_conntrack_l4proto const*) ;
 struct nf_conntrack_l4proto* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0,
     const struct nf_conntrack_tuple *VAR_1)
{
 const struct nf_conntrack_l4proto *VAR_2;
 int VAR_3;

 FUNC_3();
 VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3 >= 0) {
  VAR_2 = FUNC_2(VAR_1->dst.protonum);
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 FUNC_4();
 return VAR_3;
}
