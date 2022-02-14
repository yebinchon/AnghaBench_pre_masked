
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int ifindex; } ;
struct net {int dummy; } ;
struct ipt_clusterip_tgt_info {int hash_initval; int hash_mode; int num_total_nodes; int clustermac; } ;
struct clusterip_net {int lock; int mutex; int procdir; int configs; } ;
struct clusterip_config {int list; int entries; int pde; int refcount; struct net* net; int hash_initval; int hash_mode; int num_total_nodes; int clusterip; int clustermac; int ifname; int ifindex; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct clusterip_config* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct clusterip_config*,struct ipt_clusterip_tgt_info const*) ;
 int FUNC_3 (struct clusterip_config*) ;
 struct clusterip_net* FUNC_4 (struct net*) ;
 int VAR_6 ;
 struct net_device* FUNC_5 (struct net*,char const*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct clusterip_config*) ;
 struct clusterip_config* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int,int ,int *,struct clusterip_config*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char*,char*,int *) ;
 int FUNC_21 (int ,int ) ;

__attribute__((used)) static struct clusterip_config *
FUNC_22(struct net *VAR_7, const struct ipt_clusterip_tgt_info *VAR_8,
        __be32 VAR_9, const char *VAR_10)
{
 struct clusterip_net *VAR_11 = FUNC_4(VAR_7);
 struct clusterip_config *VAR_12;
 struct net_device *VAR_13;
 int VAR_14;

 if (VAR_10[0] == '\0') {
  FUNC_15("Please specify an interface name\n");
  return FUNC_0(-VAR_1);
 }

 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return FUNC_0(-VAR_3);

 VAR_13 = FUNC_5(VAR_7, VAR_10);
 if (!VAR_13) {
  FUNC_15("no such interface %s\n", VAR_10);
  FUNC_8(VAR_12);
  return FUNC_0(-VAR_2);
 }
 VAR_12->ifindex = VAR_13->ifindex;
 FUNC_21(VAR_12->ifname, VAR_13->name);
 FUNC_12(&VAR_12->clustermac, &VAR_8->clustermac, VAR_4);
 FUNC_6(VAR_13, VAR_12->clustermac);
 FUNC_7(VAR_13);

 VAR_12->clusterip = VAR_9;
 VAR_12->num_total_nodes = VAR_8->num_total_nodes;
 FUNC_2(VAR_12, VAR_8);
 VAR_12->hash_mode = VAR_8->hash_mode;
 VAR_12->hash_initval = VAR_8->hash_initval;
 VAR_12->net = VAR_7;
 FUNC_17(&VAR_12->refcount, 1);

 FUNC_18(&VAR_11->lock);
 if (FUNC_1(VAR_7, VAR_9)) {
  VAR_14 = -VAR_0;
  goto out_config_put;
 }

 FUNC_10(&VAR_12->list, &VAR_11->configs);
 FUNC_19(&VAR_11->lock);
 FUNC_17(&VAR_12->entries, 1);
 return VAR_12;




 FUNC_18(&VAR_11->lock);
 FUNC_11(&VAR_12->list);
out_config_put:
 FUNC_19(&VAR_11->lock);
 FUNC_3(VAR_12);
 return FUNC_0(VAR_14);
}
