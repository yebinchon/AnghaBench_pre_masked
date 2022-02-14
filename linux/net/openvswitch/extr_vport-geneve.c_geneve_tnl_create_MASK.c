
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vport_parms {int name; struct nlattr* options; int dp; } ;
struct vport {int flags; } ;
struct nlattr {int dummy; } ;
struct net_device {int flags; } ;
struct net {int dummy; } ;
struct geneve_port {int dst_port; } ;


 int VAR_0 ;
 struct vport* FUNC_0 (struct vport*) ;
 struct vport* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct vport*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct vport*,int,int *) ;
 struct vport* FUNC_4 (struct net*,int ,int ,int ) ;
 struct geneve_port* FUNC_5 (struct vport*) ;
 struct nlattr* FUNC_6 (struct nlattr*,int ) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 struct net* FUNC_9 (int ) ;
 int VAR_4 ;
 struct vport* FUNC_10 (int,int *,struct vport_parms const*) ;
 int FUNC_11 (struct vport*) ;
 int FUNC_12 (struct vport*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static struct vport *FUNC_15(const struct vport_parms *VAR_5)
{
 struct net *VAR_6 = FUNC_9(VAR_5->dp);
 struct nlattr *VAR_7 = VAR_5->options;
 struct geneve_port *VAR_8;
 struct net_device *VAR_9;
 struct vport *VAR_10;
 struct nlattr *VAR_11;
 u16 VAR_12;
 int VAR_13;

 if (!VAR_7) {
  VAR_13 = -VAR_0;
  goto error;
 }

 VAR_11 = FUNC_6(VAR_7, VAR_3);
 if (VAR_11 && FUNC_8(VAR_11) == sizeof(u16)) {
  VAR_12 = FUNC_7(VAR_11);
 } else {

  VAR_13 = -VAR_0;
  goto error;
 }

 VAR_10 = FUNC_10(sizeof(struct geneve_port),
    &VAR_4, VAR_5);
 if (FUNC_2(VAR_10))
  return VAR_10;

 VAR_8 = FUNC_5(VAR_10);
 VAR_8->dst_port = VAR_12;

 FUNC_13();
 VAR_9 = FUNC_4(VAR_6, VAR_5->name, VAR_2, VAR_12);
 if (FUNC_2(VAR_9)) {
  FUNC_14();
  FUNC_11(VAR_10);
  return FUNC_0(VAR_9);
 }

 VAR_13 = FUNC_3(VAR_9, VAR_9->flags | VAR_1, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_12(VAR_9);
  FUNC_14();
  FUNC_11(VAR_10);
  goto error;
 }

 FUNC_14();
 return VAR_10;
error:
 return FUNC_1(VAR_13);
}
