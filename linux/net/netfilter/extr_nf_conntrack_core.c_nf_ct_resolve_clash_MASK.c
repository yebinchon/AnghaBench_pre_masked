
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_l4proto {scalar_t__ allow_clash; } ;
struct TYPE_2__ {int use; } ;
struct nf_conn {int status; TYPE_1__ ct_general; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct nf_conn*,int,struct nf_conn*) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (struct nf_conn*) ;
 struct nf_conntrack_l4proto* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct nf_conn*,struct nf_conn*) ;
 int FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (struct nf_conn*) ;
 int FUNC_10 (struct sk_buff*,struct nf_conn*,int) ;
 struct nf_conn* FUNC_11 (struct nf_conntrack_tuple_hash*) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_4, struct sk_buff *VAR_5,
          enum ip_conntrack_info VAR_6,
          struct nf_conntrack_tuple_hash *VAR_7)
{

 struct nf_conn *VAR_8 = FUNC_11(VAR_7);
 const struct nf_conntrack_l4proto *VAR_9;
 enum ip_conntrack_info VAR_10;
 struct nf_conn *VAR_11 = FUNC_4(VAR_5, &VAR_10);

 VAR_9 = FUNC_6(FUNC_8(VAR_8));
 if (VAR_9->allow_clash &&
     !FUNC_5(VAR_8) &&
     FUNC_1(&VAR_8->ct_general.use)) {
  if (((VAR_8->status & VAR_0) == 0) ||
      FUNC_7(VAR_8, VAR_11)) {
   FUNC_3(VAR_8, VAR_6, VAR_11);
   FUNC_2(&VAR_11->ct_general);
   FUNC_10(VAR_5, VAR_8, VAR_10);
   return VAR_1;
  }
  FUNC_9(VAR_8);
 }
 FUNC_0(VAR_4, VAR_3);
 return VAR_2;
}
