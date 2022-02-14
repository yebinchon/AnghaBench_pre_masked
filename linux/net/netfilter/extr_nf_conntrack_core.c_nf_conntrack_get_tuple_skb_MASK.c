
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct TYPE_3__ {int dir; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct nf_conntrack_tuple_hash {TYPE_2__ tuple; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple const*,int) ;
 struct nf_conntrack_tuple_hash* FUNC_3 (int ,int *,struct nf_conntrack_tuple*) ;
 struct nf_conn* FUNC_4 (struct sk_buff const*,int*) ;
 int FUNC_5 (struct sk_buff const*,int ,int ,int ,struct nf_conntrack_tuple*) ;
 int FUNC_6 (struct nf_conn*) ;
 struct nf_conntrack_tuple* FUNC_7 (struct nf_conn*,int) ;
 struct nf_conn* FUNC_8 (struct nf_conntrack_tuple_hash const*) ;
 int VAR_1 ;
 int FUNC_9 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_10(struct nf_conntrack_tuple *VAR_2,
           const struct sk_buff *VAR_3)
{
 const struct nf_conntrack_tuple *VAR_4;
 const struct nf_conntrack_tuple_hash *VAR_5;
 struct nf_conntrack_tuple VAR_6;
 enum ip_conntrack_info VAR_7;
 struct nf_conn *VAR_8;

 VAR_8 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_8) {
  VAR_4 = FUNC_7(VAR_8, FUNC_0(VAR_7));
  FUNC_2(VAR_2, VAR_4, sizeof(*VAR_2));
  return 1;
 }

 if (!FUNC_5(VAR_3, FUNC_9(VAR_3),
          VAR_0, FUNC_1(VAR_3->dev),
          &VAR_6))
  return 0;

 VAR_5 = FUNC_3(FUNC_1(VAR_3->dev),
         &VAR_1,
         &VAR_6);
 if (!VAR_5)
  return 0;

 VAR_8 = FUNC_8(VAR_5);
 VAR_4 = FUNC_7(VAR_8, !VAR_5->tuple.dst.dir);
 FUNC_2(VAR_2, VAR_4, sizeof(*VAR_2));
 FUNC_6(VAR_8);

 return 1;
}
