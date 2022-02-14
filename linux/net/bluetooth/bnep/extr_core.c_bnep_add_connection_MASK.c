
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct socket {int sk; } ;
struct net_device {int name; int ** dev_addr; } ;
struct TYPE_7__ {int msg_flags; } ;
struct TYPE_6__ {int ** h_dest; int ** h_source; } ;
struct bnep_session {scalar_t__ state; int flags; long long mc_filter; int task; TYPE_3__ msg; int role; struct socket* sock; struct net_device* dev; TYPE_2__ eh; } ;
struct bnep_connadd_req {int flags; char* device; int role; } ;
struct TYPE_8__ {TYPE_1__* chan; } ;
struct TYPE_5__ {int src; int dst; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int *) ;
 int VAR_9 ;
 struct bnep_session* FUNC_6 (int *) ;
 int FUNC_7 (struct bnep_session*) ;
 int FUNC_8 (struct bnep_session*) ;
 int FUNC_9 (int ) ;
 struct net_device* FUNC_10 (int,char*,int ,int ) ;
 int FUNC_11 (void*,int *) ;
 int FUNC_12 (struct bnep_session*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct bnep_session*) ;
 int VAR_13 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,struct bnep_session*,char*,int ) ;
 int FUNC_17 (struct socket*) ;
 TYPE_4__* FUNC_18 (int ) ;
 int FUNC_19 (int **,int **,int) ;
 int FUNC_20 (int ) ;
 struct bnep_session* FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (int *) ;

int FUNC_26(struct bnep_connadd_req *VAR_14, struct socket *VAR_15)
{
 u32 VAR_16 = FUNC_0(VAR_0);
 struct net_device *VAR_17;
 struct bnep_session *VAR_18, *VAR_19;
 u8 VAR_20[VAR_6], VAR_21[VAR_6];
 int VAR_22;

 FUNC_1("");

 if (!FUNC_17(VAR_15))
  return -VAR_2;

 if (VAR_14->flags & ~VAR_16)
  return -VAR_4;

 FUNC_11((void *) VAR_20, &FUNC_18(VAR_15->sk)->chan->dst);
 FUNC_11((void *) VAR_21, &FUNC_18(VAR_15->sk)->chan->src);


 VAR_17 = FUNC_10(sizeof(struct bnep_session),
      (*VAR_14->device) ? VAR_14->device : "bnep%d",
      VAR_8,
      VAR_10);
 if (!VAR_17)
  return -VAR_5;

 FUNC_14(&VAR_12);

 VAR_19 = FUNC_6(VAR_20);
 if (VAR_19 && VAR_19->state == VAR_1) {
  VAR_22 = -VAR_3;
  goto failed;
 }

 VAR_18 = FUNC_21(VAR_17);



 FUNC_19(VAR_18->eh.h_dest, &VAR_21, VAR_6);
 FUNC_19(VAR_18->eh.h_source, &VAR_20, VAR_6);
 FUNC_19(VAR_17->dev_addr, VAR_18->eh.h_dest, VAR_6);

 VAR_18->dev = VAR_17;
 VAR_18->sock = VAR_15;
 VAR_18->role = VAR_14->role;
 VAR_18->state = VAR_1;
 VAR_18->flags = VAR_14->flags;

 VAR_18->msg.msg_flags = VAR_7;
 FUNC_4(VAR_17, FUNC_12(VAR_18));
 FUNC_5(VAR_17, &VAR_13);

 VAR_22 = FUNC_22(VAR_17);
 if (VAR_22)
  goto failed;

 FUNC_7(VAR_18);

 FUNC_9(VAR_9);
 VAR_18->task = FUNC_16(VAR_11, VAR_18, "kbnepd %s", VAR_17->name);
 if (FUNC_2(VAR_18->task)) {

  FUNC_20(VAR_9);
  FUNC_24(VAR_17);
  FUNC_8(VAR_18);
  VAR_22 = FUNC_3(VAR_18->task);
  goto failed;
 }

 FUNC_25(&VAR_12);
 FUNC_23(VAR_14->device, VAR_17->name);
 return 0;

failed:
 FUNC_25(&VAR_12);
 FUNC_15(VAR_17);
 return VAR_22;
}
