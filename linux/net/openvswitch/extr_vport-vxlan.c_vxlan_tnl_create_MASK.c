
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vxlan_config {int no_share; int flags; int dst_port; int mtu; } ;
struct vport_parms {int name; struct nlattr* options; int dp; } ;
struct vport {int flags; } ;
struct nlattr {int dummy; } ;
struct net_device {int flags; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct vport* FUNC_0 (struct vport*) ;
 struct vport* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct vport*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct vport*,int,int *) ;
 int FUNC_4 (int ) ;
 struct nlattr* FUNC_5 (struct nlattr*,int ) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 struct net* FUNC_8 (int ) ;
 struct vport* FUNC_9 (int ,int *,struct vport_parms const*) ;
 int FUNC_10 (struct vport*) ;
 int VAR_8 ;
 int FUNC_11 (struct vport*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct vport*,struct nlattr*,struct vxlan_config*) ;
 struct vport* FUNC_15 (struct net*,int ,int ,struct vxlan_config*) ;

__attribute__((used)) static struct vport *FUNC_16(const struct vport_parms *VAR_9)
{
 struct net *VAR_10 = FUNC_8(VAR_9->dp);
 struct nlattr *VAR_11 = VAR_9->options;
 struct net_device *VAR_12;
 struct vport *VAR_13;
 struct nlattr *VAR_14;
 int VAR_15;
 struct vxlan_config VAR_16 = {
  .no_share = 1,
  .flags = VAR_6 | VAR_7,

  .mtu = VAR_2,
 };

 if (!VAR_11) {
  VAR_15 = -VAR_0;
  goto error;
 }

 VAR_14 = FUNC_5(VAR_11, VAR_4);
 if (VAR_14 && FUNC_7(VAR_14) == sizeof(u16)) {
  VAR_16.dst_port = FUNC_4(FUNC_6(VAR_14));
 } else {

  VAR_15 = -VAR_0;
  goto error;
 }

 VAR_13 = FUNC_9(0, &VAR_8, VAR_9);
 if (FUNC_2(VAR_13))
  return VAR_13;

 VAR_14 = FUNC_5(VAR_11, VAR_5);
 if (VAR_14) {
  VAR_15 = FUNC_14(VAR_13, VAR_14, &VAR_16);
  if (VAR_15) {
   FUNC_10(VAR_13);
   goto error;
  }
 }

 FUNC_12();
 VAR_12 = FUNC_15(VAR_10, VAR_9->name, VAR_3, &VAR_16);
 if (FUNC_2(VAR_12)) {
  FUNC_13();
  FUNC_10(VAR_13);
  return FUNC_0(VAR_12);
 }

 VAR_15 = FUNC_3(VAR_12, VAR_12->flags | VAR_1, ((void*)0));
 if (VAR_15 < 0) {
  FUNC_11(VAR_12);
  FUNC_13();
  FUNC_10(VAR_13);
  goto error;
 }

 FUNC_13();
 return VAR_13;
error:
 return FUNC_1(VAR_15);
}
