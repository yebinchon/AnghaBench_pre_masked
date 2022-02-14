
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ source; scalar_t__ dest; int len; } ;
struct sk_buff {int len; } ;
struct nf_conn {int status; } ;
struct iphdr {int ihl; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int VAR_7 ;
 unsigned int FUNC_6 (struct nf_conn*,int,struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_8, unsigned int VAR_9,
  struct nf_conn *VAR_10,
  enum ip_conntrack_info VAR_11)
{
 int VAR_12 = FUNC_0(VAR_11);
 unsigned int VAR_13;
 const struct iphdr *VAR_14 = FUNC_2(VAR_8);
 const struct udphdr *VAR_15 = (struct udphdr *)((__be32 *)VAR_14 + VAR_14->ihl);


 if (VAR_15->source == FUNC_1(VAR_5) && VAR_12 != VAR_2)
  return VAR_3;
 if (VAR_15->dest == FUNC_1(VAR_6) && VAR_12 != VAR_1)
  return VAR_3;


 if (!(VAR_10->status & VAR_0))
  return VAR_3;






 if (FUNC_4(VAR_15->len) != VAR_8->len - (VAR_14->ihl << 2)) {
  FUNC_3(VAR_8, VAR_10, "dropping malformed packet\n");
  return VAR_4;
 }

 if (FUNC_5(VAR_8, VAR_8->len)) {
  FUNC_3(VAR_8, VAR_10, "cannot mangle packet");
  return VAR_4;
 }

 FUNC_7(&VAR_7);
 VAR_13 = FUNC_6(VAR_10, VAR_12, VAR_8);
 FUNC_8(&VAR_7);
 return VAR_13;
}
