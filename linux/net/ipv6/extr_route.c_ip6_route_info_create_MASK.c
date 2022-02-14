
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nexthop {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct fib6_table {int dummy; } ;
struct fib6_nh {struct net_device* fib_nh_dev; } ;
struct TYPE_10__ {int plen; int addr; } ;
struct TYPE_9__ {int plen; int addr; } ;
struct TYPE_8__ {int plen; int addr; } ;
struct fib6_info {int dst_nocount; scalar_t__ fib6_protocol; int fib6_flags; int dst_host; TYPE_5__ fib6_prefsrc; struct fib6_nh* fib6_nh; struct nexthop* nh; TYPE_4__ fib6_src; TYPE_3__ fib6_dst; int fib6_type; int fib6_metric; struct fib6_table* fib6_table; struct dst_metrics* fib6_metrics; } ;
struct TYPE_7__ {TYPE_1__* nlh; struct net* nl_net; } ;
struct fib6_config {int fc_flags; scalar_t__ fc_type; int fc_dst_len; int fc_src_len; scalar_t__ fc_protocol; int fc_prefsrc; int fc_dst; int fc_src; int fc_metric; int fc_expires; int fc_mx_len; int fc_mx; int fc_table; TYPE_2__ fc_nlinfo; int fc_nh_id; } ;
struct dst_metrics {int dummy; } ;
typedef int gfp_t ;
struct TYPE_6__ {int nlmsg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fib6_info* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dst_metrics*) ;
 int VAR_3 ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int FUNC_3 (struct dst_metrics*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_15 ;
 int FUNC_5 (struct nexthop*,struct fib6_config*,struct netlink_ext_ack*) ;
 int FUNC_6 (struct fib6_info*) ;
 struct fib6_table* FUNC_7 (struct net*,int ) ;
 struct fib6_info* FUNC_8 (int ,int) ;
 int FUNC_9 (struct fib6_info*) ;
 scalar_t__ FUNC_10 (int,struct net_device*,int) ;
 struct fib6_table* FUNC_11 (struct net*,int ) ;
 int FUNC_12 (struct net*,struct fib6_nh*,struct fib6_config*,int ,struct netlink_ext_ack*) ;
 int FUNC_13 (struct fib6_info*,scalar_t__) ;
 struct dst_metrics* FUNC_14 (struct net*,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct net*,int *,struct net_device*,int ) ;
 scalar_t__ VAR_16 ;
 struct fib6_nh* FUNC_19 (struct nexthop*) ;
 struct nexthop* FUNC_20 (struct net*,int ) ;
 int FUNC_21 (struct nexthop*) ;
 int FUNC_22 (char*) ;

__attribute__((used)) static struct fib6_info *FUNC_23(struct fib6_config *VAR_17,
           gfp_t VAR_18,
           struct netlink_ext_ack *VAR_19)
{
 struct net *VAR_20 = VAR_17->fc_nlinfo.nl_net;
 struct fib6_info *VAR_21 = ((void*)0);
 struct nexthop *VAR_22 = ((void*)0);
 struct fib6_table *VAR_23;
 struct fib6_nh *VAR_24;
 int VAR_25 = -VAR_0;
 int VAR_26;


 if (VAR_17->fc_flags & VAR_9) {
  FUNC_2(VAR_19, "Userspace can not set RTF_PCPU");
  goto out;
 }


 if (VAR_17->fc_flags & VAR_5) {
  FUNC_2(VAR_19, "Userspace can not set RTF_CACHE");
  goto out;
 }

 if (VAR_17->fc_type > VAR_11) {
  FUNC_2(VAR_19, "Invalid route type");
  goto out;
 }

 if (VAR_17->fc_dst_len > 128) {
  FUNC_2(VAR_19, "Invalid prefix length");
  goto out;
 }
 if (VAR_17->fc_src_len > 128) {
  FUNC_2(VAR_19, "Invalid source address length");
  goto out;
 }

 if (VAR_17->fc_src_len) {
  FUNC_2(VAR_19,
          "Specifying source address requires IPV6_SUBTREES to be enabled");
  goto out;
 }

 if (VAR_17->fc_nh_id) {
  VAR_22 = FUNC_20(VAR_20, VAR_17->fc_nh_id);
  if (!VAR_22) {
   FUNC_2(VAR_19, "Nexthop id does not exist");
   goto out;
  }
  VAR_25 = FUNC_5(VAR_22, VAR_17, VAR_19);
  if (VAR_25)
   goto out;
 }

 VAR_25 = -VAR_1;
 if (VAR_17->fc_nlinfo.nlh &&
     !(VAR_17->fc_nlinfo.nlh->nlmsg_flags & VAR_3)) {
  VAR_23 = FUNC_7(VAR_20, VAR_17->fc_table);
  if (!VAR_23) {
   FUNC_22("NLM_F_CREATE should be specified when creating new route\n");
   VAR_23 = FUNC_11(VAR_20, VAR_17->fc_table);
  }
 } else {
  VAR_23 = FUNC_11(VAR_20, VAR_17->fc_table);
 }

 if (!VAR_23)
  goto out;

 VAR_25 = -VAR_2;
 VAR_21 = FUNC_8(VAR_18, !VAR_22);
 if (!VAR_21)
  goto out;

 VAR_21->fib6_metrics = FUNC_14(VAR_20, VAR_17->fc_mx, VAR_17->fc_mx_len,
            VAR_19);
 if (FUNC_1(VAR_21->fib6_metrics)) {
  VAR_25 = FUNC_3(VAR_21->fib6_metrics);

  VAR_21->fib6_metrics = (struct dst_metrics *)&VAR_15;
  goto out;
 }

 if (VAR_17->fc_flags & VAR_4)
  VAR_21->dst_nocount = 1;

 if (VAR_17->fc_flags & VAR_6)
  FUNC_13(VAR_21, VAR_16 +
    FUNC_4(VAR_17->fc_expires));
 else
  FUNC_6(VAR_21);

 if (VAR_17->fc_protocol == VAR_14)
  VAR_17->fc_protocol = VAR_13;
 VAR_21->fib6_protocol = VAR_17->fc_protocol;

 VAR_21->fib6_table = VAR_23;
 VAR_21->fib6_metric = VAR_17->fc_metric;
 VAR_21->fib6_type = VAR_17->fc_type ? : VAR_12;
 VAR_21->fib6_flags = VAR_17->fc_flags & ~VAR_7;

 FUNC_16(&VAR_21->fib6_dst.addr, &VAR_17->fc_dst, VAR_17->fc_dst_len);
 VAR_21->fib6_dst.plen = VAR_17->fc_dst_len;
 if (VAR_21->fib6_dst.plen == 128)
  VAR_21->dst_host = 1;





 if (VAR_22) {
  if (!FUNC_21(VAR_22)) {
   FUNC_2(VAR_19, "Nexthop has been deleted");
   goto out;
  }
  if (VAR_21->fib6_src.plen) {
   FUNC_2(VAR_19, "Nexthops can not be used with source routing");
   goto out;
  }
  VAR_21->nh = VAR_22;
  VAR_24 = FUNC_19(VAR_21->nh);
 } else {
  VAR_25 = FUNC_12(VAR_20, VAR_21->fib6_nh, VAR_17, VAR_18, VAR_19);
  if (VAR_25)
   goto out;

  VAR_24 = VAR_21->fib6_nh;




  VAR_26 = FUNC_17(&VAR_17->fc_dst);
  if (FUNC_10(VAR_17->fc_flags, VAR_21->fib6_nh->fib_nh_dev,
       VAR_26))
   VAR_21->fib6_flags = VAR_10 | VAR_8;
 }

 if (!FUNC_15(&VAR_17->fc_prefsrc)) {
  struct net_device *VAR_27 = VAR_24->fib_nh_dev;

  if (!FUNC_18(VAR_20, &VAR_17->fc_prefsrc, VAR_27, 0)) {
   FUNC_2(VAR_19, "Invalid source address");
   VAR_25 = -VAR_0;
   goto out;
  }
  VAR_21->fib6_prefsrc.addr = VAR_17->fc_prefsrc;
  VAR_21->fib6_prefsrc.plen = 128;
 } else
  VAR_21->fib6_prefsrc.plen = 0;

 return VAR_21;
out:
 FUNC_9(VAR_21);
 return FUNC_0(VAR_25);
}
