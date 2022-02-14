
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netns_ipvs {scalar_t__ mixed_address_family_dests; } ;
struct TYPE_2__ {int in6; int ip; } ;
struct ipvs_sync_daemon_cfg {int mcast_ttl; void* mcast_port; TYPE_1__ mcast_group; int mcast_af; void* sync_maxlen; int syncid; int mcast_ifn; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ipvs_sync_daemon_cfg*,int ,int) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 void* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct netns_ipvs*,struct ipvs_sync_daemon_cfg*,int ) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static int FUNC_11(struct netns_ipvs *VAR_13, struct nlattr **VAR_14)
{
 struct ipvs_sync_daemon_cfg VAR_15;
 struct nlattr *VAR_16;
 int VAR_17;

 FUNC_2(&VAR_15, 0, sizeof(VAR_15));
 if (!(VAR_14[VAR_10] &&
       VAR_14[VAR_7] &&
       VAR_14[VAR_11]))
  return -VAR_3;
 FUNC_10(VAR_15.mcast_ifn, FUNC_3(VAR_14[VAR_7]),
  sizeof(VAR_15.mcast_ifn));
 VAR_15.syncid = FUNC_7(VAR_14[VAR_11]);

 VAR_16 = VAR_14[VAR_12];
 if (VAR_16)
  VAR_15.sync_maxlen = FUNC_6(VAR_16);

 VAR_16 = VAR_14[VAR_5];
 if (VAR_16) {
  VAR_15.mcast_af = VAR_0;
  VAR_15.mcast_group.ip = FUNC_5(VAR_16);
  if (!FUNC_0(VAR_15.mcast_group.ip))
   return -VAR_3;
 } else {
  VAR_16 = VAR_14[VAR_6];
  if (VAR_16) {
   return -VAR_2;

  }
 }

 VAR_16 = VAR_14[VAR_8];
 if (VAR_16)
  VAR_15.mcast_port = FUNC_6(VAR_16);

 VAR_16 = VAR_14[VAR_9];
 if (VAR_16)
  VAR_15.mcast_ttl = FUNC_8(VAR_16);




 if (VAR_13->mixed_address_family_dests > 0)
  return -VAR_3;

 VAR_17 = FUNC_9(VAR_13, &VAR_15,
    FUNC_7(VAR_14[VAR_10]));
 return VAR_17;
}
