
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct TYPE_3__ {scalar_t__ stream_timeout; scalar_t__ timeout; } ;
struct TYPE_4__ {TYPE_1__ gre; } ;
struct nf_conntrack_expect {TYPE_2__ proto; } ;
struct nf_conn {TYPE_2__ proto; } ;
struct net {int dummy; } ;


 struct nf_conntrack_tuple_hash* FUNC_0 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple const*) ;
 int FUNC_1 (struct nf_conntrack_tuple const*) ;
 struct nf_conntrack_expect* FUNC_2 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple const*) ;
 int FUNC_3 (struct nf_conntrack_expect*) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 int FUNC_5 (struct nf_conntrack_expect*) ;
 struct nf_conntrack_expect* FUNC_6 (struct nf_conntrack_tuple_hash const*) ;
 int FUNC_7 (struct nf_conntrack_expect*) ;
 struct nf_conntrack_zone* FUNC_8 (struct nf_conntrack_expect*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_0, struct nf_conn *VAR_1,
      const struct nf_conntrack_tuple *VAR_2)
{
 const struct nf_conntrack_tuple_hash *VAR_3;
 const struct nf_conntrack_zone *VAR_4;
 struct nf_conntrack_expect *VAR_5;
 struct nf_conn *VAR_6;

 FUNC_9("trying to timeout ct or exp for tuple ");
 FUNC_1(VAR_2);

 VAR_4 = FUNC_8(VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_4, VAR_2);
 if (VAR_3) {
  VAR_6 = FUNC_6(VAR_3);
  FUNC_9("setting timeout of conntrack %p to 0\n", VAR_6);
  VAR_6->proto.gre.timeout = 0;
  VAR_6->proto.gre.stream_timeout = 0;
  FUNC_4(VAR_6);
  FUNC_5(VAR_6);
  return 1;
 } else {
  VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_2);
  if (VAR_5) {
   FUNC_9("unexpect_related of expect %p\n", VAR_5);
   FUNC_7(VAR_5);
   FUNC_3(VAR_5);
   return 1;
  }
 }
 return 0;
}
