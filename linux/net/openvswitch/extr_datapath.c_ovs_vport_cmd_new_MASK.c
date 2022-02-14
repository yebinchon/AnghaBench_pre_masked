
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vport_parms {int port_no; struct nlattr* upcall_portids; struct datapath* dp; struct nlattr* options; void* type; int name; } ;
struct vport {int dev; } ;
struct sk_buff {int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct ovs_header* userhdr; struct nlattr** attrs; } ;
struct datapath {unsigned int max_headroom; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct vport*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct vport*) ;
 int VAR_16 ;
 int FUNC_3 (struct genl_info*) ;
 struct datapath* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int) ;
 struct vport* FUNC_8 (struct vport_parms*) ;
 int FUNC_9 (struct nlattr*) ;
 void* FUNC_10 (struct nlattr*) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,struct sk_buff*,struct genl_info*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct datapath*,unsigned int) ;
 struct sk_buff* FUNC_15 () ;
 int FUNC_16 (struct vport*,struct sk_buff*,int ,int ,int ,int ,int ,int ) ;
 struct vport* FUNC_17 (struct datapath*,int) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_17, struct genl_info *VAR_18)
{
 struct nlattr **VAR_19 = VAR_18->attrs;
 struct ovs_header *VAR_20 = VAR_18->userhdr;
 struct vport_parms VAR_21;
 struct sk_buff *VAR_22;
 struct vport *VAR_23;
 struct datapath *VAR_24;
 unsigned int VAR_25;
 u32 VAR_26;
 int VAR_27;

 if (!VAR_19[VAR_10] || !VAR_19[VAR_13] ||
     !VAR_19[VAR_14])
  return -VAR_4;
 if (VAR_19[VAR_9])
  return -VAR_7;

 VAR_26 = VAR_19[VAR_12]
  ? FUNC_10(VAR_19[VAR_12]) : 0;
 if (VAR_26 >= VAR_0)
  return -VAR_3;

 VAR_22 = FUNC_15();
 if (!VAR_22)
  return -VAR_6;

 FUNC_11();
restart:
 VAR_24 = FUNC_4(FUNC_18(VAR_17->sk), VAR_20->dp_ifindex);
 VAR_27 = -VAR_5;
 if (!VAR_24)
  goto exit_unlock_free;

 if (VAR_26) {
  VAR_23 = FUNC_17(VAR_24, VAR_26);
  VAR_27 = -VAR_2;
  if (VAR_23)
   goto exit_unlock_free;
 } else {
  for (VAR_26 = 1; ; VAR_26++) {
   if (VAR_26 >= VAR_0) {
    VAR_27 = -VAR_3;
    goto exit_unlock_free;
   }
   VAR_23 = FUNC_17(VAR_24, VAR_26);
   if (!VAR_23)
    break;
  }
 }

 VAR_21.name = FUNC_9(VAR_19[VAR_10]);
 VAR_21.type = FUNC_10(VAR_19[VAR_13]);
 VAR_21.options = VAR_19[VAR_11];
 VAR_21.dp = VAR_24;
 VAR_21.port_no = VAR_26;
 VAR_21.upcall_portids = VAR_19[VAR_14];

 VAR_23 = FUNC_8(&VAR_21);
 VAR_27 = FUNC_2(VAR_23);
 if (FUNC_1(VAR_23)) {
  if (VAR_27 == -VAR_1)
   goto restart;
  goto exit_unlock_free;
 }

 VAR_27 = FUNC_16(VAR_23, VAR_22, FUNC_3(VAR_18),
          VAR_18->snd_portid, VAR_18->snd_seq, 0,
          VAR_15, VAR_8);

 VAR_25 = FUNC_6(VAR_23->dev);

 if (VAR_25 > VAR_24->max_headroom)
  FUNC_14(VAR_24, VAR_25);
 else
  FUNC_7(VAR_23->dev, VAR_24->max_headroom);

 FUNC_0(VAR_27 < 0);
 FUNC_13();

 FUNC_12(&VAR_16, VAR_22, VAR_18);
 return 0;

exit_unlock_free:
 FUNC_13();
 FUNC_5(VAR_22);
 return VAR_27;
}
