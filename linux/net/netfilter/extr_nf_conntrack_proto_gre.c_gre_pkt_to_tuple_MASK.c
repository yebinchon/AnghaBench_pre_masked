
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pptp_gre_header {int flags; scalar_t__ protocol; int call_id; } ;
struct TYPE_10__ {int key; } ;
struct TYPE_11__ {TYPE_4__ gre; scalar_t__ all; } ;
struct TYPE_12__ {TYPE_5__ u; } ;
struct TYPE_7__ {int key; } ;
struct TYPE_8__ {TYPE_1__ gre; scalar_t__ all; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct nf_conntrack_tuple {TYPE_6__ src; TYPE_3__ dst; } ;
struct net {int dummy; } ;
struct gre_base_hdr {int flags; scalar_t__ protocol; int call_id; } ;
typedef int _grehdr ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,struct nf_conntrack_tuple*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 struct pptp_gre_header* FUNC_3 (struct sk_buff const*,unsigned int,int,struct pptp_gre_header*) ;

bool FUNC_4(const struct sk_buff *VAR_3, unsigned int VAR_4,
        struct net *VAR_5, struct nf_conntrack_tuple *VAR_6)
{
 const struct pptp_gre_header *VAR_7;
 struct pptp_gre_header VAR_8;
 __be16 VAR_9;
 const struct gre_base_hdr *VAR_10;
 struct gre_base_hdr VAR_11;


 VAR_10 = FUNC_3(VAR_3, VAR_4, sizeof(VAR_11), &VAR_11);
 if (!VAR_10 || (VAR_10->flags & VAR_1) != VAR_2) {

  VAR_6->src.u.all = 0;
  VAR_6->dst.u.all = 0;
  return 1;
 }


 VAR_7 = FUNC_3(VAR_3, VAR_4, 8, &VAR_8);
 if (!VAR_7)
  return 1;

 if (VAR_10->protocol != VAR_0) {
  FUNC_2("Unsupported GRE proto(0x%x)\n", FUNC_1(VAR_10->protocol));
  return 0;
 }

 VAR_6->dst.u.gre.key = VAR_7->call_id;
 VAR_9 = FUNC_0(VAR_5, VAR_6);
 VAR_6->src.u.gre.key = VAR_9;

 return 1;
}
