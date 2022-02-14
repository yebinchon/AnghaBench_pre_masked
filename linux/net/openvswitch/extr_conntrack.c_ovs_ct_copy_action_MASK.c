
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {int proto; } ;
struct sw_flow_key {TYPE_1__ ip; } ;
struct sw_flow_actions {int dummy; } ;
struct ovs_conntrack_info {TYPE_2__* ct; int nf_ct_timeout; scalar_t__* timeout; int zone; scalar_t__ family; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
typedef int ct_info ;
struct TYPE_8__ {int timeout; } ;
struct TYPE_7__ {int ct_general; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ovs_conntrack_info*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct sw_flow_key const*) ;
 int FUNC_4 (struct ovs_conntrack_info*,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct net*,TYPE_2__*,scalar_t__,int ,scalar_t__*) ;
 TYPE_3__* FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (struct net*,int *,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (struct ovs_conntrack_info*,char const*,struct sw_flow_key const*,int) ;
 int FUNC_11 (struct sw_flow_actions**,int ,struct ovs_conntrack_info*,int,int) ;
 int FUNC_12 (struct nlattr const*,struct ovs_conntrack_info*,char const**,int) ;
 int FUNC_13 (char*,scalar_t__*) ;
 int FUNC_14 (int ) ;

int FUNC_15(struct net *VAR_8, const struct nlattr *VAR_9,
         const struct sw_flow_key *VAR_10,
         struct sw_flow_actions **VAR_11, bool VAR_12)
{
 struct ovs_conntrack_info VAR_13;
 const char *VAR_14 = ((void*)0);
 u16 VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_10);
 if (VAR_15 == VAR_4) {
  FUNC_0(VAR_12, "ct family unspecified");
  return -VAR_0;
 }

 FUNC_4(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.family = VAR_15;

 FUNC_9(&VAR_13.zone, VAR_6,
   VAR_5, 0);

 VAR_16 = FUNC_12(VAR_9, &VAR_13, &VAR_14, VAR_12);
 if (VAR_16)
  return VAR_16;


 VAR_13.ct = FUNC_8(VAR_8, &VAR_13.zone, VAR_2);
 if (!VAR_13.ct) {
  FUNC_0(VAR_12, "Failed to allocate conntrack template");
  return -VAR_1;
 }

 if (VAR_13.timeout[0]) {
  if (FUNC_6(VAR_8, VAR_13.ct, VAR_15, VAR_10->ip.proto,
          VAR_13.timeout))
   FUNC_13("Failed to associated timeout "
         "policy `%s'\n", VAR_13.timeout);
  else
   VAR_13.nf_ct_timeout = FUNC_14(
    FUNC_7(VAR_13.ct)->timeout);

 }

 if (VAR_14) {
  VAR_16 = FUNC_10(&VAR_13, VAR_14, VAR_10, VAR_12);
  if (VAR_16)
   goto err_free_ct;
 }

 VAR_16 = FUNC_11(VAR_11, VAR_7, &VAR_13,
     sizeof(VAR_13), VAR_12);
 if (VAR_16)
  goto err_free_ct;

 FUNC_2(VAR_3, &VAR_13.ct->status);
 FUNC_5(&VAR_13.ct->ct_general);
 return 0;
err_free_ct:
 FUNC_1(&VAR_13);
 return VAR_16;
}
